#include "Cazador.h"


Cazador::Cazador(void)
{
	
}


Cazador::~Cazador(void)
{

}
	
void Cazador::Dibuja (void)
{
	
	
}

void Cazador::Mueve (float t)
{
	posicion=posicion+velocidad*t;
	
}

void Cazador::SetDims (float anch, float alt)
{
	ancho=anch;
	alto=alt;
}
	
void Cazador::SetPos (float ix,float iy)
{
	posicion.x=ix;
	posicion.y=iy;
}
	
void Cazador::SetVel (float ix,float iy)
{
	velocidad.x=ix;
	velocidad.y=iy;
}
	
