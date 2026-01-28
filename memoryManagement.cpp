#include <iostream>
#include <string>
using namespace std;

int main () {
  // int myInt;
  // float myFloat;
  // double myDouble;
  // char myChar;
  // cout<<sizeof(myInt)<<endl;
  // cout<<sizeof(myFloat)<<endl;
  // cout<<sizeof(myDouble)<<endl;
  // cout<<sizeof(myChar)<<endl;
  
  // NEW & DELETE MEMORY
  // Membuat memory
  // int* ptr=new int; // new int membuat sebuah ruang variabel bertipe data int, secara default kalau kita cout<<*ptr<<endl; pasti hasilnya 0, karena masih kosong belum ada isinya, perlu diingat bahwa simbol asterik (*) dipakai untuk mendeklarasikan pointer, yang mana pointer sendiri untuk menyimpan alamat memori ke dalam suatu variabel. Jadi new int itu sebenarnya alamat variabel.
  // *ptr=53; // kita bisa memasukkan nilai menggunakan simbol asterik. 
  // cout<<"Untuk mengaksesnya kita ketik *ptr : "<<*ptr<<endl;
  // cout<<"ptr only : "<<ptr<<endl;
  // cout<<"Ukuran Memorinya : "<<sizeof(*ptr)<<endl;
  // cout<<"Alamat Memori &*ptr : "<<&*ptr<<endl;
  // cout<<"Alamat memori &ptr : "<<&ptr<<endl;
  // cout<<"Karena nilai dari variabel ptr adalah alamat memori, kalau kita tambah pointer jadi *ptr, dan kita ketik *ptr=53, maka sama saja kita mengatakan ke c++ 'Masukkan angka 53 ini ke dalam alamat yang disimpan ptr'"<<endl;
  
  
  // Hapus memory 
  // untuk menghapus memori, kita perlu keyword namanya delete. Misalnya kita mau hapus memori ptr di atas maka tinggal tulis delete ptr;
  
  // TAMBAH MEMORI DAN HAPUS MEMORI DENGAN ARRAY
  int numGuests;
  cout<<"How many guests : ";
  cin>>numGuests;

  if (numGuests <=0) {
     cout<<"Angka minimal 1 : "<<endl;
     return 0;
  }
  string* guest=new string[numGuests];
  cin.ignore();
  for (int i=0; i<numGuests; i++) {
    cout<<"Masukkan apapun pada urutan ini "<<(i+1)<<" : ";
    getline(cin,guest[i]);
  }
  cout<<"\nGuest Checked : \n";
  for (int i=0; i<numGuests; i++) {
    cout<<guest[i]<<endl;
  }
  delete [] guest;
  return 0;
}
// manfaat mengetahui ukuran memory tipe data, membantu kita mengefisiensi kode yang besar
// Apakah Anda Harus Mengelola Memori Sendiri?

// Kadang-kadang ya - dan kadang-kadang tidak.

// Untuk variabel normal (seperti int x = 10;), C++ akan mengurus memori untuk Anda. Tetapi ketika Anda ingin membuat memori secara manual saat program sedang berjalan (misalnya: berdasarkan input pengguna), Anda perlu mengelolanya sendiri dan membersihkannya saat sudah selesai.

// Jika program Anda menggunakan terlalu banyak memori, atau lupa membersihkan memori yang tidak lagi dibutuhkan, hal itu dapat menyebabkan kinerja melambat atau bahkan crash.

// Itulah mengapa memahami memori itu penting. Ini memberi Anda kontrol lebih dan membantu menghindari bug umum.
