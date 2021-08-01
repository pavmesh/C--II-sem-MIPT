#include <iostream>
#include<bits/stdc++.h>

using namespace std;

double round3(double f, int *num)
{
    int64_t i, n = 1;

    i = round((f)*1000);
    if (i % 100)
        n++;
    if (i % 10)
        n++;
    f = i / 1000.0;

    if (num)
        *num = n;
    return f;
}

int main()
{
    int a, S = 0, i = 0, n = 0;
    int64_t Sq = 0;
    double M, D;
    cin >> a;
    S += a;
    Sq += a*a;
    while(a){
        cin >> a;
        S += a;
        Sq += a*a;
        i++;
    }
    M = ((double)S) / i;
    D = ((double)Sq) / i - M*M;
    //cout << M << " " << D << endl;
    M = round3(M, &n);
    cout << fixed << setprecision(n) << M << " ";
    D = round3(D, &n);
    cout << fixed << setprecision(n) << D << endl;
    return 0;
}
