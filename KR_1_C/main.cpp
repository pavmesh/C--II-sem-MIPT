#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    vector<string> v;
    getline(cin, str);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<' and i+1 < s.size()) {
            int start = i+1;

            bool closed = false;
            if (s[start] == '/') {
                closed = true;
                start++;
            }

            int j = start;
            while(j < s.size() and str[j] != '>') j++;
            if (j == s.size()) {
                cout << "NO";
                return;
            }

            string tag = s.substr(start, j-start);
            if (closed) {
                if (v.empty() || v.top() != tag) {
                    cout << "NO";
                    return;
                }
                v.pop();
            } else {
                v.push(tag);
            }
        }
    }

    if (not v.empty()) {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;
}
