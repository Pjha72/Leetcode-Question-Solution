class Solution {
public:
    int reverse(int n){
       int sum=0;
        while(n!=0){
            int digit = n%10;
            sum = sum*10+digit;
            n=n/10;
        }
        return sum;
    }
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        int rev1 = reverse(num);
        int rev2 = reverse(rev1);
        if(rev2==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};