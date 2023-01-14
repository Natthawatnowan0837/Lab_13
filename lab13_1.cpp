#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if(x == 0 ){
       int x = 0 ;
       return x;
    }if(x == 1 ){
        int x = 1;
        return x;
    }if(x >1 ){
       x = fibonacci(x-1) + fibonacci(x-2);
    }
    return x;
}