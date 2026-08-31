class Solution:
    def minBishopMoves(self, source: list[int], target: list[int]) -> int:
        if((source[0]+source[1] + target[0]+target[1]) % 2 != 0):
            return -1
        elif(source[0]+source[1] == target[0]+target[1] or source[0]-source[1] == target[0]-target[1]):
            return 1
        return 2