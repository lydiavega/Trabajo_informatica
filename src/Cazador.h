#pragma once


#include <stdlib.h> 
#include "ETSIDI.h"
#include <stdio.h>
#include "glut.h"
#include "Vector2D.h"



using ETSIDI::SpriteSequence;


class Cazador
{
	friend class Interaccion;

private:

	float ancho, alto;
	Vector2D posicion;
	Vector2D velocidad;
	SpriteSequence* animacion;



public:
	Cazador(void);
	~Cazador(void);

	void Mueve(float t);
	void Dibuja(void);

	void SetPos(float ix, float iy);
	void SetVel(float ix, float iy);
	void SetDims(float anch, float alt);


};


