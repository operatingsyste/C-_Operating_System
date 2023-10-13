// FOZ DTX LIBRARY FIR ANDROID KERNEL LINUX (L) 2023
// FOZ DTX :- WRITTEN BY GHGLTGGAMER 
// Copyright (c) FOZ_DTX 2023

// Source
// Headerfiles necessary

#include <iostream>
#include <cstdio>
#include <fstream>
#include "versions.h"
#include "colors.h"
#include "variables.h"
#include "datatypes.h"

// Headerfiles - end


// namespacing 
using namespace std;

// Main library code 

// FOZ DTX NAMESPACE 

namespace fozdtx{
	/* defaults
	// reset or create colors.h a important file for FOZ DTX 
	ofstream colors("colors.h");*/
	
	// write function 
	// syntax for this function write(<text which you want to print>);
	int write(string text){
		cout<<text;
	}
	
	int write_int(int text){
		cout<<text;
	}
	
	int write_bool(bool text){
		if (text == true){
			cout<<"true";
		}
		else if (text == false){
			cout<<"false";
		}
		else {
			cout<<"ERROR (FOZDTX) : write_bool() takes only boolean for write them not plain text";
		}
	}
	
	int write_bool_machiene(bool text){
		if (text == true){
			cout<<true;
		}
		
		else if (text == false){
			cout<<false;
		}
		
		else {
			cout<<"ERROR (FOZDTX) : write_bool_machiene() takes only boolean for display machiene code";
		}
	}
	
	
	int write_float(float text){
		cout<<text;
	}
	
	int write_double(double text){
		cout<<text;
	}
	
	// write function - end
	
	
	// initalisation
	// use for initalise the version of FOZ DTX for work with
	
	string __foz__dtx__init__;
	
	int FOZ_DTX_INIT(string version){
		if (version == "FOZ_DTX_BETA_0_1_PRERELEASE"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_BETA_0_1_PRERELEASE = true;";	__foz__dtx__init__="FOZ_DTX_BETA_0_1_PRERELEASE";
		
		//colors<<"";
		}
		
		
		else if (version == "FOZ_DTX_BETA_0_1"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_BETA_0_1 = true;";	__foz__dtx__init__="FOZ_DTX_BETA_0_1";
		}
		
		else if (version == "FOZ_DTX_0_1"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_0_1 = true;";	__foz__dtx__init__="FOZ_DTX_0_1";
		}
		
		
		else if (version == "FOZ_DTX_0_2"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_0_2 = true;";	__foz__dtx__init__="FOZ_DTX_0_2";
		}
		
		
		
		else if (version == "FOZ_DTX_0_3"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_0_3 = true;";	__foz__dtx__init__="FOZ_DTX_0_3";
		}
		
		
		
		else if (version == "FOZ_DTX_0_4"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_0_4 = true;";	__foz__dtx__init__="FOZ_DTX_0_4";
		}
		
		
		
		else if (version == "FOZ_DTX_0_5"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_0_5 = true;";	__foz__dtx__init__="FOZ_DTX_0_5";
		}
		
		
		
		else if (version == "FOZ_DTX_BETA_1_0_PRERELEASE"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_BETA_1_0_PRERELEASE = true;";	__foz__dtx__init__="FOZ_DTX_BETA_1_0_PRERELEASE";
		}
		
		else if (version == "FOZ_DTX_BETA_1_0"){
		ofstream foz_dtx1("__FOZ__DTX__INIT__.h");
		foz_dtx1<<"std::bool FOZ_DTX_BETA_1_0 = true;";	__foz__dtx__init__="FOZ_DTX_BETA_1_0";
		}
		
		
		else {
			system("color 4");
			cout<<"ERROR (FOZ DTX) : Please define a valid FOZ DTX version in FOZ_DTX_INIT(<valid_version>)";
			ofstream error("errors.txt");
			error<<"ERROR (FOZ DTX) : Please define a valid FOZ DTX version in FOZ_DTX_INIT(<valid_version>)";
		}
	}
	
	
	
	// Tell os kernel
	int FOZ_DTX_TELL_OS_KERNEL(char command[] = "null"){
		ofstream kernel("___FOZ__DTX__TELL__OS__KERNEL___.saves");
		kernel<<"Last_command_was entered_<"<<command<<">();";
	system(command);
	}
	
	
	
	// Application Window
	class FOZ_DTX_CREATE_APPLICATION_CONTROLLER {
		public:
			int set_Position(int x, int y){
				for (int _y = 1;_y <= y;_y++){
					cout<<endl;
				}
				
				for (int _x = 1;_x <= x;_x++){
					cout<<"  ";
				}
			}
			
			
			int create_Cache(string cache_data, string cache_data_store){
				// Cache()--location()
				// Args
				ofstream cache("app.cache");
				if (cache_data == "AUTO"){
					int ram_cache_install=110001111;
					int *cache_ram = &ram_cache_install;
					
					cache<<"FOZ_DTX_VERSION<initalised>() = "<<__foz__dtx__init__<<";"<<endl<<"DTX_DATA_(RAM_LOCATION)="<<cache_ram;
				}
				
			}
			
			
			int close_App(){
				exit (3);
			}
			

	};
	
	
	class FOZ_DTX_CREATE_WEBPAGE {
		public:
			class __SAVE__ {
				public: 
					int url(string page_url, string short_name = "www.savedwebpage.com"){
						ofstream saveWebpage(short_name + ".html");
						saveWebpage<<"<!-- WRITTEN FOZ DTX C++ LIBRARY . COPYRIGHT (C) FOZ DTX C++ LIBRARY --><body style='margin: 0px;'><iframe src='" + page_url + "' style='height: 3000px;width: 100%;border: 0px;></iframe><script>alert('Saved and coded by FOZ DTX and Make sure that you are online and then enter this page because if you are offline then you will got an error');</script></body>'";
					}
			};
			__SAVE__ save;
	};
	FOZ_DTX_CREATE_WEBPAGE webpage;
	
	
	
	string FOZ_DTX_ADD_TEXT_TO_FILE = "This is my new text document";
	typedef ofstream _FOZ_DTX_CREATE_FILE;
	int FOZ_DTX_CREATE_FILE(string file_name = "untitled.txt"){
		_FOZ_DTX_CREATE_FILE newFile(file_name);
		newFile<<FOZ_DTX_ADD_TEXT_TO_FILE;
	}
	
	
}

// FOZ DTX NAMESPACE - END

// Main library code - end

// treminal 
/*int main(){
	fozdtx::write_bool_machiene(true);
fozdtx::FOZ_DTX_INIT(FOZ_DTX_0_5);
fozdtx::FOZ_DTX_TELL_OS_KERNEL(FOZ_DTX_SET_TEXT_COLOR_RED);
//fozdtx::FOZ_DTX_TELL_OS_KERNEL("ls");
fozdtx::FOZ_DTX_CREATE_APPLICATION_CONTROLLER myApp;
int vector_x = vector2.x = 23;
int vector_y = vector2.y = 23;

int cam = Vector3(23, 12, 23);
myApp.set_Position(cam, cam);


fozdtx::write("hy");
string data;
myApp.create_Cache(AUTO, data);
fozdtx::write(data);
cin>>data;
for (int a = 1; a <= 10;a++){
	cin>>data;
	if (data == "/exit"){
		myApp.close_App();
	}
	
	if (data == "/google"){
		
	}
}

}*/