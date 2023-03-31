# menghitung-gaji-pokok
#Algoritma menghitung gaji pokok karyawan berdasarkan jumlah hari kerjanya sekaligus overtime(jumlah lemburnya)

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  char nama;
  float transport, total, hari, lembur, pokok;
  cout << "Jumlah hari kerja = ";cin>>hari;
  cout << "Jumlah lembur =";cin>>lembur;
  cout << "Masukkan gaji pokok (harian) = ";cin>>pokok;
  if (lembur>=10){
    transport=5000*lembur*10/100;
  }
  else{
    transport=0;
  }
  total=pokok*hari+(5000*lembur)+transport ;
  cout << "Total = "<<total;
  return 0;
}
