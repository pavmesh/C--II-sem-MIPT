#include <iostream>
using namespace std;

int n,a=0;
int main()
{
    cin >> n;
    while (n != 0){
        if (n % 2 == 0){
           if (n > a){
            a = n;
           }
        }
        cin >> n;
    }
    cout<< a << endl;
    return 0;
}
