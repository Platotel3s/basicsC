#include <iostream>
using namespace std;

enum MyEnum {
  LOW=1,
  MEDIUM,
  HARD
};

int main () {
  // enum MyEnum myVar1=MEDIUM;
  // cout<<myVar1;
  enum MyEnum myVar=MEDIUM;
  switch (myVar) {
    case 1:
      cout<<"Low Level";
      break;
    case 2:
      cout<<"Medium Level";
      break;
    case 3:
      cout<<"Hard Level";
      break;
  }
  return 0;
}
