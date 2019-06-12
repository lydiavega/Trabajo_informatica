#include "Frontera.h"


Frontera::Frontera(void)
{
	//Establecemos las coordenadas de los límites exteriores del escenario, que coinciden con la valla del dibujo
	techo.SetPos(0.0f, 65.0f, 100.0f, 61.0f);
	suelo.SetPos(0.0f, 0.0f, 100.0f, 4.0f);
	izquierda.SetPos(0.0f, 0.0f, 1.5f, 65.0f);
	derecha.SetPos(98.5f, 0.0f, 100.0f, 65.0f);

	//Solución provisional
	casa1.SetPos(1.7f, 49.8f, 13.5f, 50.3f); //les separan una distancia de 8 unidades
	casa2.SetPos(21.5f, 49.8f, 33.3f, 50.3f);
	casa3.SetPos(41.3f, 49.8f, 53.1f, 50.3f);
	casa4.SetPos(61.1f, 49.8f, 72.9f, 50.3f);
	casa5.SetPos(80.9f, 49.8f, 92.7f, 50.3f);

	
}


Frontera::~Frontera(void)
{
}

