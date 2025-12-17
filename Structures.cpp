#include <iostream>
using namespace std;

struct myprograming {

  string Account;
  int Projects;
  string Language;
  string Lang_Programing;


};

struct info {

  string Name;
  int Age;
  string City;
  string major;
  string os;
  char Gender;
  bool Married;

  myprograming programing;

};


int main() {

  info myinfo;
  

  myinfo.Name = "hero";
  myinfo.Age = 19;
  myinfo.City = "Al_hasa";
  myinfo.major = "Computer_Science";
  myinfo.os = "linux";
  myinfo.Gender = 'M';
  myinfo.Married = true;
  myinfo.programing.Account = "Github: HeroKiller9";
  myinfo.programing.Projects = 5;
  myinfo.programing.Language = "AR + EN";
  myinfo.programing.Lang_Programing = "C++ + Python";

  cout << "Name: " << myinfo.Name << endl;
  cout << "Age: " << myinfo.Age << endl;
  cout << "City: " << myinfo.City << endl;
  cout << "major: " << myinfo.major << endl;
  cout << "os: " << myinfo.os << endl;
  cout << "Gender: " << myinfo.Gender << endl;
  cout << "Married: " << myinfo.Married << endl;
  cout << "Account: " << myinfo.programing.Account << endl;
  cout << "Projects: " << myinfo.programing.Projects << endl;
  cout << "Language: " << myinfo.programing.Language << endl;
  cout << "Lang programing: " << myinfo.programing.Lang_Programing << endl;













  return 0;
}
