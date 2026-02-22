#include <iostream>
#include <cmath>

using namespace std;

float readNumber() {

  float D;
  cout << "enter your D" << endl;
  cin >> D;

    return D;
}

float CalculateCircle(float D) {

  const float PI = 3.14;
  float Area = (PI * pow(D, 2)) / 4;
  return Area;
}

void PrintResult(float Area) {

  cout << "Result: " << Area << endl;
}
int main() {

PrintResult(CalculateCircle(readNumber()));

  return 0;
}
