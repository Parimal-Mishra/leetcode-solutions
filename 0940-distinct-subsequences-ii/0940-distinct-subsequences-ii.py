class Solution(object):
    def distinctSubseqII(self, s):
        mod=10**9 +7
        freq=[0]*26

        for i in s:
            idx=ord(i)-ord('a')
            freq[idx]=(sum(freq)+1)%mod

        return(sum(freq)%mod)        