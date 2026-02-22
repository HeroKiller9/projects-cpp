#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float& a, float& h) {


  cout << "enter your number a?" << endl;
  cin >> a;

  cout << "enter your number h?" << endl;
  cin >> h;
}


float calculateTriangle(float a, float h ) {

  float Area = (1.0 / 2.0) * (a * h);
    
    return Area;
}

void PrintCalculate(float Area) {

  cout << "Result " << Area << endl;
}

int main() {

  float a, h;

  ReadNumber(a, h);

  float Area = calculateTriangle(a, h);

  PrintCalculate(Area);


  return 0;
}
