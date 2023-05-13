#include <iostream>
using namespace std;

int getPivot(int arr[],int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;
        if(arr[mid] > arr[end]){
            start = mid + 1;
        } else{
            end = mid;
        }

    }
    return start;
}

int main(){

    int arr[7] = {4,5,6,7,0,1,2};

    int pivot = getPivot(arr,7);

    cout << "The pivot is " << pivot << endl;

    return 0;
}