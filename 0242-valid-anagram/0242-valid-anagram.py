class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        # O(nlogn+mlogm)
        # return sorted(s)==sorted(t)

        # t(0) = O(n+m) ; s(o) = 1 since we have atmost 26 chars only
        # countS,countT = {},{}
        # for i in range(len(s)):
        #     countS[s[i]] = 1 + countS.get(s[i],0)
        #     countT[t[i]] = 1 + countT.get(t[i],0)
        # return countS==countT


        # custom approach

        count = [0]*26
        for i in range(len(s)):
            count[ord(s[i])-ord('a')] += 1
            count[ord(t[i])-ord('a')] -= 1

        return all(c==0 for c in count)