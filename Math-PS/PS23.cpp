#include <iostream>
#include <cmath>
using namespace std;


int main() {

  int a;
  int b;
  int c;
  float PI = 3.14;

  cout << "enter number a?" << endl;
  cin >> a;
  cout << "enter number b?" << endl;
  cin >> b;
  cout << "enter number c?" << endl;
  cin >> c;

  int p = (a + b + c) / 2;

  double T = ( (a * b * c ) / (4.0 * sqrt(p * (p - a) * (p - b) * (p - c) ) ) ) ;
  double Area = pow(T, 2.0);
  double Result = Area * PI;

  cout <<  round(Result) << endl;

















  return 0;
}
