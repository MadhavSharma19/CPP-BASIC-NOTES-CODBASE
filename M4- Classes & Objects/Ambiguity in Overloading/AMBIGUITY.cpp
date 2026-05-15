#include<iostream>
using namespace std;



long square(long x)     { return x * x; }
double square(double x) { return x * x; }

int main() {
    cout << square(5L) << endl;    // OK: matches square(long)
    cout << square(2.5) << endl;   // OK: matches square(double)
    // cout << square(10) << endl; // AMBIGUITY ERROR!
    cout << square((long)10) << endl;    // Fix: explicit cast
    return 0;
}
