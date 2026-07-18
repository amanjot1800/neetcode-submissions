class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        run = 1
        arr = []
        flag = []

        for i, num in enumerate(nums):
            if num == 0:
                flag.append(i)
                continue
            run *= num

        if flag:
            arr = [0] * len(nums)

            if len(flag) > 1:
                return arr

            for j in flag:
                arr[j] = run
        else:
            for num in nums:
                if num!=0:
                    arr.append(int(run/num))
                else:
                    arr.append(0)
            
        return arr