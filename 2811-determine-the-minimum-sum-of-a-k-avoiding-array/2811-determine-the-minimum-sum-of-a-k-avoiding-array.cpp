class Solution {
public:
    int minimumSum(int n, int k) {
        int sum = 0, j = 1, count = 0;
        stack<int> q;
        while(count != n)
        {
            if(j<k and (q.empty() or q.top() != j))
            {
                sum+=j;
                count++;
                if(j<k and k-j != j)
                    q.push(k-j);
            }
            else if(j>=k)
            {
                sum+=j;
                count++;
            }
            else if(j == q.top())
                q.pop();
            j++;
        }
               return sum;
    }
};