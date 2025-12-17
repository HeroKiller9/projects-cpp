#include <iostream>
using namespace std;

int main() {

  int days;
  int hours;
  int minutes;
  int seconds;

  cout << "enter days?" << endl;
  cin >> days;
  cout << "enter hours?" << endl;
  cin >> hours;
  cout << "enter minutes?" << endl;
  cin >> minutes;
  cout << "enter seconds?" << endl;
  cin >> seconds;


  int Duration = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

  cout << Duration << " Seconds" << endl;

  /* Task Duration in Seconds #42 */

  return 0;
}
