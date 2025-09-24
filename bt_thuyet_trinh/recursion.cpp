#include <iostream>
using namespace std;

int TinhGiaiThua (int n){
    if (n == 1){
        return 1;
    }
    return n*TinhGiaiThua(n-1);
}

int Fibonacci (int n){
    if (n == 0){
        return 0;
    }
    if (n == 1 || n == 2){
        return 1;
    }
    else return Fibonacci(n-1) + Fibonacci(n-2);
}

