#include <iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Sort01(int arr[],int n){

    int i = 0;
    int j = n - 1;

    while(i < j){
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){

    int arr[8] = {0,1,0,1,0,1,1,0};
    printArray(arr,8);
    Sort01(arr,8);
    printArray(arr,8);

    return 0;
}