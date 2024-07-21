class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current_altitude=0 , max=0;
        for(int i : gain){
            current_altitude+=i;
            if(current_altitude> max)max = current_altitude;
        }
        return max;
    }
};