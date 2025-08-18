#include <iostream>
using namespace std;

// N factorial -> n! = 1*2*3*4....*N

// int fact(int N){
//     int facto = 1;
//     for(int i=1; i<=N; i++){
//         facto *= i;
//     }
//     return facto;
// }


// int nCr(int n, int r){
//      int fact_n = fact(n);
//      int fact_r = fact(r);
//      int fact_n_r = fact(n-r);
     
//      return fact_n/(fact_r * fact_n_r);

// }


//fibanacci series

int fib(int n){
    if(n <=1){
        return n;
    }
    int t1 = 0;
    int t2 = 1;
    int current;

    for(int i=2; i<=n; i++){
        // if(i == 1){
        //     return 1;
        //     continue;
        // }
        // if(i == 2){
        //     return 2;
        //     continue;
        // }
        current = t1 + t2;
        t1 = t2;
        t2 = current;
    }
    return current;
}


int main()
{
    int n=4;
    int value = fib(n);
    cout<<value<<endl;
   
}