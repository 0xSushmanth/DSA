#include<iostream>
using namespace std;

// Recursive function to calculate nth term of Fibonacci series
int fibonacci(int n){
    if(n == 0 || n == 1) { // Base case
        return n;
    } else { // Recursively calculate sum of previous two terms
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Get user input for the value of n

    // Call fibonacci function to get the nth term and print the result
    cout << "The " << n << "th term of the Fibonacci series is = "
        << fibonacci(n) << endl;

    return 0;
}


