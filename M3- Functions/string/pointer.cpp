#include<iostream>
using namespace std;
int main(){
    
int var = 42;
int* ptr = &var;  // ptr stores ADDRESS of var

cout << "Value of var: " << var << endl;      // 42
cout << "Address of var: " << &var << endl;    // 0x...
cout << "Value at ptr: " << ptr << endl;      // 42

*ptr = 100;  // Modify var through pointer
cout << "var is now: " << var << endl;  // 100

// Pointer arithmetic with arrays
int arr[] = {10, 20, 30, 40, 50};
int* p = arr;
for (int i = 0; i < 5; i++)
    cout << *(p + i) << " ";  // 10 20 30 40 50

return 0;
}
