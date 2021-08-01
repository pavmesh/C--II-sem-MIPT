#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int *A = new int[n];
    int *B = new int[n];
    for (int i = 0; i < n ;i++){
        cin >> A[i];
        B[i] = 0;
    }
    B[0] = 1;
    for (int j = 0; j < n - 1; j++){
        if ((j + A[j] < n) and (A[j] != 1)){
            B[j + A[j]] = (B[j + A[j]] + B[j]) % 937;
        }
        B[j + 1] = (B[j + 1] + B[j]) % 937;
    }
    cout << B[n - 1] << endl;
    delete [] A;
    delete [] B;
    return 0;
}
