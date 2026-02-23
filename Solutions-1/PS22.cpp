#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& a, float& b) {

  cout << "enter your a?" << endl;
  cin >> a;

  cout << "enter your b?" << endl;
  cin >> b;
}

float CalculateCircleArea(float a, float b) {

  const double PI = 3.141592653589793238;
  
  float Area = PI * ((pow(b, 2) / 4 )) * ((2 * a - b) / (2 * a + b ));
  return Area;
}

void PrintResult(float Area) {

  cout << "Result: " << Area << endl;
}

int main() {

  float a;
  float b;
  ReadNumbers(a, b);

  PrintResult(CalculateCircleArea(a, b));


  return 0;
}
