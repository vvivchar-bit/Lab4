#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cout << "Enter m (1..5) and n (1..6): ";
    cin >> m >> n;

    if (m < 1 || m > 5 || n < 1 || n > 6) {
        cout << "Error: m must be in [1..5], n in [1..6]." << endl;
        return 1;
    }

    vector< vector<double> > A(m, vector<double>(n)); // пробіл між >>  
    cout << "Enter matrix elements (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    vector<double> lengths(n, 0.0);

    for (int j = 0; j < n; j++) {
        double sum = 0.0;
        for (int i = 0; i < m; i++) {
            sum += A[i][j] * A[i][j];
        }
        lengths[j] = sqrt(sum);
    }

    double maxLen = lengths[0];
    int maxIndex = 1;
    for (int j = 1; j < n; j++) {
        if (lengths[j] > maxLen) {
            maxLen = lengths[j];
            maxIndex = j + 1;
        }
    }

    cout << "Vector lengths: ";
    for (int j = 0; j < n; j++) {
        cout << lengths[j] << " ";
    }
    cout << endl;

    cout << "Maximum length = " << maxLen << endl;
    cout << "Index (1-based) = " << maxIndex << endl;

    return 0;
}
