#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Menu Pertama"<<"\n";            
cout<<"2. Menu Kedua"<<"\n";            
cout<<"3. Menu Ketiga"<<"\n";           
cout<<"4. Menu Keempat"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void insertionSort(int data[], int n) {
  system("cls");
  int temp, j;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    j = i - 1;
    while (j >= 0 && data[j] > temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << data[i] << " ";
  }
  
  getch();
}

void sepatahKata() {
  system("cls");
  cout << "Halo dunia" << endl;
  getch();
}

int main() {
char pl;
int data[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};

do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama");
    break;
   case '2':
    // mPertama("ke- dua");
    insertionSort(data, sizeof(data) / sizeof(data[0]));
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}