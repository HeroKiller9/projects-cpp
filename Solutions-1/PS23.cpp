#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float& a, float& b, float& c) {

  cout << "enter your a?" << endl;
  cin >> a;

  cout << "enter your b?" << endl;
  cin >> b;

  cout << "enter your c?" << endl;
  cin >> c;
}

float CalculateP(float a, float b, float c) {

  float P = (a + b + c) / 2;

  return P;
}

float CalculateCircleAreaCircle(float P, float a, float b, float c) {

  const double PI = 3.141592653589793238;
  double Resul1 = ((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c) )) );

  double Area = PI * pow(Resul1, 2);
  return Area;
}

void PrintResult(float Area) {

  cout << "Resul: " << Area << endl;
}

int main() {
    float a, b, c;
    ReadNumber(a, b, c);
    float P = CalculateP(a, b, c);
   
 PrintResult(CalculateCircleAreaCircle(P, a, b, c));
   



    return 0;
}
