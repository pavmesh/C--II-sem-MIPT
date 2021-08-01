#include <iostream>

using namespace std;

int rec(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    int* A = new int[n];
    A[0] = 2;
    A[1] = 4;
    A[2] = 7;
    for(int i = 3; i < n; i++) {
        A[i] = A[i - 1] + A[i - 2] + A[i - 3];
    }
    int tmp = A[n - 1];
    delete [] A;
    return tmp;
}

int main()
{
    int n;
    cin >> n;
    cout << rec(n) << endl;
    return 0;
}

