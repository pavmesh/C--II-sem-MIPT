#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int C[N + 2][M + 2];

    for (int i = 0; i < M + 2 ; i++){
        C[0][i] = 0;
        C[N + 1][i] = 0;
    }
    for (int i = 0; i < N + 2 ; i++){
        C[i][0] = 0;
        C[i][M + 1] = 0;
    }
    C[0][1] = 1;
    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < M + 1; j++){
            cin >> C[i][j];
        }
    }
    /*
    for (int i = 0; i < N + 2; i++){
        for (int j = 0; j < M + 2; j ++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод таблицы */

    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < M + 1; j++){
            if (C[i][j] == 1){
                C[i][j] = C[i - 1][j] + C[i][j - 1];
             }
        }
    }
    /*
    for (int i = 0; i < N + 2; i++){
        for (int j = 0; j < M + 2; j ++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод  */

    if (C[N][M]){
        cout << C[N][M] << endl;
    }
    else {
        cout << "Impossible" << endl;
    }
    return 0;
}
