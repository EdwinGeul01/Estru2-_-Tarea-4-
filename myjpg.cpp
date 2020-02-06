#include <limits>
#include <stdio.h>
#include <stdint.h> 
#include <cstring>
#include "myjpg.h"
#include <iomanip>

using namespace std;

void MyJPG::ReadHeader(){
	file_bmp.seekg(0, ios_base::beg);
	file_bmp.read((char *) &reg_header, sizeof(reg_header));
}	

void MyJPG::OpenBmp(const char * filename){
	file_name = (char *)filename;
	file_bmp.open(filename, ifstream::in|ifstream::binary);
	ReadHeader();
}

void MyJPG::PrintHeader(){
	

	double version_double = reg_header.Version1 + (reg_header.Version2*0.1);
	double units = reg_header.Units;
	cout << "********************************************" << endl;
	cout << "Tipo : " << "JPG" << endl; 
	cout << "SOI: " << reg_header.SOI << endl;
	cout << "APP0 : " << reg_header.APPO << endl;
	cout << "APP0 LENGHT: " << reg_header.LENGTH << endl;
	cout << "IDENTIFIER: " << reg_header.type << endl;
	cout << "VERSION: " << version_double<< setprecision(5)<<endl;
	cout << "UNITS : " << units << endl;
	cout << "XDENSITY: " << reg_header.Xdensity << endl;
	cout << "YDENSITY: " << reg_header.Ydensity << endl;
	cout << "YTHUMBNAIL: " << reg_header.Ydensity << endl;
	cout << "XTHUMBNAIL: " << reg_header.Ydensity << endl;


	
	cout << "size of: " << sizeof(JPG_HEADER) << endl;
	cout << "********************************************" << endl;
	
}

