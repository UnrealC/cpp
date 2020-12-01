#include <iostream>
using namespace std; 

//void swap(int x, int y); //pass by value 
void swap(int& x, int& y); //pass by reference 

int main()
{
  int num1 = 8; 
  int num2 = 10;
  
  swap(num1, num2);
  
  cout << "Number 1: " << num1 << endl;
  cout << "Number 2: " << num2 << endl;

  return 0; 
}

//pass by value
// void swap(int x, int y)
// {
//   int temp; 
//   temp = x; 
//   x = y; 
//   y = temp;   
// }

//pass by reference 
void swap(int& x, int& y)
{
  int temp; 
  temp = x; 
  x = y; 
  y = temp;   
}