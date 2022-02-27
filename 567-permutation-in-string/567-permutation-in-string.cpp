class Solution {
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i=0;i<26; i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
         return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count[26] = {0};

	//character count arr
	for (int i = 0; i < s1.length(); i++)
	{
		int index = s1[i] - 'a';
        count[index]++;
	}
    //traverse s2 string in window of size s1 length and compare
    int i=0;
    int windowSize = s1.length();
    int count1[26] = {0};
    
    //running for first window
    while(i < windowSize && i < s2.length()){
        int index = s2[i] - 'a';
        count1[index]++;
        i++;
    }
        
    if(checkEqual(count , count1)){
        return true;
    }
    //aage window process karo    
    while(i < s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count1[index]++;
        
        int oldChar = s2[i-windowSize];
         index = oldChar - 'a';
        count1[index]--;
        i++;
        
        if(checkEqual(count , count1)){
            return true;
    }
        
   }
        return false;
  }
};