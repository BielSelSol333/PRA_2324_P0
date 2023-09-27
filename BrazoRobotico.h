
#include <iostream>

class BrazoRobotico{
	private:
		double x, y, z;
		bool SObjeto;
	public:
		BrazoRobotico(double x, double y, double z, bool SObjeto);
		float getX();
		float getY();
		float getZ();
		bool getSObjeto();
		void coger();
		void soltar();
		void mover(double x, double y, double z);

};
