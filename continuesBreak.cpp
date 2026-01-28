#include <iostream>
using namespace std;

int main () {
  // continue
  // for (int i=0; i<=10; i++) {
  //    if (i==3) {
  //       continue;
  //    }
  // cout<<i<<endl;
  // }

  // break
  for (int a=1; a<=10; a++) {
    if (a==7) {
      break;
    }
    cout<<a<<endl;
  }
  return 0;
}

// continue digunakan untuk melewati angka yang dideklarasikan dalam if statement
// break memberhentikan operasi jika menemukan statement yang dideklarasikan oleh if statement
