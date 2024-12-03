#include<iostream>
using namespace std;

int main(){
    int N;
    int X = 0, Y = 0;
while(N != 0){
    cout << "Enter an integer: ";
    cin >> N;
    if(N%2 == 0){
        X++;
    } else if(N%2 != 0){
        Y++;
    }
}


    cout << "#Even numbers = " << X-1 << endl;
    cout << "#Odd numbers = " << Y << endl;
    return 0;
}

