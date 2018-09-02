#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  int mark;
  cout << "Grading System" << endl;
  cout << "Enter accumulated mark :";
  cin >> mark;

  if(mark <45){
    cout << "You had an F" <<endl;
  }else if(mark >= 45 && mark < 50 ){
    cout << "You had an E" <<endl;
  }else if(mark >= 50 && mark < 55){
    cout << "You had an D" <<endl;
  }else if(mark >= 55 && mark < 60){
    cout << "You had an D+" <<endl;
  }else if(mark >= 60 && mark < 65){
    cout << "You had an C" <<endl;
  }else if(mark >= 65 && mark < 70){
    cout << "You had an C+" <<endl;
  }else if(mark >= 70 && mark < 75){
    cout << "You had an B" <<endl;
  }else if(mark >= 75 && mark < 80){
    cout << "You had an B+" <<endl;
  }else if(mark >= 80 && mark < 101){
    cout << "You had an A" <<endl;
  }


  return 0;
}
