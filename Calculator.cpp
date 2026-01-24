#include <iostream>
using namespace std;

void Readnumber(int &num1, int &num2, char &Calc) {

  cout << "Welcome to my calclator" << endl;

  cout << "enter your Number1" << endl;
  cin >> num1;
  cout << "enter your Number2" << endl;
  cin >> num2;
  cout << "enter your Calc" << endl;
  cin >> Calc;

}

int main() {
  int num1;
  int num2;
  char Calc;
 Readnumber(num1, num2, Calc);  

 switch (Calc) {

   case '+':
     cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
    break;
   case '-':
    cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
    break;
   case '*':
   cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
   break;
   case '/':
   cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
   break;
   default:
   cout << "wrong" << endl;
 }









  return 0;
}
