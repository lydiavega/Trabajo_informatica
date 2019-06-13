#pragma once

#include <stdlib.h> 
#include "ETSIDI.h"
#include <stdio.h>
#include "glut.h"

#include "Vector2D.h"

class Disparo
{

private:
	Vector2D posicion;
	float ancho, alto;

public:
	Disparo();
	~Disparo(void);
	void Dibuja();
	void SetDims(float anch, float alt); //ancho y alto del disparo
	void SetPos(float vx, float vy); //Posición (centro del rectángulo que es el disparo)
	

};

