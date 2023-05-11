#include <iostream>
using namespace std;

int ap(int n){

    int value = 3 * n + 7;
    return value;

}

int main(){

    int n;
    cin >> n;
    cout << "value of " << n << "th term is " << ap(n);

    return 0;
}