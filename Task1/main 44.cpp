#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    int number;
    string surname;
    int informatics;
    int math;
    int physics;
    int programming;
};

double average(const Student& s) {
    return (s.informatics + s.math + s.physics + s.programming) / 4.0;
}

int main() {
    const int N = 10;
    Student group[N] = {
        {1, "Kovalenko", 4, 3, 3, 4},
        {2, "Melnyk", 5, 4, 4, 5},
        {3, "Shevchenko", 3, 4, 4, 4},
        {4, "Tkachenko", 4, 3, 3, 3},
        {5, "Oliinyk", 2, 3, 3, 2},
        {6, "Bondarenko", 3, 5, 4, 5},
        {7, "Romanenko", 5, 4, 4, 3},
        {8, "Honchar", 4, 2, 3, 3},
        {9, "Lysenko", 4, 5, 5, 5},
        {10, "Danyliuk", 5, 5, 4, 4}
    };

    cout << left << setw(5) << "No"
         << setw(15) << "Surname"
         << setw(6) << "Inf"
         << setw(6) << "Math"
         << setw(6) << "Phys"
         << setw(6) << "Prog"
         << setw(8) << "Avg" << endl;

    cout << string(55, '-') << endl;

    for (int i = 0; i < N; i++) {
        cout << left << setw(5) << group[i].number
             << setw(15) << group[i].surname
             << setw(6) << group[i].informatics
             << setw(6) << group[i].math
             << setw(6) << group[i].physics
             << setw(6) << group[i].programming
             << fixed << setprecision(2) << setw(8) << average(group[i])
             << endl;
    }

    return 0;
}
