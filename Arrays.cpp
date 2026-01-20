#include <iostream>
using namespace std;
/*
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

*/
// Arrays with Functions // the first int main is // to open


void ReadGrades(float Grade[3]) {

 cout << "please enter your Grade1?" << endl;
 cin >> Grade[0];
 cout << "please enter your Grade2?" << endl;
 cin >> Grade[1];
 cout << "please enter your Grade3?" << endl;
 cin >> Grade[2];
}

void PrintGrades(float Grade[3]) {

  float avg1 = ( Grade[0] + Grade[1] + Grade[2]) / 3;
  

  cout << "The average of Grades is " << avg1 << endl;

}
int main() {
float Grade[3];
  
ReadGrades(Grade);
PrintGrades(Grade);
 
return 0;
}
