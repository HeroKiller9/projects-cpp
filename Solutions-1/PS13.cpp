#include <iostream>
#include <string>

using namespace std;


void ReadNumber(int& Num1, int& Num2, int& Num3) {

  cout << "enter your Number1?" << endl;
  cin >> Num1;

  cout << "enter your Number2?" << endl;
  cin >> Num2;

  cout << "enter your Number3?" << endl;
  cin >> Num3;
}

int MaxOF3Numbers(int Num1, int Num2, int Num3) {

  if (Num1 > Num2)
    if (Num1 > Num3)
    return Num1;
   else 
    return Num3;
  else
    if (Num2 > Num3)
      return Num2;
    else
      return Num3;

}

void PrintResults(int Max) {

  cout << "The Maximum Number is: " << Max << endl;

}

int main() {
  
int Num1, Num2, Num3;
ReadNumber(Num1, Num2, Num3);
PrintResults(MaxOF3Numbers(Num1, Num2, Num3));


  return 0;
}
