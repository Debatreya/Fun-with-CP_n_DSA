#include<bits/stdc++.h>
using namespace std;
long long merge(long long *arr, int start, int mid, int end){
    vector<long long> a, b;
    long long count = 0;
    for(int i = start; i <= mid; i++){
        a.push_back(arr[i]);
    }
    for(int i = mid+1; i <= end; i++){
        b.push_back(arr[i]);
    }
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0, k = start;
    while(i < n && j < m){
        if(a[i] > b[j]){
            count += (n - i);
            arr[k++] = b[j++];
        }
        else{
            arr[k++] = a[i++];
        }
    }
    while(i < n){
        arr[k++] = a[i++];
    }
    while(j < m){
        arr[k++] = b[j++];
    }
    return count;
}

long long merge_sort(long long *arr, int start, int end){
    if(start == end){
        return 0;
    }
    int mid = (start+end)/2;
    long long count1 = merge_sort(arr, start, mid);
    long long count2 = merge_sort(arr, mid+1, end);
    long long count3 = merge(arr, start, mid, end);
    return count1+count2+count3;
}
long long getInversions(long long *arr, int n){
    long long count = merge_sort(arr, 0, n-1);
    return count;
}
int main()
{
    long long n = 3;
    // cin>>n;
    long long arr[n]= {3, 2, 1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    cout<<getInversions(arr, n);
    return 0;
}