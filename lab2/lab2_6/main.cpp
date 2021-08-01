#include <iostream>
using namespace std;

int n,m = 0,s = 0;
int main()
{
    cin >> n;
    while (n != 0){
        if (n > m){
           m = n;
           s = 1;
        }
        else if (n == m){
                s+=1;
        }
        cin >> n;
    }
    cout<< s << endl;
    return 0;
}
