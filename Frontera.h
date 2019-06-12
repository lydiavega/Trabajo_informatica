#pragma once

#include "Limite.h"

class Frontera
{
	friend class Mundo;
	friend class Interaccion;

private:
	Limite suelo;
	Limite techo;
	Limite izquierda;
	Limite derecha;

	//Solución provisional para detectar las casas del mapa. Plantear una lista de limites de las casas

	Limite casa1;
	Limite casa2;
	Limite casa3;
	Limite casa4;
	Limite casa5;

public:
	Frontera(void);
	~Frontera(void);



};

