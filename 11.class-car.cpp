#include <iostream>
#include <string>
using namespace std;

class Car
{    
  private:
    string name;
    string color; 
    int year;
    int cost;     

  public:
    //get methods
    string getName() {return name;}
    string getColor() {return color;};         
    int getYear()  {return year;}; 
    int getCost()  {return cost;};           
    
    //set methods
    void setName(string carName) {name = carName; }
    void setColor(string carColor) { color = carColor; }
    void setYear(int carYear) { year = carYear; }
    void setCost(float carCost) { cost = carCost; }
    
    //Constructors        
    //default constructor
    Car() 
    {
      name = "Maruti",
      color = "Gray";
      year = 2020;
      cost = 5000000;

      cout << "Default constructor: 'Car()' called" << endl;
    }
    //constructor with parameters
    Car(string carName, string carColor, int carYear, int carCost)
    {
      name = carName;
      color = carColor;
      year = carYear; 
      cost = carCost;

      cout << "Constructor with params: 'Car(string carName, string carColor, int carYear, int carCost)' called" << endl;
    }

    //an another constructor with parameters. year is not passed, so it is initilized to 2020.
    Car(string carName, string carColor, int carCost)
    {
      name = carName;
      color = carColor;
      year = 2020;       
      cost = carCost;    

      cout << "Constructor with params: 'Car(string carName, string carColor, int carCost)'  called " << endl << endl;
    }

    //Another way of writing the same above constructor
    // Car(string carColor, int carYear, int carCost) :
    //   color(carColor), year(carYear), cost(carCost)
    //   {}

    //Descructor (There can be only one destructor per class)
    ~Car() 
    {
      //free up memory heere
      cout << "Destructor called" << endl;
    }
};

int main()
{

  Car *carX = new Car();
  Car *carY = new Car("Innova", "Blue", 2015, 1250000);
  Car *carZ = new Car("Benz", "Red", 3500000);

  cout << "****************************************************************************************************************************" << endl;

  cout << "There is one " << carX->getColor() << " " + carX->getName() + " car " << "which is made in " << carX->getYear() 
        << " and costs " << carX->getCost()/100000  << " lakh rupees." << endl;

  cout << "There is one " << carX->getColor() << " " + carX->getName() + " car " << "which is made in " << carX->getYear() 
        << " and costs " << carX->getCost()/100000  << " lakh rupees." << endl;

  cout << "There is one " << carY->getColor() << " " + carZ->getName() + " car " << "which is made in " << carZ->getYear() 
        << " and costs " << carZ->getCost()/100000  << " lakh rupees." << endl << endl;
  
  carY->setCost(4500000);

  cout << carY->getName() + " car price has just been increased to " << carY->getCost()/100000 << " lakh rupees." << endl;
  cout << "****************************************************************************************************************************" << endl;

  //cleanup
  delete carX;
  delete carY;
  delete carZ;
  
  return 0;
}

