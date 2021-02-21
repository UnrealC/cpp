#include <iostream>
#include <string>
using namespace std;

class Vehicle {
  public:
    string brand;     
    int year;

    void describe();
    void applyBreaks();  
    int getRating(string model);
};

void Vehicle::applyBreaks() {  
  cout << "Breaks applied. the car stopped" << endl;
}

void Vehicle::describe() {
  cout << "This vehilce is " << brand << ", " << year << endl; 
}

int Vehicle::getRating(string model) {
      if(model == "Tesla") 
        return 5; 
      else -
        return 3;       
    }

int main() {  
  Vehicle car; //uses default constructor to initialize the object
  car.brand = "Tesla";
  car.year = 2021; 
  car.describe();
  cout << "Car rating is: " << car.getRating(car.brand) << endl;
  car.applyBreaks();  
}