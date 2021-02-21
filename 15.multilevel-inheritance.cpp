#include <iostream>
#include <string>
using namespace std;

class Vehicle {
  public:
    string brand;     
    void applyBrakes() {
      cout << "Breaks applied" << endl;
    }
    void honk() {
      cout << "Peep.. Peep.. Peepp...!!!" << endl;
    }
};

class Car : public Vehicle {
  public:
    string model;
    string type;
    void describe() {
      cout << "This vehicle is " << model  << " and it is " << type << " type." << endl;
    }
};

class Tesla : public Car {  
  public:
    int maxRangeUponFullCharge;
};

class Toyota : public Car {
  public:
    int fuelCapacity;
    int milesPerGallon;
};

int main() {  
  Tesla tesla; 
  tesla.model = "Model Y"; //inherited from immediate parent class Car
  tesla.type = "Electric"; //inherited from immediate parent class Car
  tesla.maxRangeUponFullCharge = 300;
  tesla.describe();
  tesla.applyBrakes(); //inherited from grand parent class Vehicle

  Toyota toyota; 
  toyota.model = "Highlander"; //inherited from immediate parent class Car
  toyota.type = "Fuel"; //inherited from immediate parent class Car
  toyota.fuelCapacity = 20; 
  toyota.milesPerGallon = 19;
  toyota.describe();
  toyota.applyBrakes(); //inherited from grand parent class Vehicle 
}