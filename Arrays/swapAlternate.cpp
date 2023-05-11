#include <iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    int min = 0;
    int max = n - 1;
    int start = 0;
    int end = start + 1;
    while(start < max){
        swap(arr[start],arr[end]);
        start += 2;
        end += 2;
    }
}


void printArray(int arr[],int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    swapAlternate(arr,6);
    swapAlternate(brr,5);

    printArray(arr,6);
    printArray(brr,5);


    return 0;
}