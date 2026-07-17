class Solution {
public:
   bool isAnagram(string s, string t) {
        vector<int>ch(26,0);
        if(s.size()!=t.size()){
            return false;
        }else{
  for(int i=0;i<s.size();i++){
            ch[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            if(ch[t[i]-'a']>0){
ch[t[i]-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
        }
   }
};
