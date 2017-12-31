#include <iostream>

using namespace std;

int main()
{
    int move, choice;
    char codes[101];
    for(int code = 0; code < 101; code ++){
        codes[code] = 0;
    }
    cout << "1.encrypt 2.decrypt";
    cin >> choice;
    cout << "Move:";
    cin >> move;
    cout << "Enter the code:";
    cin >> codes;
    int code = 0;
    if (choice == 1) {
        for (; code < 101; code ++){
            codes[code] += move;
            if ((codes[code] > 90 && codes[code] < 97) || (codes[code] > 122)) {
                codes[code] -= 26;
                cout << codes[code];
            } else if (codes[code] >= 65 && codes[code] <= 90) {
                cout << codes[code];
            } else if (codes[code] >= 97 && codes[code] <= 122) {
                cout << codes[code];
            } 
        }
    } else if (choice = 2) {
        for (; code < 101; code ++) {
            codes[code] -= move;
            if ((codes[code] < 97 && codes[code] > 90) || (codes[code] < 65)) {
                codes[code] += 26;
                if (codes[code] >= 65){
                    cout << codes[code];
            } else if (codes[code] >= 65 && codes[code] <= 90) {
                cout << codes[code];
            } else if (codes[code] >= 97 && codes[code] <= 122) {
                cout << codes[code];
            }
        }
    }
    return 0;
}