#include <iostream>
#include <string>
using namespace std;

int main () {
  // create pointers
  // string food="Dodol";
  // string* ptr=&food;
  // cout<<food<<"\n";
  // cout<<&food<<"\n";
  // cout<<ptr<<endl;
  
  //Deferencing
  // string food="Dodol";
  // string* ptr=&food;
  // cout<<"Nilai variabel yang sudah disimpan dalam pointer dalam bentuk alamat memori : "<<ptr<<endl;
  // cout<<"Hasilnya menampilkan variable ptr yang sudah diekstrak dengan deferencing : "<<*ptr<<endl;

  // Memanipulasi nilai pointers
  // string food="Dodol";
  // string* ptr=&food; // "masukkan alamat variabel food ke dalam variabel ptr", karena untuk menyimpan memory address, tipe datatanya harus ditandai simbol asterik (*)
  // cout<<food<<"\n"; 
  // cout<<&food<<"\n"; // menampilkan alamat memori
  // cout<<ptr<<"\n";
  // cout<<*ptr<<"\n"; // 
  //
  // *ptr="Nasi Kebuli";
  // cout<<*ptr<<"\n";
  // cout<<food<<endl;

  // Memanipulasi dengan user iput
  string variabel;
  cout<<"Masukkan isi variabel : ";
  getline(cin,variabel);
  string* ubahKePointer=&variabel;

  cout<<"Nilai variabel yang dimasukkan : "<<variabel<<endl;
  cout<<"Alamat memory variabelnya : "<<ubahKePointer<<endl;
  cout<<"Konversi dari alamat memori ke nama variabel awalnya : "<<*ubahKePointer<<endl;

  cout<<"Sekarang kita manipulasi nilai pointernya (nilai alamat addressnya) dengan mengubah isi variabelnya"<<endl;
  cout<<"Masukkan nama variabel baru : ";
  getline(cin,variabel);
  string* pointerBaru=&variabel;
  
  cout<<"Maka variabel barunya : "<<variabel<<endl;
  cout<<"Nilai pointer barunya : "<<pointerBaru<<endl;
  cout<<"Hasil ekstraksi pointer baru ke variabel aslinya : "<<*pointerBaru<<endl;

  return 0;
}
// Pointer dipakai untuk menyimpan nilai memory address, dengan tanda bintang (asterik) untuk menyimpan nilai hexadecimalnya.
// perintah asterik (*) berbunyi "Ambil isi dari alamat ini"
