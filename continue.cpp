#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int Number= 0;

  for (int i = 1; i <= 5; i++) {

    cout << "enter a Number: ";
    cin >> Number;

    // continue 
    if (Number > 50) {

      cout << "the Number is great than 50 and won't be calculated" << endl;
      continue;
    }
    sum += Number;
  }

  cout << "the sum is  " << sum << endl;

  return 0;
}
