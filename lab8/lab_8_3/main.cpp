#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

bool prime_set(int N, int *A, bool visited[], int **B){
	for (int i = 0; i < N - 1; i++){
		if (visited[i]){
			for(int k = i + 1; k < N; k++){
                if (visited[k]){
                    if (B[i][k] != 1){
                        return 0;
                    }
                }
            }
        }
	}
	return 1;
}

void prime(int N, int *A, bool visited[], int **B, int current, int &sum){
	if (current == N){
		if (prime_set(N, A, visited, B)){
			sum++;
		}
    }
	else{
		visited[current] = true;
		prime(N, A, visited, B, current + 1, sum);
		visited[current] = false;
		prime(N, A, visited, B, current + 1, sum);
	}
}

int main()
{
    int N, sum = 0;
    cin >> N;
	bool *visited = new bool[N];
	int **B = new int*[N];
    for (int i = 0; i < N;i++){
        B[i] = new int[N];
    }
    int *A = new int[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int j = 0; j < N; j++){
        for (int k = j; k < N; k++){
            B[j][k] = gcd(A[j],A[k]);
        }
    }
    prime(N, A, visited, B, 0, sum);
    cout << sum << endl;
    return 0;
}

