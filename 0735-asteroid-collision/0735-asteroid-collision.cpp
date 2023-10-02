class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v;
        int j = -1;
        for(int i = 0; i<asteroids.size(); i++){
            if(v.empty() || v.back()<0  || (v.back()>0 and asteroids[i]>0)){
                v.push_back(asteroids[i]);
                j++;
            }
            else{
                while(!v.empty() and v.back()>0 and v[j] < (-asteroids[i])){
                    v.pop_back();
                    j--;
                }
                if(v.empty() || v.back()<0){
                    v.push_back(asteroids[i]);
                    j++;
                }
                if(v[j] >0 and v[j] == (-asteroids[i])){
                    v.pop_back();
                    j--;
                }
            }
        }
        return v;
    }
};