#include <iostream>
using namespace std;

enum color { red, green, yellow, blue=9 };
enum Gender { Male=10, Female};
enum status { Single=123, Married};
/* Enums (color) { red, green, yellow, blue }
int main() 
(color) (Mycolor);

Mycolor = color::blue (red) or (green) or (yellow)

cout << "my color is " << Mycolor << endl;

Outpout:
my color is 4

is Default red=0 green=1 yellow=2 blue=3

and you can change the number, Example

{red=100 green=9 yellow=99 blue=80}

red 
Outpout
100
green
Outpout
9 

*/

int main() {

  color Mycolor;
  Gender MyGender;
  status Mystatus;

  Mycolor = color::blue;
  MyGender = Gender::Male;
  Mystatus = status::Single;

  cout << "Name: Herokiller9" << endl;
  cout << "Age: 44 years" << endl;
  cout << "fav color is " << Mycolor << endl;
  cout << "Gender: " << MyGender << endl;
  cout << "status is: " << Mystatus << endl;










  return 0;
}
