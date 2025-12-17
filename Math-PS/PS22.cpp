#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int a;
  int b;
  float PI = 3.14;

  cout << "enter number a?" << endl;
  cin >> a;
   cout << "enter number b?" << endl;
  cin >> b;

  double result = PI * pow( b, 2) / 4 * ( (2.0 * a - b) / (2.0 * a + b) );

  cout << floor(result) << endl;














  return 0;
}
