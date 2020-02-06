#include <iostream>
#include <fstream>
#include <inttypes.h>

using namespace std;

#pragma pack(push, 1)
struct JPG_HEADER{
 	uint16_t SOI; // Marcador al inicio de la imagen 
 	uint16_t APPO; // Marcador a la aplicacion 
 	uint16_t LENGTH; // Longitud de la APP0
 	char type[5]; // Identificador
	int8_t Version1; // Version de la extension del archivo
	int8_t Version2;
	uint8_t Units; // Unidades usadas para la comprension
	uint16_t Xdensity; // resolucion horizontal 
	uint16_t Ydensity; // Resolucion Vertical
	uint8_t XTHUMNAIL; // Cantidad de pixeles horizontales
	uint8_t YTHUMNAIL; // cantidad de pixeles verticales


};


#pragma pack(pop)

class MyJPG{
	private:
		private:
		char *file_name;
		ifstream file_bmp;
		JPG_HEADER reg_header;
		void ReadHeader();

	public:
		void OpenBmp(const char * filename);		
		void PrintHeader();
};