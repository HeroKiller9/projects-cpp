#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int days;
  int hours;
  int minutes;
  int seconds;

  cout << "enter days" << endl;
  cin >> days;
  cout << "enter hours" << endl;
  cin >> hours;
  cout << "enter minutes" << endl;
  cin >> minutes;
  cout << "enter seconds" << endl;
  cin >> seconds;

  cout << ( round(days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) ) + seconds << " seconds" << endl;



  return 0;
}
