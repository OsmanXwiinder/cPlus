class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointer approach
        int maxCon = 0;
        int lp =0, rp = height.size() -1;
        while(lp < rp){
            int wt = rp - lp;
            int ht = min(height[lp], height[rp]);
            int newCon = wt * ht;
            maxCon =  max(maxCon, newCon);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxCon;

        return maxCon;
    }
};