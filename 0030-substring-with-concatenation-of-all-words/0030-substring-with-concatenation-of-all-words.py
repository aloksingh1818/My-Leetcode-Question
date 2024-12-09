class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        n, m, k = len(s), len(words), len(words[0])
        word_count = Counter(words)
        total_len = m * k
        res = []

        for i in range(k):
            left = i
            sub_count = Counter()
            count = 0

            for j in range(i, len(s) - k + 1, k):
                word = s[j:j + k]
                if word in word_count:
                    sub_count[word] += 1
                    count += 1

                    while sub_count[word] > word_count[word]:
                        sub_count[s[left:left + k]] -= 1
                        left += k
                        count -= 1

                    if count == m:
                        res.append(left)
                else:
                    sub_count.clear()
                    count = 0
                    left = j + k

        return res