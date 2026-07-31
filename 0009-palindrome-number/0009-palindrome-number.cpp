class Solution {
public:
    bool palindrom( string s,int y,int z){
        if(y>z) return true;
        if(s[y]!=s[z]) return false;
       else  return  palindrom(s,y+1,z-1);
    }
    bool isPalindrome(int x) {
        string s=to_string(x);
       return palindrom(s,0,s.length()-1);
    
    } 
 
};