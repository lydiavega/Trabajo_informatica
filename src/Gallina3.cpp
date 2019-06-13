#include "Gallina3.h"


Gallina3::Gallina3(void)
{
	animacion = new SpriteSequence("imagenes/Gallina3.png", 5, 1, 100, true, 0.5, 0.5, 6.0, 6.0, 0);
}


Gallina3::~Gallina3(void)
{
}

void Gallina3::Dibuja(void)
{
	glTranslatef(posicion.x, posicion.y, 0.1);

	glEnable(GL_LIGHTING);
	animacion->draw();

	glTranslatef(-posicion.x, -posicion.y, 0.0); //vuelve al origen de coordenadas



}

void Gallina3::Mueve(float t)
{

	animacion->loop();

	posicion = posicion + velocidad * t;

}

void Gallina3::SetDims(float anch, float alt)
{
	ancho = anch;
	alto = alt;
}

void Gallina3::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}

void Gallina3::SetVel(float ix, float iy)
{
	velocidad.x = ix;
	velocidad.y = iy;
}

