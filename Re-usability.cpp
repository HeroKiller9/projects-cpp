#include <iostream>
#include <string>
using namespace std;

struct strinfo {

  string FirstName;
  string LastName;
  int Age;
  string Phone;
};


void Readinfo(strinfo &info) {


  cout << "Please enter your First name?" << endl;
  cin >> info.FirstName;

  cout << "Please enter your LastName?" << endl;
  cin >> info.LastName;

  cout << "please enter your Age?" << endl;
  cin >> info.Age;

  cout << "please enter your Phone?" << endl;
  cin >> info.Phone;
}

void Printinfo(strinfo info) 
{
  cout << "\n************************\n";

  cout << "FirstName: " << info.FirstName << endl;

  cout << "LastName: " << info.LastName << endl;

  cout << "Age: " << info.Age << endl;

  cout << "Phone: " << info.Phone << endl;

  cout << "\n***********************\n";
}

int main () {

 strinfo PersonInfo;
 Readinfo(PersonInfo);
 Printinfo(PersonInfo);

 strinfo Person2Info;
 Readinfo(Person2Info);
 Printinfo(Person2Info);




 return 0;
}
