#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

int ReadMark() {

  int mark;

  cout << "enter your mark" << endl;
  cin >> mark;
  
  return mark;
}

enPassFail CheckMark(int mark) {

  if (mark >= 50)
    return enPassFail::Pass;
  else 
    return enPassFail::Fail;
}

void PrintResults(int mark) {

  if (CheckMark(mark) == enPassFail::Pass)
    cout << "Pass" << endl;
  else 
    cout << "Fail" << endl;
  
}

int main() {

  PrintResults(ReadMark());


  return 0;
}
