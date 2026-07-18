class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        cols = [[] for _ in range(9)]
        grids = [[] for _ in range(9)]

        for j, row in enumerate(board):
            track = []
            for i, num in enumerate(row):
                if num != '.':
                    if num in track:
                        return False
                    track.append(num)
                    cols[i].append(num)
                    box = (i // 3) * 3 + (j // 3)
                    grids[box].append(num)
        
        for col in cols:
            track = []
            for num in col:
                if num in track:
                    return False
                track.append(num)

        for box in grids:
            track = []
            for bb in box:
                if bb in track:
                    return False
                track.append(bb)
            
        return True
                
            

        