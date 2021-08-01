#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_function(string s){
    int n = s.length();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++){
        int k = pi[i - 1];
        while ((k > 0) and (s[k] != s[i])){
            k = pi[k - 1];
        }
        if (s[k] == s[i])
            k += 1;
        pi[i] = k;
    }
    return pi;
}

int main()
{
    string line;
    getline(cin, line);
    vector<int> pi = prefix_function(line);
    /*
    for (int i = 0; i < pi.size(); i++){
        cout << pi[i] << " ";
    }*/
    if (line.length() % (line.length() - pi[line.length() - 1]) == 0){
        cout << line.length() / (line.length() - pi[line.length() - 1]);
    }
    else{
        cout << 1;
    }
    cout << endl;
    return 0;
}
