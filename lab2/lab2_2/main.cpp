
#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    if ( ((N % 4 == 0) and (N % 100 != 0) ) or (N % 400 == 0)){

    cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
