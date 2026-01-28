#include <iostream>
// #include <iterator>
// #include <vector>
// #include <string>
using namespace std;

float celciusToFarenheit(float c){
  return (c*9/5)+32;
}
int main () {
  // 1. Basics
  // cout<<"Assalamaualaikum"<<endl;

  //2. Decision & input
  //int nilai;
  // if (nilai<=6) {
  //   cout<<"Kamu bodoh !"<<endl;
  // }
  // cout<<"Masukkan nilai : ";
  // cin>>nilai;
  // if (nilai<=40) {
  //    cout<<"Nilai kamu D"<<endl;
  // }else if (nilai<=60) {
  //    cout<<"Nilai kamu C"<<endl;
  // }else if (nilai<=80) {
  //    cout<<"Nilai Kamu B"<<endl;
  // }else if (nilai<=98) {
  //    cout<<"Nilai kamu A"<<endl;
  // }else if (nilai<=100) {
  //    cout<<"Nilai kamu A+"<<endl;
  // }else {
  //    cout<<"Masukkan angka yang benar"<<endl;
  // }

   
  // 3. looping for
  // int nilai[5]={10,2,3,40,32};
  // for (int i=0; i<5; i++) {
  //   cout<<nilai[i]<<endl;
  // }
  
  //4. Array
  // int barr[]={4,3,5,6,1};
  // cout<<"Array ke-0 adalah "<<barr[0]<<endl;

  //5. Input user Array
  // vector<string> userInputs;
  // string input;
  // cout<<"Masukkan input angka (Tulis 'quit' untuk berhenti)\n";
  // while (true) {
  //   cout<<"Masukkan value : ";
  //   getline(cin,input);
  //   if (input=="quit") {
  //     break;
  //   }
  //   userInputs.push_back(input);
  // }
  // cout<<"\nInput yang tersimpan : \n";
  // for (const string& value:userInputs) {
  //   cout<<value<<endl;
  // }
  
  // 6. fungsi
  // float celciusToFarenheit(float c){
  //   return (c*9/5)+32;
  // } harus ditempatkan di luar int main
  float c;
  cout<<"Masukkan nilai Celcius : ";
  cin>>c;
  cout<<"Hasilnya : "<<celciusToFarenheit(c)<<endl;
  return 0;
}
