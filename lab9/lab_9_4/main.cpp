#include <iostream>
#include <cmath>
using namespace std;

int jump(int N, int A[]){
int sum = 0;
if (N == 1)
    return 0;
int* B = new int[N];
B[0] = 0;
B[1] = abs(A[1] - A[0]);
for (int i = 2; i < N; i++){
    if (B[i - 2] + 3 * abs(A[i] - A[i - 2]) < B[i - 1] + abs(A[i] - A[i - 1]))
        B[i] = B[i - 2] + 3 * abs(A[i] - A[i - 2]);
    else
        B[i] = B[i - 1] + abs(A[i] - A[i - 1]);
}
sum = B[N - 1];
delete [] B;
    return sum;
}
int main()
{
    int N;
    cin >> N;
    int* A = new int[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << jump(N, A) << endl;
delete [] A;
    return 0;
}
