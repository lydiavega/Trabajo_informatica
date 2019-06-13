#include "Cazador.h"


Cazador::Cazador(void)
{
	animacion = new SpriteSequence("imagenes/Cazador.png", 4, 1, 100, true, 0.5, 0.5, 4.0, 4.0, 0);
}


Cazador::~Cazador(void)
{

}

void Cazador::Dibuja(void)
{
	glTranslatef(posicion.x, posicion.y, 0.1);


	animacion->draw();

	glTranslatef(-posicion.x, -posicion.y, 0.0); //vuelve al origen de coordenadas

}

void Cazador::Mueve(float t)
{
	animacion->loop();
	posicion = posicion + velocidad * t;

}

void Cazador::SetDims(float anch, float alt)
{
	ancho = anch;
	alto = alt;
}

void Cazador::SetPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}

void Cazador::SetVel(float ix, float iy)
{
	velocidad.x = ix;
	velocidad.y = iy;
}


