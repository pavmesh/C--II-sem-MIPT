#include <iostream>

using namespace std;

int rec(int n){

if (n > 2)
    return 4*rec(n - 3) + 6*rec(n - 2);
if (n == 0)
    return 1;
if (n == 1)
    return 3;
if (n == 2)
    return 8;

return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << rec(n) << endl;
    return 0;
}
