#include <iostream>
#include <string>
using namespace std;

// Procedures
void Procedures1() {

int num1;
  cout << "please eneter number1? " << endl;
  cin >> num1;
int num2;
  cout << "please enter number2? " << endl;
  cin >> num2;

  int result = num1 + num2;

 cout << "***********************" << endl;
 cout << result << endl;
}
// functions 
int functions1() {

int num1;
int num2;
cout << "please enter number1" << endl;
 cin >> num1;
cout << "please enter number2" << endl;
cin >> num2;

return num1 + num2;
}

int main() {

Procedures1();

int Result1;
Result1 = functions1();
cout << Result1 << endl;




return 0;
}
