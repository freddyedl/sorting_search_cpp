#include <iostream>
#include <string>

using namespace std;

struct Pria {
    string nama;
    string alamat;
};

void selectionSort(Pria data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (data[min].nama > data[j].nama) {
                min = j;
            }
        }
        swap(data[min], data[i]);
    }
}

int main() {
    Pria data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadilla", "Banyuamgi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"},
    };

    int n = sizeof(data) / sizeof(data[0]);

    selectionSort(data, n);
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }
    cout<<endl;
    return 0;
}