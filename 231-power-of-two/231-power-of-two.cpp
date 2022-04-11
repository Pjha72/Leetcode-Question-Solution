class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==0){
          return false;
      }
      //   int bits = __builtin_popcount(n);
      //  if(bits==1){
      //     return true;
      // }
      //   else{
      //       return false;
      //   }
        
        while(n%2==0){
            n/=2;
        }
        return n==1;
        
    }
};