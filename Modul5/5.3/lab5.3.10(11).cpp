#include <iostream>
using namespace std;
class FarmAnimal
{
	public:
		FarmAnimal() { water_consumption = 1; };
		FarmAnimal(double water_consumption);
		double getWaterConsumption();
	protected:
		double water_consumption;
};
FarmAnimal::FarmAnimal(double water_consumption) 
{ 
	this->water_consumption = water_consumption;
	cout << "The body of FarmAnimal constructor is working now with fact parameter " << water_consumption << endl;
}
double FarmAnimal::getWaterConsumption() { return water_consumption; }

class DummyAnimal : public FarmAnimal 
{ 
	public:  
		DummyAnimal(double water_cons);
};
DummyAnimal::DummyAnimal(double water_cons) /*: FarmAnimal(10.0)*/ 
{ 
	this->water_consumption = water_cons;
	cout << "The body of DummyAnimal constructor is working now; the value of water_consuption is " << water_cons << endl;
}
class DoublingAnimal : public FarmAnimal
{
	public:
		DoublingAnimal(double given_water_consumption);
};

DoublingAnimal::DoublingAnimal(double given_water_consumption) : FarmAnimal(2 * given_water_consumption) { cout << "The body of DoublingAnimal constructor is working now; the value of water_consuption is " << getWaterConsumption() << endl; }
void printConsumption(FarmAnimal animal)
{
	cout << "This animal consumes " << animal.getWaterConsumption() << " liters of water" << endl;
}
int main() {
	FarmAnimal animal(5);
	DummyAnimal dumanimal(10);
	DoublingAnimal doubanimal(21);
	cout << "FarmAnimal consumes " << animal.getWaterConsumption() << " liters of water." << endl;
	cout << "What about the others?" << endl;
	printConsumption(dumanimal);
	printConsumption(doubanimal);
	return 0;
}