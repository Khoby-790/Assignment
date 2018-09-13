//Assignment 4 using the Euclidean algorithm in a recursive fuction to compute the gcd
//of two numbers
#include <iostream>
using namespace std;
//decalare prototype of functions
int calcutateG_C_D(int , int);

int main(int argc, char const *argv[]) {
  //local variables
  int number_1,number_2;
  cout << "Calculate The GCD of two numbers" << endl;
  cout << "Enter the first number :: ";
  cin >>number_1;
  cout << "Enetr the second number :: ";
  cin >> number_2;

  cout << "The Greatest Commmon Divisor of " << number_1 << " and " << number_2 << " is " << calcutateG_C_D(number_1,number_2) << endl;
  return 0;
}



int calcutateG_C_D(int firstNumber, int secondNumber){
  //local variables
  int remainder;
  //perform check to determine which number is greater

  if(secondNumber > firstNumber){
    calcutateG_C_D(secondNumber,firstNumber);
  }else{
    //compute the mod of the two numbers to get the remainder
    remainder = firstNumber % secondNumber;
    //check if the remainder is 0
    if(remainder == 0){
      //if remainder is 0
      return secondNumber;
    }
    //else
    firstNumber = secondNumber;
    secondNumber = remainder;
    return calcutateG_C_D(firstNumber, secondNumber);
  }
}
