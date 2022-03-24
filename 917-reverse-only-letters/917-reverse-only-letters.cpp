class Solution {
public:
    string reverseOnlyLetters(string s) {
        // vector<char> v;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
        //         v.push_back(s[i]);
        //     }
        // }
        // int j=v.size()-1;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
        //         s[i]=v[j];
        //         j--;
        //     }
        // }
        // return s;
        
        int start=0;int end=s.size()-1;
        while(start<=end){
            if(s[start]>='a' && s[start]<='z' || s[start]>='A' && s[start]<='Z'){
                if(s[end]>='a' && s[end]<='z' || s[end]>='A' && s[end]<='Z'){
                    swap(s[start],s[end]);
                    start++,end--;
                }
                else{
                    end--;
                }
            }
            else{
               if(s[end]>='a' && s[end]<='z' || s[end]>='A' && s[end]<='Z'){
                   start++;
               }
                else{
                    start++;
                    end--;
                }  
            }
        }
        return s;
    }
};