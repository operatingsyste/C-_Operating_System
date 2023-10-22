/*

written by ghgltggamer 
Copyright (c) ghgltggamer

*/

#include "lib/fozdtx.h"
#include <stdio.h>

using namespace fozdtx;

int main(){
	
	
	ifstream conf("config.dio");
	string con;
	conf>>con;
	
	
	
	ifstream pass("mac_P.dio");
	string pas;
	pass>>pas;
	
	
	
if (con == "tr_config"){
	
	
	ifstream mac_n("mac.dio");
	string machiene_name;
	mac_n>>machiene_name;
	FOZ_DTX_CREATE_APPLICATION_CONTROLLER DIO;
	
	DIO.set_Position(18, 9);
	cout<<"Hellow "<<machiene_name;
	cout<<endl<<endl<<"Please enter your password : ";
	string ent_pas;
	cin>>ent_pas;
	bool inf = true;
	while (inf = true){
	if (ent_pas == pas){
		cout<<endl<<endl<<"-------------------------DIO STARTUP--------------------"<<endl<<endl;
		
		
		cout<<"1.) command line </>"<<endl;
		cout<<"2.) applications [A]"<<endl;
		cout<<"3.) settings (#)"<<endl;
		cout<<"4.) low level data [!]"<<endl;
		
		cout<<endl<<endl;
		
		int app_no;
		
		while (inf = true){
			cout<<"Enter the program number to start : ";
			cin>>app_no;
			
			 if (app_no == 1){
			 	
			 	
			 	
			 	// kernel
			 	cout<<endl<<endl<<"-----------------Command Sector-------------"<<endl<<endl;
			 	string txt;
			 	for (int lines = 1;inf = true;lines++){
			 		
			 		cout<<"//";
			 		cin>>txt;
			 		
			 		
			 		
			 		if (txt == "PRINT"){
			 			
			 			string PRINT;
			 			getline(cin, PRINT);
			 			cout<<PRINT<<endl<<endl;
			 			
			 			
			 		}
			 		if (txt == "FILE"){
			 			
			 			string FILE;
			 			cin>>FILE;
			 			if (FILE == "MOV"){
			 				
			 				
			 				string DIR;
			 				cin>>DIR;
			 				
			 				string FN;
			 				cin>>FN;
			 				ifstream mov(FN);
			 				if (mov.is_open()){
			 					
			 					cout<<"getted file";
			 					cout<<endl<<endl<<"Copying file data"<<endl<<endl<<"Processing data"<<endl<<endl;
			 					
			 					string process_data = DIR + "/"+ FN;
			 					ofstream file_mov(process_data);
			 					string FILE_DATA;
			 					while (getline(mov, FILE_DATA)){
			 						
			 						file_mov<<FILE_DATA<<endl;
			 						
			 					}
			 					
			 					
			 					
			 				}
			 				
			 				
			 				
			 				
			 				
			 				else {
			 					
			 					cout<<"ERROR : FILE NOT FOUND"<<endl<<endl;
			 					
			 				}
			 				
			 			}
			 			
			 			else if (FILE == "DELETE"){
			 					
			 					
			 					
			 					char file_name[] = "";
			 					gets(file_name);
			 					if(remove(file_name) != 0){
			 						
			 						cout<<"FATAL ERROR";
			 						
			 					}
			 					else {
			 						
			 					}
			 					
			 					
			 					
			 				}
			 				
			 				else if (FILE == "CREATE"){
			 					
			 					string file_n;
			 					cin>>file_n;
			 					
			 					
			 					
			 					
			 					string file_d;
			 					getline(cin, file_d);
			 					
			 					ofstream file_create(file_n);
			 					file_create<<file_d;
			 					
			 				}
			 			
			 		}
			 		
			 		
			 		
			 		
			 		
			 	}
			 	
			 	
			 	
			 	
			 	
			 	
			 	
			 	
			 	
			 	
			 }
		}
		break;
	}
	else {
		cout<<"Invalid password entered"<<endl;
		cout<<endl<<endl<<"Please enter your password : ";
// 	string ent_pas;
	cin>>ent_pas;
	}
	}
	
	
	
}
// setup
else {
	
	// system("color 3");
	bool setUp = false;
	
	FOZ_DTX_CREATE_APPLICATION_CONTROLLER DIO;
	
	DIO.set_Position(18, 0);
	cout<<"DIO Utility setup";
	
	cout<<endl<<endl<<endl;
	
	cout<<"Please enter Y/n for start the setup (Y = yes , n = no): ";
	string set_up_start;
	cin>>set_up_start;
	
	bool st = true;
	while (st = true){
	if (set_up_start == "Y"){
		cout<<"SetUp started!!!";
		cout<<endl<<endl;
		cout<<"What will you name your machiene(Don't add spaces) : ";
		string mac_name;
		cin>>mac_name;
		
		ofstream mac("mac.dio");
		mac<<mac_name;
		
		string pass;
		cout<<endl<<"Create a strong password (Still don't add spaces): ";
		cin>>pass;
		
		ofstream passw("mac_P.dio");
		passw<<pass;
		
		ofstream config("config.dio");
		config<<"tr_config";
		
		
		
		break;
	}
	else if (set_up_start == "n"){
		cout<<"Setup was cancled can't run DIO right now";
		break;
	}
	else if (set_up_start != "Y"){
		cout<<"Enter only Y/n accepted status required"<<endl<<endl;
		cout<<"Please enter Y/n for start the setup (Y = yes , n = no): ";
	string set_up_start;
	cin>>set_up_start;
	cout<<endl;
	}
	else {
		cout<<"fatal error";
	}
	}
	
}
	
	
	
	
	
}