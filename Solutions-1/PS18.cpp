#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float& r) {

  cout << "enter your r?" << endl;
  cin >> r;
}

float CalculateCircle(float r) {

 const float PI = 3.14;
 float Area = PI * pow(r, 2);
 return Area;
}

void PrintReuslt(float Area) {

  cout << "Result " << Area << endl;
}

int main() {


  float r;

  ReadNumber(r);
  PrintReuslt(CalculateCircle(r));




  return 0;
}
