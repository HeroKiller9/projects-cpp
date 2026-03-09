#include <iostream>
using namespace std;

int ReadNumber() {

  int Number;

  cout << "enter your Number?" << endl;
  cin >> Number;
  return Number;
}

int ReadPower() {

  int Power;

  cout << "enter your Power? " << endl;
  cin >> Power;
  return Power;
}

int PowerOfNumber(int Number, int M) {

  if (M == 0) 
  {
    return 1;
  }
  int P = 1;

  for (int i = 1; i <= M; i++) {

    P = P * Number;
  }
  return P;
}

int main() {

 cout << PowerOfNumber(ReadNumber(), ReadPower()) << endl;

  return 0;
}
