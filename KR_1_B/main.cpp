#include <iostream>
#include <vector>
#include <algorithm>

void skip(std::vector<int> &V, int &i, int k){
    int j = i;
    while (V[j] == V[i]){
        i += k;
    }
}

int main()
{
    int n, N;
    std::cin >> n;
    std::vector<int> V;

    for (int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        V.push_back(a);
    }
    std::cin >> N;

    std::sort(V.begin(), V.end());

    for (int i = 0; i < n; skip(V, i, +1)){
        for (int j = i + 1; j < n - 2; skip(V, j, +1)){
            int min = j + 1;
            int max = n - 1;
            while (min < max){
                int sum = V[min] + V[max] + V[i] + V[j];
                if (sum == N){
                    std::cout << V[i] << ' ' << V[j] << ' ' << V[min] << ' ' << V[max] << ' ';
                    skip(V, min, +1);
                    skip(V, max, -1);
                }
                else{
                    if (sum < N){
                        skip(V, min, +1);
                    }
                    else{
                        skip(V, max, -1);
                    }
                }
            }
        }
    }
    return 0;
}
