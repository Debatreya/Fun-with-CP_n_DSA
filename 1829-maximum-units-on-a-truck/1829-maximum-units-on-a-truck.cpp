class Solution {
private:
    static bool comp(vector<int> a, vector<int> b){
        return  a[1] > b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int i = 0;
        int sum = 0;
        while(i<boxTypes.size() and truckSize){
            if(boxTypes[i][0] > truckSize){
                sum+=(truckSize*boxTypes[i][1]);
                truckSize = 0;
            }
            else{
                sum+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            i++;
            cout<<"Sum = "<<sum<<" size= "<<truckSize<<endl;
        }
        return sum;
    }
};