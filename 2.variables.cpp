#include <iostream>
#include <iomanip>

using namespace std;
int main()
{  
  //**************************************************************************************************
  // short a; //2 bytes
  // short int b; // 2 bytes
  // unsigned short c; // 2 bytes
  // unsigned short int  d; // 2bytes

  // int a1; // 4 bytes
  // unsigned int b1; // 4 bytes

  // long a11; //8 bytes
  // long int b11; //8 bytes
  // unsigned long c11; // 8 bytes
  // unsigned long int d11; // 8bytes

  float x; //4 btyes
  
  double y; //8 bytes

  char z; // 1 byte
//**************************************************************************************************

	// cout << "size of short: " << sizeof(short) << endl ;
	// cout << "size of short int: " << sizeof(short int) << endl;
	
	// cout << "range of short is: from " << pow(2,15)/2 << " to " << pow(2,15)/2-1 << endl;

	// cout << "size of unsigned short:" << sizeof(unsigned short) << endl;
	// cout << "size of unsigned short int:" << sizeof(unsigned short int) << endl;
	
	// cout << "size of int:" << sizeof(int) << endl; 
	// cout << "size of unsigned int" << sizeof(unsigned int) << endl;
	// cout << "size of signed int" << sizeof(int) << endl;

	// cout << "size of long:" << sizeof(long) << endl;
	// cout << "size of long int:" << sizeof(long int) << endl;

	// cout << "size of float:" << sizeof(float) << endl;
	// cout << "size of double: " << sizeof(double) << endl;
//**************************************************************************************************

	// cout << setprecision(15);
  // double a = 3.12345678912345679;
	// float b = 3.123456789123456789f;
	
	// //double has 15 decimal digits (2 bytes) where as float has only 7 decimal digits (1 byte). float will print garbage numbers after 7 decimals
	// cout << "Double type 'a' can store upto 15 decimals. Notice the decimals: " << a << endl; 
	// cout << "Float type 'b' can store upto 7 decimals. The rest of decimals are garbage/random digits. Notice decimals:" << b << endl; 

 //**************************************************************************************************
  // char myChar = 'a';
  // char otherChar = 100;
  // int myCharNumber = myChar;

  // cout << "myChar: " << myChar <<endl; //a
  // cout << "otherChar: " << otherChar <<endl; //error
  // cout << "myCharNumber: " << myCharNumber << endl; //int

  // character is 1 byte. unsigned char can store between 0 and 255. Unsigned chars are commonly used to store text in ASCII format
  // print all numbers from 0 to 255 and it's associated ASCII characters
  // short i;
  // char c;
  
  // for(i = 0; i<255; i++)
  // {
  //   c = i; 
  //   cout << i << " -> " << c << endl;
  // }
//**************************************************************************************************

  // char myChar;
  // cout << "Enter a character. ENTER: ";
  // cin >> myChar;
  // cout << "You entered: " << myChar << endl;
  // cin.clear(); // ignore any superfluous input
  // cin.sync(); //sync with the console
  // cin.get(); //wait for the user to exit the program

  return 0;
}