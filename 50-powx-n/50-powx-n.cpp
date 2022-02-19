class Solution {
public:
    double myPow(double x, int n) {
         if(n==0){
		    return 1;
	     }
         else if(x==0){
            return 0;
         }
	    else{
		    return (double) pow(x,n);
	    }
    }
};