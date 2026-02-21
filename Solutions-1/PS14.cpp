#include <iostream>
using namespace std;

void ReadNumber(int& num1, int& num2) {

  cout << "enter your Number 1?" << endl;
  cin >> num1;

  cout << "enter your Number 2?" << endl;
  cin >> num2;
}

void Swap(int& A, int& B) {

  int Temp;

  Temp = A;
  A = B;
  B = Temp;
}

void PrintNumbers(int num1, int num2) {

cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;
}

int main() {

  int num1, num2;
  ReadNumber(num1, num2);
  cout << "Before Swap: " << endl;
  PrintNumbers(num1, num2);
  Swap(num1, num2);
  cout << "After Swap: " << endl;
  PrintNumbers(num1, num2);
}
