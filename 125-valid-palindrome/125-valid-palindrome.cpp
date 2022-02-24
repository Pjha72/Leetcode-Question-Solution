

class Solution {
private:
    bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}
    // to convert upper to lower case
    char tolower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    //check char is valid or not

    bool checkPalindrome(string a){
	int s=0,e=a.length()-1;
	while(s<=e){
		if(a[s]!=a[e]){
			return false;
		}
		else{
			s++,e--;
		}
	}
	return true;
}
    
public:
    
    bool isPalindrome(string s) {
        // non-alphanumeric char is removed
        string temp = "";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                    temp.push_back(s[j]);
            }
        }
            
         //lowercase me kerdo
        for(int j=0;j<temp.length();j++){
            temp[j] = tolower(temp[j]);
        }
        //check palindrome
        return checkPalindrome(temp);
    } 
};