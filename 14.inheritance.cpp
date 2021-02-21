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
};

class Bus : public Vehicle {
  public:
    string model;     
};

int main() {  
  Car car; 
  car.brand = "Tesla";
  car.model = "Model Y";
  car.applyBrakes();
  car.honk();  

  Bus bus; 
  bus.brand = "Volvo";
  car.model = "Super Luxury";
  bus.applyBrakes();
  bus.honk();  

}