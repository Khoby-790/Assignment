#include <iostream>
using namespace std;
bool checkPrime(int);
bool collect_data_validate();
int user_input;
bool check = false;
int main(int argc, char const *argv[]) {
  do{
      cout << "Check Prime Number \nEnter Number :";
      check = collect_data_validate();
  }while(check == false);

  //proceed to check to if number entered is Prime
  if(checkPrime(user_input)){
    cout << user_input << " is a prime number" << endl;
  }else{
    cout << user_input << " is not a prime number" << endl;
  }

  return 0;
}


//function to collect data

bool collect_data_validate(){
  bool isPrime;

  //access the global variable #user_input and update it
  cin >> user_input;

  if(cin.fail()){
    return false;
  }
  return true;
}

//function to compute prime Number

bool checkPrime(int num){
  int count;
  if(num%2 == 0){
    return false;
  }
  return true;
}
