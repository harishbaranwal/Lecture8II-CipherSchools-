#include <iostream>
using namespace std;

void printstuff(){
    cout << "writing my first function"<< endl;
}

int sum(int a, int b){
    int c= a+b;
    return c;
}

int main(){

    printstuff();

    // function two add two integers.

    int a,b,add_sum;
    a=3;
    b=5;
    add_sum = sum(a,b);
    cout << add_sum;
    return 0;
}
