#include <iostream>
#include <string>
using namespace std;

int main() {

  int num1;
  int num2;
  char OT;

  cout << "enter your num1" << endl;
  cin >> num1;

  cout << "enter your num2" << endl;
  cin >> num2;

  cout << "enter your Operation type" << endl;
  cin >> OT;

  switch (OT) {

    case '+':
      cout << "num1 + num2 = " << num1 + num2 << endl;
      break;
    case '-':
      cout << "num1 - num2 = " << num1 - num2 << endl;
      break;
    case '*':
     cout << "num1 * num2 = " << num1 * num2 << endl;
     break;
    case '/':
     cout << "num1 / num2 = " << num1 / num2 << endl;
     break;
    default:
       cout << "wrong Operation type try Again" << endl;
  }


















  return 0;
}
