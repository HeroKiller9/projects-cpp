#include <iostream>
using namespace std;

int main() {

float arr[3];

cout << "please enter Grade 1?" << endl;
cin >> arr[0];

cout << "please enter Grade 2?" << endl;
cin >> arr[1];

cout << "please enter Grade 3?" << endl;
cin >> arr[2];

cout << "****************************" << endl;

float avg = ( arr[0] + arr[1] + arr[2] ) / 3;

cout << "The average of Grades is " << avg << endl;

return 0;
}
