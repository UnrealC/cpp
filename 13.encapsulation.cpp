#include <iostream>
#include <string>
using namespace std;

class Vehicle {
  /*Why Encapsulation?
      It is considered good practice to declare your class attributes as private (as often as you can). 
      Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
      Increased security of data
  */
  private:
    int price; 
  public:
    string brand;     
    int year;
    
    int getPrice() {
      return price; 
    }
    void setPrice(int priceOfVehicle) {
      price = priceOfVehicle;
    }
};



int main() {  
  Vehicle car; //uses default constructor to initialize the object
  car.brand = "Tesla";
  car.year = 2021; 
  //car.price (Inaccessible)
  car.setPrice(60000);
  cout << car.brand << " cost about $" << car.getPrice() << " dollars in the united states." << endl;
}