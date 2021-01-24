#include <iostream>
#include <string>

using namespace std;

class Animal {
  private:
    string _name;
  
  public:
    string getName() { 
            return _name;
    }
    void setName(string name) { 
      _name = name;
    }
  
  //constructor
  Animal() {
    cout << "Animal() constructor is called" << endl;
  }

  //Destructor
  ~Animal() {
    //This is called when an object is being destroyed
    cout << "~Animal() destructor is called" << endl;
  }
};

int main()
{
  Animal dog;
  dog.setName("Kittu");   
  cout << "Your dog is: " << dog.getName() << endl;

  Animal elephant;
  elephant.setName("Jaggu");
  cout << "Your elephant is" << elephant.getName() << endl;

  //waits for user input
  cin.get();

}