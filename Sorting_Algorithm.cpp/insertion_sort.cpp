#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){

    int i, j, item;

    for(i=1; i<n; i++){
        item=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>item){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=item;
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) { 
        cout << arr[i] <<" ";
    }
}

int main() {
    int n; 
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) { 
        cin >> arr[i]; 
    }

    insertion_sort(arr, n);

    print(arr, n);

    return 0;
    
}

    