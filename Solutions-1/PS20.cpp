#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber() {

  float A;

  cout << "enter your A?" << endl;
  cin >> A;

  return A;
}

float CalculateCircle(float A) {
  
  const float PI = 3.14;

  float Area = PI * pow(A, 2) / 4;

  return Area;
}
void PrintResult(double Area) {

  cout << "Result: " << Area << endl;

}
int main() {


  PrintResult(CalculateCircle(ReadNumber()));


  return 0;
}
