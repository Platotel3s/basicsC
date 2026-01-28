#include <iostream>
#include <string>
using namespace std;

struct {
  int myAge;
  string myFullName;
  bool isMarried;
} MyStruct;
int main () {
  cout<<"Masukkan nama anda : ";
  getline(cin,MyStruct.myFullName);
  cout<<"Masukkan umur anda : ";
  cin>>MyStruct.myAge;
  cout<<"Sudah menikah ? (0/1) : ";
  cin>>MyStruct.isMarried;

  cout<<MyStruct.myFullName<<endl;
  cout<<MyStruct.myAge<<endl;
  cout<<MyStruct.isMarried<<endl;
  return 0;
}
