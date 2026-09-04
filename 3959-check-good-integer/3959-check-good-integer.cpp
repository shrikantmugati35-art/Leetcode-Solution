class Solution {
public:
    bool checkGoodInteger(int n) {
       int i=0;
       int digsum=0;
       int squaresum=0;
       while(n>0){
          int  dig=n%10;
          digsum += dig;
          squaresum +=dig*dig;
         n/=10;
       }
       return (squaresum-digsum)>=50;
  
    }
   
};