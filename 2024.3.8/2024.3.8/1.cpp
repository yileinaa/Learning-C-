#include <iostream>
using namespace std;
struct S
{
	string name;
	string addr;
	int phone;
}p1;
class Car
{
public:
	Car(void);
	~Car();
	const unsigned int FULL_GAS = 100;
	string color;
	string engine;
	int wheel;
	float gas_tank;
	unsigned int Wheel;
	void fill_tank(float liter);
	//void running();
};


Car::Car(void)
{
	color = "white";
	engine = "V8";
	wheel = 4;
	gas_tank = FULL_GAS;
}//¹¹ÔìÆ÷
Car::~Car()
{
	;
}//Îö¹¹Æ÷

void Car::fill_tank(float liter)
{
	gas_tank += liter;
}

int main()
{
	class Car my_car;
	class Car my_car1[10];
	my_car.gas_tank = 100.2;
	return 0;
}