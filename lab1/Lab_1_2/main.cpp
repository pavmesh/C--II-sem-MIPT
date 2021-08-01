#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void print(int a){
    string s3;
    cin >> s3;
    printf(s3.c_str(), a);
    cout << endl;
};

void print(double a){
    string s3;
    cin >> s3;
    printf(s3.c_str(), a);
    cout << endl;
};

void print(string a){
    string s3;
    cin >> s3;
    cout << a << endl;
};

int main()
{
    string input_format, output_format; //s1 s2
    cin >> input_format;
    union {
        int d;
        double f;
        char str[21];
    };

    scanf(input_format.c_str(),&u);
    fflush(stdout);
    cin>> output_format;
    printf(output_format,c_str(), u.d);

 /*
    if (s1 == "%s"){
        string s;
        cin >> s;
        print(s);

    }

    if (s1 == "%d"){
        int s;
        cin >> s;
        print(s);
    }
    if (s1 == "%lf"){
        double s;
        cin >> s;
        print(s);
   }
*/
    return 0;
}
