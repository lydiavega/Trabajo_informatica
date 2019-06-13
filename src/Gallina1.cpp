#include "Gallina1.h"


Gallina1::Gallina1(void)
{
	animacion = new SpriteSequence("imagenes/Gallina1.png", 3, 1, 100, true,0.5, 0.5, 4.0, 4.0, 0);
}


Gallina1::~Gallina1(void)
{
}

void Gallina1::Dibuja (void)
{
	glTranslatef(posicion.x, posicion.y, 0.1);

	glEnable(GL_LIGHTING);
	animacion->draw();

	glTranslatef(-posicion.x, -posicion.y, 0.0); //vuelve al origen de coordenadas
	
	
}

void Gallina1::Mueve (float t)
{
	
	animacion->loop();

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
