class Solution {

public:
    int fib(int n) {
        return fibonacci(n);
    }
    int fibonacci(int n){
        if(n==0 || n==1){
            return n;
        }          
        return fib(n-1)+fib(n-2);
    }
};