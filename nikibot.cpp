#include <iostream>
#define MAX 1000000
using namespace std;

long long int arr[MAX];

int bits(int n) {
    if (arr[n] == -1) {

        if (n == 0)
        arr[n] = 1;

        else if (n == 1)
        arr[n] = 2;

        else arr[n] = (bits(n-1) + bits(n-2))%1000000007;
    }
    return arr[n];
}

void initialize() {
    for (int i = 0; i<MAX; i++) {
        arr[i] = -1;
    }
}

int main () {
    int n, t;
    initialize();
    cin >> t;

    while (t--) {
        cin >> n;
        cout << bits(n) << endl;
    }
}
