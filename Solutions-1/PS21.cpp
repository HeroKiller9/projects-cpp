#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber() {

  float L;
  cout << "enter your L?" << endl;
  cin >> L;
  return L;
}

float CalculateCircleArea(float L) {

  const double PI = 3.141592653589793238;
  float Area = pow(L, 2) / (4 * PI);

  return Area;
}

void PrintResult(float Area) {

  cout << "Result: " << Area << endl;
}
int main() {

  
  PrintResult(CalculateCircleArea(ReadNumber()));


  return 0;
}
