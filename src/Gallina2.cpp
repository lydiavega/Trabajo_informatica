#include "Gallina2.h"


Gallina2::Gallina2(void)
{
	animacion = new SpriteSequence("imagenes/Gallina2.png", 3, 1, 100, true, 0.5, 0.5, 4.0, 4.0, 0);
}


Gallina2::~Gallina2(void)
{
}

void Gallina2::Dibuja(void)
{
	glTranslatef(posicion.x, posicion.y, 0.1);

	glEnable(GL_LIGHTING);
	animacion->draw();

	glTranslatef(-posicion.x, -posicion.y, 0.0); //vuelve al origen de coordenadas



}

void Gallina2::Mueve(float t)
{

	animacion->loop();

	posicion = posicion + velocidad * t;

}

void Gallina2::SetDims(float anch, float alt)
{
	ancho = anch;
	alto = alt;
}

void Gallina2::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}

void Gallina2::SetVel(float ix, float iy)
{
	velocidad.x = ix;
	velocidad.y = iy;
}

