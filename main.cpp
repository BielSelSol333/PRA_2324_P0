
#include <iostream>
#include "BrazoRobotico.h"

int main(){
	BrazoRobotico r1(0, 0, 0, false);

	r1.mover(5, 2, 0);
	r1.coger();
	r1.mover(-5, 0, 8);
	r1.soltar();

	return 0;
}
