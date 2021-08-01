#include <iostream>

using namespace std;

int main()
{
    int M, N, S;
    cin >> M >> N;
    int C[M + 2][N + 2];
    for (int j = 0; j < N + 2 ; j++){
        C[0][j] = 1000000;
        C[M + 1][j] = 1000000;
    }
    for (int i = 0; i < M + 2 ; i++){
        C[i][0] = 1000000;
        C[i][N + 1] = 1000000;
    }
    for (int i = 1; i < M + 1; i++){
        for (int j = 1; j < N + 1; j++){
            cin >> C[i][j];
        }
    }
    C[0][1] = 0;
    C[1][0] = 0;
    cin >> S;
    /*
    for (int i = 0; i < M + 2; i++){
        for (int j = 0; j < N + 2; j ++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод таблицы */
    for (int i = 1; i < M + 1; i++){
        for (int j = 1; j < N + 1; j++){
            C[i][j] += min(C[i - 1][j], C[i][j - 1]);
        }
    }
    /*
    for (int i = 0; i < M + 2; i++){
        for (int j = 0; j < N + 2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод таблицы */
    if (S - C[M][N] >= 0){
        cout << S - C[M][N] << endl;
    }
    else{
        cout << "Impossible" << endl;
    }
    return 0;
}
