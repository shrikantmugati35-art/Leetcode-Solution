class Solution {
public:
    int findClosest(int x, int y, int z) {
        int fist = abs(x-z);
        int second=abs(y-z);
        if(fist<second){
            return 1;

        }
        else if(fist>second) return 2;
        else return 0;
    }
};