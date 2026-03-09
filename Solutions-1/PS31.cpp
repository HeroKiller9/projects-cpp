#include <iostream>
using namespace std;

int ReadNumber() {

  int num;

  cout << "enter your Number? " << endl;
  cin >> num;
  return num;
}

void numberOFPower_2_3_4(int num) {

  int power2 = num * num;
  int power3 = power2 * num;
  int power4 = power3 * num;

  cout << num << " is power 2 = " << power2 << endl;
  cout << num << " is power 3 = " << power3 << endl;
  cout << num << " is power 4 = " << power4 << endl;
}

int main() {

  numberOFPower_2_3_4(ReadNumber());

  return 0;
}
