#include <iostream>
using namespace std;

int setBits(int n){

    int count = 0;
    while(n != 0) {

        //checking last bit
        if(n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}


int main(){

    int a,b;
    cin >> a >> b;
    int sum = setBits(a) + setBits(b);
    cout << sum << endl;
    return 0;
}