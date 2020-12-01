#include <iostream>
#include <string>
using namespace std;

int main() 
{    
  int input;
  cout << endl << "**************************Let's Play a game********************" << endl << endl 
  << "Please pick a difficulty level" << endl 
  << "1. Easy" << endl
  << "2. Medium" << endl
  << "3. Difficult" << endl;
  
  cin >> input; 

 //**************************************************
  // if(input == 1) {
  //   cout << "You chose Easy" << endl;
  // }else if (input == 2) {
  //   cout << "You chose Medium" << endl;    
  // } else {
  //   cout << "You chose Hard" << endl;
  // }

 //**************************************************
//(input==1) ?  cout << "You chose Easy" << endl :   cout << "you chose something else" << endl;

 //**************************************************
  // (input==1) ? cout << "You chose Easy" << endl : ( input == 2  ? cout << "you chose medium" : cout << "you chose hard" << endl);
 
 //**************************************************
  switch(input) {
    case 1 :
      cout << "You chose Easy" << endl;
      break;
    case 2:
      cout << "You chose Medium" << endl;
      break;
    case 3:
      cout << "You chose Hard" << endl;
      break;
    default:
      cout << "Please Enter a number from 1 to 3" << endl;
      break;
  }
   //**************************************************
}

