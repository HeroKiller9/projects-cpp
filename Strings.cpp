#include <iostream>
#include <string>
using namespace std;


int main() {

  string Fullname;
  cout << "Please Enter string1?" << endl;

  getline(cin, Fullname);

  cout << Fullname << endl;

  string string2;
  cout << "Please Enter string2?" << endl;
  cin >> string2;

  string string3;
  cout << "Please Enter string3?" << endl;
  cin >> string3;

  cout << "*********************" << endl;

  cout << "The Length of string is: " << Fullname.length() << endl;

  cout << "Characters at 0,2,4,7 are: " << Fullname[0] << Fullname[2] << Fullname[4] << Fullname[7] << endl;

  string con = string2 + string3;

  cout << "Concatenating string2 and string3 = " << con << endl;

  int sum = stoi(string2) * stoi(string3);

  cout << sum << endl;


  return 0;
}
