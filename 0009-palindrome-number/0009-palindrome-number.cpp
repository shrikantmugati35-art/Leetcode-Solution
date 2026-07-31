class Solution {
public:
    // bool palindrom( string s,int y,int z){
    // //     if(y>z) return true;
    // //     if(s[y]!=s[z]) return false;
    // //    else  return  palindrom(s,y+1,z-1);
    // // }
    bool isPalindrome(int x) {
    //     string s=to_string(x);
    //    return palindrom(s,0,s.length()-1);
    
    // } 
    //second method//
    if(x<0) return false;
    int orgin=x;
    long long rev=0;
    while(x>0){
        rev=rev*10 +x%10;
        x/=10;
    }
    return orgin==rev;
    }
 
};