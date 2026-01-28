#include <iostream>
using namespace std;

int main() {

  int num;

  cout << "enter your number?" << endl;
  cin >> num;

  int i = 1;
  int sum = 0;
  while (i <= num) {
  
   sum += i;
   i += 2;
  }

    cout << "Sum of odd numbers from 1 to " << num << " = " << sum << endl;




  return 0;
}
