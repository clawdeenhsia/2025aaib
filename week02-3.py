#week02-3.py LeetCode
# LeetCode 1. Two Sum
#���@�ӼƦr nums �̭� [�����] �ۥ[ �Otarget
#nums[i] + nums[j] == target

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} #���@�ӽc�l �̭���X�{�L���Ʀr
        #�ڭ̷Q�n��Xtarget�o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num #�t�~�@�ӻݭn���� �i�H��Xtarget�� (target-nums)
            if other in box: #�b�c�l�� ���t�~�@�ӻݭn����
                return[ box[other], i] #��쵪��
            else:  #�p�G�S���A�X���Ʀr���
                box[num] = i  #�N��{�b����num���box�̭�


