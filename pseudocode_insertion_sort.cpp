#include <iostream>
#include <vector>
using namespace std;

long long insertionSort(vector<int>& data) {
    long long langkah = 0;
    int n = data.size();

    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0) {
            langkah++;

            if (data[j] > key) {
                data[j + 1] = data[j];
                j--;
            } else {
                break;
            }
        }

        data[j + 1] = key;
    }

    return langkah;
}

int main() {
    vector<int> data = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Data sebelum diurutkan: ";
    for (int x : data) {
        cout << x << " ";
    }

    long long jumlahLangkah = insertionSort(data);

    cout << "\nData setelah diurutkan: ";
    for (int x : data) {
        cout << x << " ";
    }

    cout << "\nJumlah langkah: " << jumlahLangkah << endl;

    return 0;
}
