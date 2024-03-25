// UCP 1 alprog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1. Pisahkan menjadi 2 sublist, sorted dan unsorted 
//   sorted list memiliki satu elemen dan unsorted list memiliki beberapa elemen
//   letakkan satu elemen dari unsorted list pada posisi yang benar di sorted list dengan cara :
//     set temp = arr[i]
//     set j = i-1
//     letakkan i pada temporary
//     jika j>=0 dan arr[j]>temp, maka geser isi arr[j] ke arr[j+1], jika tidak maka letakkan i di j-1
//     ulangi hingga n-1
//
//2. Cari nilai array terkecil, pada arr[j] ke arr[n-1]
//   set min_index = j
//   jika arr[i] < arr[min index]
//   Tukar arr[j] dengan arr[min_index]
//
//3. Langkah sebanyak n-1



#include <iostream>
using namespace std;

int mannanta[28];
int n, j, min_index;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada mannanta : ";
        cin >> n;
        if (n <= 28)
            break;
        else {
            cout << "\nmannanta dapat mempunyai maksimal 28 elemen.\n";

        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukan Elemen mannanta" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> mannanta[i];

    }

}

void selectionsortarray() {
    for (int j = 0; j < n - 1; j++)
        int min_index = j;
    for (int i = j + 1; i < n; i++) {
        if (mannanta[i] < mannanta[min_index]) {
            min_index = i;
        }
    }
    int temp = mannanta[j];
    mannanta[j] = mannanta[min_index];
    mannanta[min_index] = temp;
}



void display() {
    cout << endl;
    cout << "=============" << endl;
    cout << "Element mannanta yang telah tersusun" << endl;
    cout << "=============" << endl;
    for (int j = 0; j < n; j++) {
        cout << mannanta[j] << endl; 

    }
    cout << "jumalah pass = " << n - 1 << endl; 
    cout << endl;
}



int main()
{
    input();
    selectionsortarray();
    display();
    system("pause");
    return 0;

}

