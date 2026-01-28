#include <iostream>
#include <string>
using namespace std;

int ReadIntNumberInRangeUsingDoWhile(int From, int TO) {

  int Number;

  do {

    cout << "Please enter a number between " << From << " and " << TO << endl;
    cin >> Number;
  } while (Number < From || Number > TO);

  return Number;
}

int main() {

cout << "The number you entered is " << ReadIntNumberInRangeUsingDoWhile(1,10) << endl;



  return 0;
}
