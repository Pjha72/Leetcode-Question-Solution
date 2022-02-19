class Solution {
public:
    bool isPerfectSquare(int num) {
        long s=0,e=num,ans;
        long m = s+(e-s)/2;
        while(s<=e){
            ans = m*m;
            if(ans==num){
                return true;
            }
            else if(ans > num){
                e = m-1;
            }
            else{
                s = m+1;
            }
            m = s+(e-s)/2;
        }
        return false;
    }
};