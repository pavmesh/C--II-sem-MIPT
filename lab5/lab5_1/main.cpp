#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    M = M % N;
    int A[N];
    int A1[N+M];
    for (int i = 0; i < N; i++){
        cin>> A[i];
        A1[i] = A[i];
    }
    for (int j = 0; j < M; j++){
        A1[N+j] = A[j];
    }
    for (int k = M; k < M + N; k++){
        A[k - M] = A1[k];
        cout << A[k - M] << " ";
    }
    cout<< endl;
    return 0;
}
