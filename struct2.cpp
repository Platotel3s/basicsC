#include <iostream>
#include <string>
using namespace std;

struct{
  string brand;
  string model;
  int year;
} mystar1,mystar2;

struct MyWife {
  string brand;
  string model;
  int year;
};

int main () {
  MyWife mystar1;
  cout<<"Masukkan brand stars 1 : ";
  getline(cin,mystar1.brand);
  cout<<"Masukkan model stars 1 : ";
  getline(cin,mystar1.model);
  cout<<"Masukkan umurnya : ";
  cin>>mystar1.year;
  cin.ignore();
  MyWife mystar2;
  cout<<"Masukkan brand stars 2 : ";
  getline(cin,mystar2.brand);
  cout<<"Masukkan model stars 2 : ";
  getline(cin,mystar2.model);
  cout<<"Masukkan umurnya : ";
  cin>>mystar2.year;

  cout<<mystar1.brand<<" | "<<mystar1.model<<" | "<<mystar1.year<<endl;
  cout<<mystar2.brand<<" | "<<mystar2.model<<" | "<<mystar2.year<<endl;
  return 0;
}
