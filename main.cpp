#include "myjpg.h"


using namespace std;

int main(){
	MyJPG  f;
    char *filename ;
    cout << "JPG file:" ; // force output
    cin >> filename;
	//filename =  "./1.jpg";
	f.OpenBmp(filename);
	f.PrintHeader();
}

