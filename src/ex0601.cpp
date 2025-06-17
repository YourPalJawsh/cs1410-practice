#include <iostream>
using namespace std;

// p = pointer to balance
// by = amount to draw
void reduce_balance(int* p, int by){
    *p = *p - by;
    // dereference p (*p), - withdraw = new balance!
}

int main(){
    int balance = 85;
    int* ptr = &balance;
    // make an integer pointer for the address of variable "balance"

    cout << balance << endl << ptr << endl;

    int w = 15;
    reduce_balance(ptr, w);
    // (85 - 15 = 70)
    cout << balance << endl;

    int* dbalance = new int;
    *dbalance = 100;
    
    // value
    cout << *dbalance << endl;
    // address
    cout << dbalance << endl;

    // avoid memory leak!
    delete dbalance;

    return 0;
}