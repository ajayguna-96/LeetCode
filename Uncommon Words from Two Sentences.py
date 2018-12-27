class Solution:
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        res = []
        words_a = list(A.split());
        words_b = list(B.split());
        words = words_a + words_b
        for word in words:
            if words.count(word) == 1:
                res.append(word)
        return res
