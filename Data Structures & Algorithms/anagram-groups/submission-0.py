class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        final_list = []
        used_idx = []

        for i, s in enumerate(strs):

            if (i not in used_idx):

                dic_curr = {}
                current_list = []
                current_list.append(s)

                for char in strs[i]:
                    dic_curr[char] = dic_curr.get(char, 0) + 1
                
                for j in range(i+1, len(strs)):

                    dic_new = {}
                    for char2 in strs[j]:
                        dic_new[char2] = dic_new.get(char2, 0) + 1
                    
                    if dic_curr == dic_new:
                        current_list.append(strs[j])
                        used_idx.append(j)
                    
                final_list.append(current_list)

        return final_list

    