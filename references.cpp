#include <iostream>
#include <string>
using namespace std;

int main () {
  string nama;
  cout<<"Masukkan nama anda : ";
  getline(cin,nama);

  cout<<"Memory Addres nya : "<<&nama<<endl;
  return 0;
}

// ketika suatu variabel dibuat dalam bahasa c++, alamat memori diberikan ke variabel
// Dan ketika kita menetapkan sebuah nilai ke variabel, nilainya disimpan di alamat memori ini. Misalnya pada baris ke-10
// Untuk menampilkan memory address, pakai tanda &
