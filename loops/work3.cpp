#include <iostream>
using namespace std;

int main() {

  int N;
  int sum = 1;
  cout << "Factorial of N!?" << endl;
  cin >> N;
  for (int i = N; i > 1; i--)
  {
    sum = sum * i;
  }

    cout << "Factorial of N = " << sum << endl;



  return 0;
}
