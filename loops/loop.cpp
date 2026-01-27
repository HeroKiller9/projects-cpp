#include <iostream>
using namespace std;


int main() {

  int num;
  int power;
  int sum = 1;

  cout << "enter your number?" << endl;
  cin >> num;

  cout << "enter your power" << endl;
  cin >> power;

  for (int i = 1; i <= num; i++) {

    sum *= power;
  }

 cout << num << "^" << power << " = " << sum << endl;




  return 0;
}
