#include <iostream>
using namespace std;

struct student {
  int id; 
  string name; 
};

int main()
{
  //In C++, "new" operator is used to allocate memory (In C, we use malloc()) function)  
  struct student *studentPtr = new student; 

  studentPtr->id = 1; 
  studentPtr->name = "Peter";

  cout << "student name: " << studentPtr->name << endl;
  
  //In C++, "delete" is used to cleanup memory (In C, we use free() to cleanup memory)
  delete studentPtr;

}