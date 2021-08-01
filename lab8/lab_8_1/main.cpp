#include <iostream>

using namespace std;

int sum = 0;
void F(int n) {
    sum += n;
    if (n >= 3) {
        F(n / 2);
        F(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    F(n);
    cout << sum <<endl;

    return 0;
}
