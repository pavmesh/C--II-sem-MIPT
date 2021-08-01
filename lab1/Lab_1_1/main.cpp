#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int n;
    bool f = 0;
    for (int i = 0; i < N; i++){
        cin >> n;
        if (n % 4 == 0){
            if (!((n / 1000 == 4) or (n / 1000 == 5))){
                f = 1;
                cout << n << endl;
                continue;
            }
        }
        if (n % 7 == 0){
            if (!((n / 1000 == 7) or (n / 1000 == 1))){
                f = 1;
                cout << n << endl;
                continue;
            }
        }
        if (n % 9 == 0){
            if (!((n / 1000 == 9) or (n / 1000 == 8))){
                f = 1;
                cout << n << endl;
                continue;
            }
        }
    }
    if(!f)
        cout << f << endl;
    return 0;
}
