//week10-4
//Leetcode 1399
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100]={};
        for(int i=1;i<=n;i++){
            int total = 0, now = i;  //加起來的結果叫total
            while(now > 0){
                total += now % 10;
                now = now / 10;
            }
            a[total]++;  //total拿來用
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;  //最後把答案找出來(出現最多次數的數字有幾個)
        for(int i=0;i<100;i++){
            if(a[i]==max_count) ans++;
        }
        return ans;
    }
};
