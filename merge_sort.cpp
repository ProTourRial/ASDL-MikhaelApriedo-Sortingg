#include <iostream>
#include <vector>
using namespace std;

long long mergeData(vector<int>& data, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    long long langkah = 0;

    while (i <= mid && j <= right) {
        langkah++;

        if (data[i] <= data[j]) {
            temp.push_back(data[i]);
            i++;
        } else {
            temp.push_back(data[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(data[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(data[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++) {
        data[left + k] = temp[k];
    }

    return langkah;
}

long long mergeSort(vector<int>& data, int left, int right) {
    long long langkah = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        langkah += mergeSort(data, left, mid);
        langkah += mergeSort(data, mid + 1, right);
        langkah += mergeData(data, left, mid, right);
    }

    return langkah;
}

int main() {
    vector<int> data = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Data sebelum diurutkan: ";
    for (int x : data) {
        cout << x << " ";
    }

    long long jumlahLangkah = mergeSort(data, 0, data.size() - 1);

    cout << "\nData setelah diurutkan: ";
    for (int x : data) {
        cout << x << " ";
    }

    cout << "\nJumlah langkah: " << jumlahLangkah << endl;

    return 0;
}
