class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num_dict = {}
        for num in nums:
            num_dict[num] = 1 + num_dict.get(num, 0)
            
            new_list = []

            for key in num_dict:
                new_list.append((num_dict[key], key))

        arr = sorted(new_list, reverse=True)

        ans = []
        for top in range(k):
            ans.append(arr[top][1])

        return ans
