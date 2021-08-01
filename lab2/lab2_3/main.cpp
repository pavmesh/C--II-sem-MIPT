
#include <iostream>

using namespace std;

int n,s=0;
int main()
{

    cin >> n;
    while (n!=0){
       if (n % 2 == 0){
         s++;
       }
       cin >> n;
    }
    cout << s << endl;
    return 0;
}
