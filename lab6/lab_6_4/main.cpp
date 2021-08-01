#include <iostream>

using namespace std;

int do_some_awesome_work(int* a, int* b){
    int c = *a + *b;
    return c;
}

int main()
{
    int x,y;
    cin >> x >> y;

    cout << do_some_awesome_work(&x,&y) << endl;

    return 0;
}
