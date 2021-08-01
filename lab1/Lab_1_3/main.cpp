#include <iostream>
#include <string>
#include <vector>

using namespace std;

string decline(string& s){

    for (int i = 0; i < s.size(); i++){
        if ((s[i] >= 'A') && (s[i] <='Z'))
            s[i] += 'a' -'A';
    }
    return s;
}


int main() {
    vector<string> A;
    int quantity;
    cin >> quantity;

    for (int i = 0; i < quantity; ++i){
        string s;
        cin >> s;
        A.push_back(s);
    }

    for(int i = 0 ; i < A.size(); i++){
        A[i] = decline(A[i]);
    }

    for (int j = 0; j < quantity; j++){
        for (int i = 0 ; j < quantity - i - 1; i++){
            if (A[i] < A[i+1]){
                string S;
                S = A[i];
                A[i] = A[i+1];
                A[i+1] = S;
            }
        }
    }
    cout << A[0] << " ";
    for (int i = 1; i < A.size(); i++){
        if (A[i] != A[i-1])
            cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
