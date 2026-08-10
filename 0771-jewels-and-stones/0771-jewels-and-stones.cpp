class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      int fre[128]={0};
      for(char c:stones){
        fre[c]++;
      }
      int count=0;
      for(char ch:jewels){
        count+=fre[ch];
      }
      return count;
    }
};