#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s, a = "v",b = ".", c = "<";

    cin >> n;

    while(n>0){
        if (n/60 > 0){
            for (int i = 0; i < (n % 60) % 10; i++){
                s += a;
            }
            for (int i = 0; i < ((n % 60) / 10); i++){
                s += c;
            }
        s += b;
        }
        else {
            for (int i = 0; i < (n % 10); i++){
                s += a;
            }

            for (int i = 0; i < (n / 10); i++){
                s += c;
            }
        }
        n /=60;
    }
    for(int j = 1; j <= s.size(); j++){
        cout << s[s.size()-j];
    }
    cout << endl;
    return 0;
}

