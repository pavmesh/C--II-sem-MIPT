#include <iostream>

using namespace std;

int main()
{
    int N, m = 0, tmp1 = 0, tmp2 = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    m = A[0];
    for (int j = 0; j < N; j++){
        if (j == 0){
            tmp1 = A[j];
            A[j] = (A[N-1] + A[j] + A[j+1]) / 3;
        }
        else if (j == N - 1){
            A[j] = (tmp1 + A[j] + m) / 3;
        }
        else {
        tmp2 = tmp1;
        tmp1 = A[j];
        A[j] = (tmp2 + A[j] + A[j+1]) / 3;
        }
    }
    for (int k = 0; k < N; k++){
        cout << A[k] << " ";
    }
    cout << endl;
    return 0;
}
