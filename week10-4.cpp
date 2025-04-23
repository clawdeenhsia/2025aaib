//week10-4
//Leetcode 1399
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100]={};
        for(int i=1;i<=n;i++){
            int total = 0, now = i;  //癬ㄓ挡狦total
            while(now > 0){
                total += now % 10;
                now = now / 10;
            }
            a[total]++;  //totalㄓノ
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;  //程р氮тㄓ(瞷程Ω计计Τ碭)
        for(int i=0;i<100;i++){
            if(a[i]==max_count) ans++;
        }
        return ans;
    }
};
