#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int tmp = 0;
    vector<int> A(0);
    int a;
    while (cin >> a)
        A.push_back(a);

    for (int i = 0; i < A.size(); i++){
        for (int j = i; j < A.size(); j++){
            if (A[j] < A[i]){
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    int *dp = new int [A.size()];
    dp[0] = 0;
    dp[1] = A[1] - A[0];
    if (A.size() > 2){
        dp[2] = dp[1] + A[2] - A[1];
        int dest;
        for (int i = 3; i < A.size(); i++){
            dest = A[i] - A[i - 1];
            dp[i] = min (dp[i - 1] + dest, dp[i - 2] + dest);
        }
    }
    cout << dp[A.size() - 1] << endl;
    delete [] dp;
    return 0;
}
