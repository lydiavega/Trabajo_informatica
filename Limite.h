#pragma once

#include "Vector2D.h"



class Limite
{
	friend class Interaccion;


private:

	Vector2D vertice1; //Los límites son rectangulares, con lo que es suficiente con indicar dos vértices opuestos
	Vector2D vertice2;


	public:
	Limite(void);
	~Limite(void);

	void SetPos (float v1x, float v1y, float v2x, float v2y);
	
	
};
