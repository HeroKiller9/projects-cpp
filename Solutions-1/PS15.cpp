#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float& A, float& B) {

 cout << "enter your A ?" << endl;
 cin >> A;

 cout << "enter your B ?" << endl;
 cin >> B;
}

float CalculaterRectangleArea(float A, float B) {

  return A * B;
}

void PrintResult(float Area) {

  cout << "Area is : " << Area << endl;
}

int main() {

  float A, B;
  ReadNumber(A, B);
  PrintResult(CalculaterRectangleArea(A, B));



  return 0;
}
