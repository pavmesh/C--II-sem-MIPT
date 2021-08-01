#include <iostream>

using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    int C[10][10];
    for (int i = 0; i < 10 ; i++){
        for (int j = 1; j < 10 ; j++){
            C[i][j] = 0;
            C[9][j] = -1;
            C[0][j] = -1;
        }
        C[i][0] = -1;
        C[i][9] = -1;
    }
    C[9 - y][x] = 1;
    /*
        for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 10; j ++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод таблицы */

    for (int j = 9 - y; j >= 1; j--){
        for (int i = 1; i < 9; i++){
            if (C[j - 1][i - 1] != -1){
                C[j - 1][i - 1] += C[j][i];
            }
            if (C[j - 1][i + 1] != -1){
                C[j - 1][i + 1] += C[j][i];
            }
        }
    }
    /*
    for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 10; j ++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    } //вывод таблицы */
    for (int k = 1; k < 9; k++){
        sum += C[1][k];
    }

    cout << sum << endl;
    return 0;
}
