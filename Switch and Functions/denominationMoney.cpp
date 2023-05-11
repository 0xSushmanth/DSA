// #include <iostream>
// using namespace std;

// int main(){

//     int amount;
//     cout << "Enter the amount: ";
//     cin >> amount;

//     int notes[] = {100,50,20,10,1};

//     for(int i = 0; i < 5; i++)
//     {

//         switch(notes[i])
//         {
//         case 100:
//         cout << "100: " << amount / 100 << endl;
//         amount = amount % 100;
//         break;
//         case 50:
//         cout << "50: " << amount / 50 << endl;
//         amount = amount % 50;
//         break;
//         case 20:
//         cout << "20: " << amount / 20 << endl;
//         amount = amount % 20;
//         break;
//         case 10:
//         cout << "10: " << amount / 10 << endl;
//         amount = amount % 10;
//         break;
//         case 1:
//         cout << "1: " << amount / 1 << endl;
//         amount = amount % 1;
//         default:
//         break;
//         }
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes[] = {100,50,20,10,1};
    int num_notes[sizeof(notes) / sizeof(notes[0])] = {0}; //To store the number of notes

    for(int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
        num_notes[i] = amount / notes[i];
        amount %= notes[i];
    }

    for(int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
        if(num_notes[i] > 0) {
            cout << notes[i] << ": " << num_notes[i] << endl;
        }
    }

    return 0;
}
