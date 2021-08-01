#include <iostream>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    int price[N], weight[N];
    int c[N + 1][W + 1];
    for (int i = 0; i < N; i++){
        cin >> weight[i] >> price[i];
    }
    for (int j = 0; j < W + 1; j++){
        c[0][j] = 0;
    }

    for (int i = 1; i < N + 1; i++){
        for (int j = 0; j < W + 1; j++){
            if (j >= weight[i - 1]){
                c[i][j] = max(price[i - 1] + c[i - 1][j - weight[i - 1]], c[i - 1][j]);
            }
            else{
                c[i][j] = c[i - 1][j];
            }
        }
    }

        cout << c[N][W] << endl;

    return 0;
}
