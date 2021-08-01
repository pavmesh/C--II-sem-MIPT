#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int M, int nums[M]){
    int a = 0;
    for (int l = M ; l > 0; l--){
        a += nums[l] * pow(10, M-l);
    }

    for (int i = 2; i * i < a + 1 ; i++ ){
        if (a % i == 0){
            return 0;
        }
    }
    return 1;
}

int permutations(int cur, M, nums[M], sum){
    if (cur == M - 1){
        sum += is_prime (M, nums[M]);
    }
    else {
        for (i = 0; i < N; i++){
            if (B[i]){
                continue;
            }
            nums[cur] = i;
            B[i] = true;
            permutations(cur + 1, M, nums[M], sum);
            B[i] = false;
        }
    }
}

int main()
{
    int N, M, sum = 0;
    cin >> N >> M;
    int A[N], nums[M] = {};
    bool B[N];
    for (int i = 0; i < N; i++){
        A[i] = i + 1;
        B[i] = false;
    }

    cout << permutations(0, M, nums[M], sum) << endl;
    return 0;
}
