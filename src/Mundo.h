#pragma once

#include <stdlib.h> 
#include "ETSIDI.h"
#include <stdio.h>
#include "glut.h"

#include "Frontera.h"
#include "Disparo.h"
#include "Gallina1.h"
#include"Gallina2.h"
#include "Gallina3.h"
#include"Cazador.h"

class Mundo
{

private:
	Frontera frontera;
	Disparo disparo;
	Gallina1 gallina1;
	Gallina2 gallina2;
	Gallina3 gallina3;
	Cazador cazador;

public:
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void teclaEspecial(unsigned char key);
};

