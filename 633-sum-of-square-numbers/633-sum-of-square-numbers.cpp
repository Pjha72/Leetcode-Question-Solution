class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = sqrt(c);
        long long b=0;
        while(b<=a){
            long long sum = a*a + b*b;
            if(sum==c){
                return true;
            }
            else if(sum < c){
                b++;
            }
            else{
                --a;
            }
        }
        return false;
    }
};