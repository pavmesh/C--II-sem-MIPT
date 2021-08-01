#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int *A = new int[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    int *dp = new int[n];

    for (int j = 0; j < n; j++) {
        dp[j] = 1;
        for (int k = 0; k < j; k++)
            if (A[k] < A[j])
                dp[j] = max (dp[j], 1 + dp[k]);
    }

    int res = dp[0];
    for (int l = 0; l < n; l++)
        res = max (res, dp[l]);
    cout << res << endl;
    delete [] A;
    delete [] dp;
    return 0;
}
