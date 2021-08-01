#include <iostream>

using namespace std;

int n,a=1;
int main()
{
    cin >> n;
    while (a < n){
       a*=2;
    }
    if (a == n){
        cout << "YES" << endl;
    }
    else {
        cout<< "NO" << endl;
    }
    return 0;
}
