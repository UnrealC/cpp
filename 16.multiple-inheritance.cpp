#include <iostream>
#include <string>
using namespace std;

class Father {
  public:
    string ethnicity;             
};

class Mother {
  protected:
    string nativePlace;
  public:
    string skinColor;     
};

class Child : public Father, public Mother {
  public:    
    string name;       
    string getNativePlace() {
      return nativePlace;      
    } 
};

int main() {  
  Child child; 
  child.name = "Peter";
  child.ethnicity = "Asian";
  child.skinColor = "Light Brown";
  //child.nativePlace = "New York"; //not accessinle outside of any class excpet in an inherited class

  cout << child.name << " is " << child.ethnicity << " and his skin complex is " << child.skinColor 
        << " and he lives in " << child.getNativePlace() << endl;
}