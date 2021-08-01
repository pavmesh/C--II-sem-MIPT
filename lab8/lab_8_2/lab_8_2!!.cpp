#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int M, int *nums)
{
    int check = 0;
    int64_t a = 0, b = 1;
    for (int l = M - 1; l >= 0 ; l--){
        a += nums[l] * b;
        b *= 10;
        check += nums[l];
    }
    if (((check % 3 == 0) and (a != 3)) or ((nums[M - 1] % 2 == 0) and (a != 2)) or ((nums[M - 1] == 5) and (a != 5))){
        return 0;
    }
    if (a == 2){
        return 1;
    }

    for (int i = 3; i * i < a + 1 ; i += 2 ){
        if (a % i == 0){
            return 0;
        }
    }
    if (a == 1){
        return 0;
    }
    return 1;
}

int permutations(int cur, int M, int N, int * nums, bool * B, int &sum)
{
    if (cur == M){
        sum += is_prime(M, nums);
        //cout << sum << endl;
    }
    else {
        for (int i = 0; i < N; i++){
            if (B[i]){
                continue;
            }
            nums[cur] = i + 1;
            B[i] = true;
            permutations(cur + 1, M, N, nums, B, sum);
            B[i] = false;
        }
    }
    return sum;
}

int main()
{
    int N, M, sum = 0, cur = 0;
    cin >> N >> M;
    int *nums = new int[M];
    bool *B = new bool[N];

    cout << permutations(cur, M, N, nums, B, sum) << endl;
    //cout << permutations(cur, M, N, nums, B, sum) << endl;
    return 0;
}

