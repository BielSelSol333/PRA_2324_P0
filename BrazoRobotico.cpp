#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool SObjeto){
	this->x = x;
	this->y = y;
	this->z = z;
	this->SObjeto = SObjeto;
}

float BrazoRobotico::getX(){
	return x;
}

float BrazoRobotico::getY(){
        return y;
}

float BrazoRobotico::getZ(){
        return z;
}

bool BrazoRobotico::getSObjeto(){
	return SObjeto;
}

void BrazoRobotico::coger(){
	SObjeto = true;
}

void BrazoRobotico::soltar(){
        SObjeto = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}
