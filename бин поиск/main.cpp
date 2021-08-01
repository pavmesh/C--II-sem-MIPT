#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

double g(double x){
    return x + 0.1;
}

double (*func)(double) = g;

double find_root(double (*f)(double), double a, double b, double tolerance){
    double x;
    if (f((a + b) / 2) == 0)
        return ((a + b) / 2);
    if (abs(a - b) < tolerance)
        return (a + b) / 2;
    else
    {
        double c = (a + b) / 2;
        if (f(a) * f(c) >= 0.){
            x = find_root(f, c, b, tolerance);
        }else
        x = find_root(f, a, c, tolerance);
    }
return x;
}

int main(){
    double root, a, b, tol;

    cin >> a >> b >> tol;

    root = find_root(func, a, b, tol);

    cout << root << "\n";
return 0;
}
