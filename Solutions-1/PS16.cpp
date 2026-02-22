#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float &a, float &b) {

  cout << "enter your Number a ?" << endl;
  cin >> a;

  cout << "enter your Number b ?" << endl;
  cin >> b;
}

float CalculateRectangle(float a, float b) {

float Area = a * sqrt (pow(b, 2) - pow(a, 2));
return Area;
}

void PrintResult(float Area) {

  cout << "Result: " << Area << endl;
}



int main() {

  float a, b;
ReadNumber(a, b);

float Area = CalculateRectangle(a , b);

PrintResult(Area);

  return 0;
}
