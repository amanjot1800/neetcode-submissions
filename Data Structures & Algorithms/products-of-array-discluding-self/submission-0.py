class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        lst = []
        for i in range(len(nums)):
            curr = nums[i]
            product = 1
            for j in range(len(nums)):
                if j != i:
                    product *= nums[j]
            lst.append(product)

        return lst