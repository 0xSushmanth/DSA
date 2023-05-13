#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){

    int even[8] = {2,4,6,8,10,12,14,16};
    int odd[7] = {1,3,5,7,9,11,13};
    int evenindex = BinarySearch(even,8,16);
    int oddindex = BinarySearch(odd,7,14);
    cout << "The index of 10 in even array is " << evenindex << endl;
    cout << "The index of 11 in odd array is " << oddindex << endl;
    return 0;
}