//  FREDDY EDL MARAMIS
//  NIM. 230401010201
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int i,j,temp;
  for (i = 0; i < n-1; i++)
  {
    for (j = 0; j < n-1-1; j++)
    {
      if(arr[j]<arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }    
  }  
}

void binarySearch(int arr[], int n, int x){
  int la=0, lb=n-1;
  bool found=false;

  while(la<=lb){
    int tengah=la+(lb-la)/2;
    if (arr[tengah]==x)
    {
      found=true;
      cout<<"Angka "<< x << " ada di indeks ke ";
      int kiri = tengah;
      while (kiri>=0 && arr[kiri] == x)
      {
        kiri--;
      }
      int kanan=tengah+1;
      while (kanan<n && arr[kanan] == x)
      {
        kanan++;
      }
      for (int i = kiri+1; i < kanan; i++)
      {
        cout<< i+1 << " ";
      }
      cout<<endl<<endl;
      break;                      
    }
    else if(arr[tengah]<x){
      lb=tengah-1;
    }else{
      la=tengah+1;
    }    
  }
  if (!found){
    cout<<"Angka " << x << " tidak ada dalam array"<<endl<<endl;
  }    
}

//Fungsi untuk mencetak array
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;  
}

int main() {
  int arr[] = {19, 40, 10, 90, 2, 50, 60, 50,1};
  int n = sizeof (arr)/sizeof (arr[0]);

  cout<<"\nArray sebelum diurutkan : \n";
  printArray(arr,n);

  bubbleSort(arr,n);

  cout<<"\nArray setelah diurutkan : \n";
  printArray(arr,n);

  int x;
  cout<<"\nMasukkan angka yang ingin dicari : ";
  cin>> x;

  binarySearch(arr, n, x);

  return 0;
}