#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


void dMenu(){
system("cls");
cout<<"Sort Insertion"<<"\n";       
cout<<"1. Memasukkan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah kata"<<"\n";         
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

void inputData(int data[], int n){
    system("cls");    

    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    getch();
}

void outputData(int data[], int n){
    system("cls");
  
    cout << "\nData yang Anda masukkan adalah:\n";
    
    cout << "{";
    for (int i = 0; i < n; i++) {
        cout << data[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "}" << endl;
    getch();
}

void sepatahKata() {
  system("cls");
  cout << "Halo dunia" << endl;
  getch();
}

int main() {
char pl;
int data[10];
int arrSize = (sizeof(data) / sizeof(data[0]));
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    inputData(data, arrSize);
    break;
   case '2':
    outputData(data, arrSize);
    /* code */ 
    break;  
    case '3':
    insertionSort(data, arrSize);
    /* code */
    break;  
   case '4':
    sepatahKata();
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