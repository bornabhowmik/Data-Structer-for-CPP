#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[], int n) {
    int i, j, item;
    for (i = 1; i < n; i++) {
        item = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > item) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}

int main() {
    int n;
    cin >> n;
    int A[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insertion_sort(A, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}