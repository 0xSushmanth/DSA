#include <iostream>
using namespace std;

void decToBin(int n)
{
    // convert absolute value of n to binary
    int bin[32],i = 0;
    while(n != 0) {
        bin[i] = abs(n % 2);
        n = n / 2;
        i++;
    }

    // add leading 0's if necessary to fill out all 32 bits
    while(i < 32) {
        bin[i] = 0;
        i++;
    }

    // invert the bits
    for(int j = 0; j < 32; j++) {
        bin[j] = !bin[j];
    }

    // add one to get two's complement
    for(int j = 0; j < 32; j++) {
        if(bin[j] == 0) {
            bin[j] = 1;
            break;
        } else {
            bin[j] = 0;
        }
    }

    // print the binary representation
    cout << "The binary representation of " << n << " is: ";
    for(int j = 31; j >= 0; j--) {
        cout << bin[j];
    }
}

int main()
{
    int n = -10;
    decToBin(n);
    return 0;
}
