//  FREDDY EDL MARAMIS
//  NIM. 230401010201
#include <iostream>
using namespace std;

struct Member{
    string nama, alamat;
};

void bubbleSort(Member data[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(data[j].nama>data[j+1].nama){
                Member temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }        
    }       
}

int main(){
    Member data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadhillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"},
    };
    int n = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, n);
    cout<<"Hasil Sortir Data : \n";
    cout<<"Nama\tAlamat\n";
    for (int i = 0; i < n; i++)
    {
        cout<<data[i].nama<<"\t"<< data[i].alamat << endl;
    }
    return 0;  
 
}