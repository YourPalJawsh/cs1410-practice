#include <iostream>
using namespace std;

int main(){
    int bills[] {10, 20, 50};

    // An array is a pointer!
    int* p = bills;
    
    cout << *p << ", " << *(p+1) << ", " << *(p+2) << endl;

    // change 50 to 100!
    bills[2] = 100;
    *(p+2) = 100;

    // dynamically created array
    int* dbills = new int[3] {10, 20, 50};

    cout << *dbills << ", " << *(dbills+1) << ", " << *(dbills+2) << endl;
    cout << dbills[0] << ", " << dbills[1] << ", " << dbills[2] << endl;

    delete[] dbills;

    return 0;
}