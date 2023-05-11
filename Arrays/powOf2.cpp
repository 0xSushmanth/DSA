#include <iostream>
using namespace std;

bool isPow(int num){
    num = num & 1;
    if(num == 0){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    int n;
    cin >> n;
    isPow(n) ? cout << "No" : cout << "Yes";
    return 0;
}