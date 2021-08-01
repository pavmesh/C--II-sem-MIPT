#include <iostream>

using namespace std;

int main()
{
    int n,many=0;
    string s;
    cin>> n >> s;
    while(s != "A999AA"){
        if (n > 60){
            if (s[1] == s[2]){
                if (s[1] == s[3])
                    many += 1000;
                else
                    many += 500;
            }
            else if (s[2] == s[3])
                many += 500;
            else
            {
                if (s[1] == s[3])
                    many += 500;
                else
                    many += 100;
            }
            }
            cin >> n >> s;
        }

    cout << many << endl;
    return 0;
}
