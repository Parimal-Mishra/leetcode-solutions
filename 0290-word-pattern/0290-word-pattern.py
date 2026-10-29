class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        a = s.split()
        if len(pattern) != len(a):
            return False
            
        d = {}
        for i in range(len(pattern)):
            c = pattern[i]
            w = a[i]
            
            if c in d:
                if d[c] != w:
                    return False
            else:
                if w in d.values():
                    return False
                d[c] = w
                
        return True