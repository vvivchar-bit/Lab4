#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const int N = 10;
    string surnames[N] = {
        "Kovalenko",
        "Melnyk",
        "Shevchenko",
        "Tkachenko",
        "Oliinyk",
        "Bondarenko",
        "Romanenko",
        "Honchar",
        "Lysenko",
        "Danyliuk"
    };

    cout << "Original list:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". " << surnames[i] << endl;
    }

    sort(surnames, surnames + N);

    cout << "\nSorted list:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". " << surnames[i] << endl;
    }

    return 0;
}
