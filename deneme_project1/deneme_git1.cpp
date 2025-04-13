#include <iostream>

using namespace std;

class Araba
{
	public:
		string marka;
		int model;
		int motor;

};


int main()
{
	Araba araba1,araba2;

	araba1.marka = "Ford";
	araba1.model = 2020;
	araba1.motor = 2000;

	araba2.marka = "Mercedes";
	araba2.model = 2012;
	araba2.motor = 3000;

	cout << "Hello World !" << endl << endl;

	cout << "Araba 1 ozellikler :" << endl << endl;
	cout << "Marka :" << araba1.marka << endl;
	cout << "Model :" << araba1.model << endl;
	cout << "Motor :" << araba1.motor << endl << endl;

	cout << "Araba 2 ozellikler :" << endl << endl;
	cout << "Marka :" << araba2.marka << endl;
	cout << "Model :" << araba2.model << endl;
	cout << "Motor :" << araba2.motor << endl << endl;



	return 0;
}