class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        int c;
        if(n==0){
            return 0;
        }
        for(int i=2;i<=n;i++){
            c = a+b;
            a=b;
            b=c;
        }
        return b;
    }
};