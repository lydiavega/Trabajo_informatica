#include "Gallina1.h"


Gallina1::Gallina1(void)
{
}


Gallina1::~Gallina1(void)
{
}

void Gallina1::Dibuja (void)
{

	
	
}

void Gallina1::Mueve (float t)
{
	
	posicion=posicion+velocidad*t;
	
}

void Gallina1::SetDims (float anch, float alt)
{
	ancho=anch;
	alto=alt;
}
	
void Gallina1::SetPos (float ix,float iy)
{
	posicion.x=ix;
	posicion.y=iy;
}
	
void Gallina1::SetVel (float ix,float iy)
{
	velocidad.x=ix;
	velocidad.y=iy;
}
