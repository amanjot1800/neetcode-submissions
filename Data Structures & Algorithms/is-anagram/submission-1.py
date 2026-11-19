class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a = s 
        b = t
        if len(a) != len(b):
            return False

        if a == "" and b == "":
            return True
        
        counter = defaultdict(int)

        for i in range(len(a)):
            counter[a[i]]+=1
            counter[b[i]]-=1

        for key in counter.keys():
            if counter[key] != 0:
                return False

        return True