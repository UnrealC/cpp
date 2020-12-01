#include <iostream>
using namespace std;

int factorial(int n);
bool IsPolindrome(char* input);

int main()
{
  // //factorial
  int number; 
  cout << "What number you need factorial for? Enter: ";
  cin >> number;
  cout << "Factorial of " << number << " is " << factorial(number) << endl;
  
  //palindrome
  // char * input;
  // cout << "Enter a string. Enter: ";
  // cin >> input; 
  
  // if (IsPolindrome(input))
  //   cout << "True" << endl;
  // else 
  //   cout << "False" << endl;

  return 0; 
} 

// int factorial(int n)
// {
//   //Exit condition
//   if(n == 1)
//     return 1;
  
//   int result = n * factorial(n-1); //recursive call
//   return result;
// }


//Examples: 453354, 2002, 594750242057495, 343, racecar
//without recursion, using char pointer
bool IsPolindromeWithoutRecursion(char* input)
{    
  int length = strlen(input);
    
  for (int head = 0, tail=length-1; head < length/2 ; head++, tail--)
  {
    if(input[head] != input[tail])      
        return false;              
  } 

  return true;
}

//recursion
bool IsPolindrome(char* input)
{    
  int length = strlen(input);
  int head = 0; 
  int tail = length -1; 

  //exit condition
  if(length == 1)
  return true;
  
  if(input[head] != input[tail])
  return false;

  input[head] = '\0';
  input[tail] = '\0';
  input++;  

  return true && IsPolindrome(input);
  
}
