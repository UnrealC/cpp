#include <iostream>
using namespace std;

int add(int x, int y);
int factorial(int n);

int main()
{
  int x, y;
  int result;
  cout << "Enter two numbers. Enter: ";   
  cin >> x >> y;
  
  //pass by value
  result = add(x, y);
  cout << "Addition of " << x << " and " << y << " results in: " << result << endl;  
  
} 

int add(int x, int y) {  
  int result;
  result = x + y;     
  return result;
}

// int main (int argc, char * argv[])
// {
//   //retrieve parameters passed from command line to the program and display them
//   cout << "total parameters = " << argc << endl; 
//   for (int i = 0; i< argc; i++) {
//     cout << "parameter " << i << " - " << argv[i] << endl;
//   }
  
//   // pass x and y values to the program from comamnd line. i.e: output 5 8
//   //first parameter argv[0] is the name of the program
//   int x = atoi(argv[1]);
//   int y = atoi(argv[2]);
//   cout << "sum of " << x << " and " <<  y << " is " << add(x, y) << endl;

// }