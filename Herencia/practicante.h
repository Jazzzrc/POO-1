#pragma once
#include <iostream>
using namespace std;
class Practicante
{
	private:
		int cantidadHoras;
	public:
		Practicante(int can)
		{
			cantidadHoras = can;
		}

		int getCantidad()
		{
			return cantidadHoras;
		}
};
