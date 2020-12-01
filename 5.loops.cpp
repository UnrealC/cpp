#include <iostream>
using namespace std;
int main()
{
  
  //*********************************************************************
  //// while loop   

  // unsigned short i = 0;
  // while (i < 10) {
  //   cout << i << endl;
  //   i++;
  // }

//*********************************************************************
  //// do..while loop 
  
  // unsigned short i = 0;  
  // do {
  //   cout << i  << endl;
  //   i++;
  // } while (i < 10);

//*********************************************************************
  //// for loop 
  
  // for(unsigned short i = 0; i < 10; i++)
  // {
  //   cout << i << endl;
  // }
  
  //*********************************************************************
  //Nested for loop 
  cout << "************** Nested For loop*******************" << endl;
  
  for (unsigned short i = 0; i< 10; i++)
  {
    for(unsigned short j=0; j< 10; j++)
      {
        cout << "(" << i << "," << j << ")" << " ";
      }
    cout << endl;
  }

  return 0; 
}