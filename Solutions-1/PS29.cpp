#include <iostream>
#include <string> 
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2};

int ReadNumber() {
  int Number;
  cout << "Please enter a Number? " << endl;
  cin >> Number;
  return Number; 
}

enOddOrEven CheckOddOrEven(int Number) {

  if (Number % 2 != 0)
    return enOddOrEven::Odd;
  else 
    return enOddOrEven::Even;

}
int SumEvenNumberFrom1toN_UsingWhile(int N) {

  int Counter = 0;
  int Sum = 0;

  cout << "Sum odd Numbers using While Statement:\n";

  while (Counter < N) {

    Counter++;
    if (CheckOddOrEven(Counter) == enOddOrEven::Even)
    {
      Sum += Counter;
    }
  }
  return Sum;
}

int SumEvenNumberFrom1toN_UsingDowhile(int N) {

  int Counter = 0;
  int Sum = 0;

  cout << "Sum Even numbers using Do..While Statement:\n";
  do {

    Counter++;
    if (CheckOddOrEven(Counter) == enOddOrEven::Even)
    {
      Sum += Counter;
    }

  } while (Counter < N);
  
  return Sum;
}

int SumEvenNumberFrom1toN_UsingFor(int N) {

  int Sum = 0;

  cout << "Sum Even Numbers using For Statement:\n";

  for (int Counter = 1; Counter <= N; Counter++)
  {
    if (CheckOddOrEven(Counter) == enOddOrEven::Even)
    {
      Sum += Counter;
    }
  }

  return Sum;
}

int main() {

  int N = ReadNumber();

  cout << SumEvenNumberFrom1toN_UsingWhile(N) << endl;
  cout << SumEvenNumberFrom1toN_UsingDowhile(N) << endl;
  cout << SumEvenNumberFrom1toN_UsingFor(N) << endl;


  return 0;
}
