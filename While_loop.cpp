#include <iostream>
using namespace std;

int ReadIntNumberInRange(int from, int To) {

  int Number;
  cout << "Please enter your Number between " << from << " and " << To << endl;
  cin >> Number;

  while (Number < from || Number > To) {

    cout << "wrong Number," << endl;
    cout << "Please enter a Number between " << from << " and " << To << endl;
    cin >> Number;
  }

  return Number;
}


int main() {

int Number = ReadIntNumberInRange(20, 100);

cout << "The Number is " << Number << endl;

return 0;
}
