#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,answer;
    cin >> a >> b >> c >> d;
    cin >> answer;
    if ((a + answer == b) or (c * answer == d)){
        if ((a + answer == b) and (c * answer == d)){
            cout << "5" << endl;
        }
        else {
            cout << "4" << endl;
        }
    }
    else if ((answer == 1024) and (a + 1024 != b) and (c * 1024 != d)){
        cout << "3" << endl;
    }
    else{
        cout << "2" << endl;
    }
    return 0;
}
