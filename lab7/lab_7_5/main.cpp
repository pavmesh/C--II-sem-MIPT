#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N][N];
    int B[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            B[j][N - i - 1] = A[i][j];
        }
    }

     for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
           cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
