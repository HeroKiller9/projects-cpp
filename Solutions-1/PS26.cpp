#include <iostream>
using namespace std;

int ReadNumber() {

  int N;

  cout << "enter N" << endl;
  cin >> N;
  return N;
}

void PrintRangeFrom1toN(int N) {

  cout << "Range Printed using For Statement: " << endl;

  for (int Counter = 1; Counter <= N; Counter++)
  {
    cout << Counter << endl;
  }
}

int main() {

  int N = ReadNumber();

  PrintRangeFrom1toN(N);

  return 0;
}
