#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &w,int guesswc,int days){
        int count=1;
        
        int i=0;
        int sum=0;
        while(i<w.size()){
            
           
            
            if(sum + w[i]>guesswc){
                count+=1;
                sum=w[i];
                
            }
            else{
                sum+=w[i];
            }
            i++;
        }
        
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int l=INT_MIN,r=0;
        // lower limit will be max of weights
        // upper limit sum of weights array;
        
        for(auto x: weights){
            r+=x;
            l=max(l,x);
        }
        
        
        while(r>l){
            int mid= l + (r - l)/2;
            
            //FFFFTTTTTTT
            // Check  for min i.e first true ,mid tells that for this weight can we ship all packages within d days
            
            if(check(weights, mid, days)){
                r=mid;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
    int main()
    {
        vector<int> weights{1,2,3,4,5,6,7,8,9,10};
        int days = 5;
        cout<<shipWithinDays(weights,days);
        return 0;
    }