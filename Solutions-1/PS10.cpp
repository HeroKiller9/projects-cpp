#include <iostream>
using namespace std;
  
void ReadNumber(int& Num1, int& Num2, int& Num3) {

  cout << "enter your Num1?" << endl;
  cin >> Num1;

  cout << "enter your Num2" << endl;
  cin >> Num2;

  cout << "enter your Num3" << endl;
  cin >> Num3;
}

int CalculateAverage(int Num1, int Num2, int Num3) {

 return (Num1 + Num2 + Num3) / 3;

}
void PrintResult(int Total) {

  cout << "Tne total Avg of numbers is: " << Total << endl;
}

int main() {

  int Num1, Num2, Num3;
  ReadNumber(Num1, Num2, Num3);
  PrintResult(CalculateAverage(Num1, Num2, Num3));

  return 0;
}
