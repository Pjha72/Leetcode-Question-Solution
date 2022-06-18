class WordFilter {
public:
    unordered_map < string, int> mp;
    
    WordFilter(vector<string>& words) {
        for(int g = 0 ; g < words.size() ; g++)
        {
            string x = words[g];
            for(int i = 1 ; i <= x.size() ; i++) {
                
                string pre = x.substr(0, i);
                string temp = x;
                reverse(temp.begin(), temp.end());
                for(int k = 1 ; k <= x.size() ; k++)
                {
                    string suff = temp.substr(0, k);
            
                    string f = pre + "-" + suff;
                  
                    mp[f] = g + 1;
                }
                
                 
            }
        }
    }
    
    int f(string prefix, string suffix) {
        reverse(suffix.begin(), suffix.end());
        cout << prefix + "-" + suffix << endl;
        return mp[prefix + "-" + suffix] - 1;   
    }
};
/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */