//leetcode2033
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
         int M = grid.size(), N = grid[0].size(), MN = M*N;
         vector<int> a(MN);
         for(int i=0;i<M;i++){ //����i
            for(int j=0;j<N;j++){  //�k��j
                int k = i*N+j; //��촫��
                a[k] = grid[i][j]; //���Ӫ��}�C ��Ja[]
            }
         }  //�e�� ��grid[i][j]����� ��J²�檺�}�Ca[k]
         sort(a.begin(), a.end());
         int mid = a[MN/2];
         int ans = 0;
         for(int k=0;k<MN;k++){
            int diff = abs(mid-a[k]); //�{�b�o�j�������h��
            if(diff%x != 0)return -1;
            //���Ӥp���� ����㰣 �|����
            ans += diff/x;
         } //�j���ح� �⵪��
         return ans; //�j��᭱ ���׮��ӥ�
    }
};
