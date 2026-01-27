#include <iostream>
#include <string>
using namespace std;


int main() {

  for (char i = 'A'; i <= 'Z'; i++) {

    for (char j = 'A'; j <= 'Z'; j++) {

     cout << i << j << endl;
    }
  }

  for (int num1 = 10; num1 >= 1; num1--) {

    for (int num2 = 1; num2 <= num1; num2++) {

      cout << num2 << " ";
    }

    cout << "\n";
  }



  return 0;
}
