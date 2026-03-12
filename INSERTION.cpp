#include <iostream>
using namespace std;

int arr[20];
int n;

void input() { // procedure input
    while (true) {
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }

    cout << endl;
    cout << "===============================" << endl;
    cout << "=========Masukan Element Array=========" << endl;
    cout << "===============================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
void insertionsort() { // procedure insertion sort
    int temp;
    int j;
    
    for (int i = 1; i < n; i++) { // Dimulai dari 1 karena elemen pertama dianggap sudah terurut
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;

        // Menampilkan langkah-langkah pengurutan (Step)
        cout << "\nStep " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}