#include <iostream>
#include <vector>

using namespace std;

void rec(const vector<string>& A, int i, int k){

    if (k == i){
        cout << A[i] << endl;
    }
    else{
        for (int j = k; j <= i; j++){
            cout << A[j] << " " ;
        }
        cout << endl;
        rec(A, i, k + 1);
    }
}

int main()
{
    vector<string> A;
    string s;
    while (cin >> s)
        A.push_back(s);
    for (int length = 0; length < A.size(); length++){
        rec (A, length, 0);
    }
    return 0;
}
