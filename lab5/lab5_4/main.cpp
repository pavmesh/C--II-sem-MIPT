#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int j = 1; j < N; j++){
        for (int k = 1; k < N; k++ ){
            if (A[k] < A[k-1]){
                A[k] = A[k] + A[k-1];
                A[k-1] = A[k] - A[k-1];
                A[k] = A[k] - A[k-1];
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
