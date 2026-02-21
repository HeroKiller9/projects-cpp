#include <iostream>
#include <string>

using namespace std;


void ReadNumber(int& Num1, int& Num2) {

  cout << "enter your Number1?" << endl;
  cin >> Num1;

  cout << "enter your Number2?" << endl;
  cin >> Num2;
}

int MaxOF2Numbers(int Num1, int Num2) {

  if (Num1 > Num2)
    return Num1;
  else 
    return Num2;
}

void PrintResults(int Max) {

  cout << "The Maximum Number is: " << Max << endl;

}

int main() {
  
int Num1, Num2;
ReadNumber(Num1, Num2);
PrintResults(MaxOF2Numbers(Num1, Num2));


  return 0;
}
