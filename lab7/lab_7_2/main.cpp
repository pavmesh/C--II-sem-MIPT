#include <iostream>

using namespace std;

int main()
{
    int N, a, f = 0, F = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a;
        if ((a % 4 == 0) and (a / 1000 != 4) and (a / 1000 != 5)){
            f+=1;
            cout << a << endl;
            F = 1;
        }
        if ((a % 7 == 0) and ((a / 1000 != 7) and (a / 1000 != 1))){
            f+=1;
            if (!F){
                cout << a << endl;
                F = 1;
            }
        }
        if ((a % 9 == 0) and ((a / 1000 != 9) and (a / 1000 != 8))){
            f+=1;
            if(!F){
                cout << a << endl;
            }
        }
        F = 0;
    }
    if (!f){
        cout << 0 << endl;
    }

    return 0;
}
