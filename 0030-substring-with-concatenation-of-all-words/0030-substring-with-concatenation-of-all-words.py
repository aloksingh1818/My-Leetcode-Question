class Solution:
    def findSubstring(self, s, words):
        if not s or not words: return []
        n, m, word_len = len(s), len(words), len(words[0])
        word_count = {}
        for word in words:
            word_count[word] = word_count.get(word, 0) + 1
        result = []
        for i in range(word_len):
            left, count = i, 0
            curr_word_count = {}
            for right in range(i, n - word_len + 1, word_len):
                word = s[right:right + word_len]
                if word in word_count:
                    curr_word_count[word] = curr_word_count.get(word, 0) + 1
                    count += 1
                    while curr_word_count[word] > word_count[word]:
                        curr_word_count[s[left:left + word_len]] -= 1
                        left += word_len
                        count -= 1
                    if count == m:
                        result.append(left)
                else:
                    left = right + word_len
                    curr_word_count.clear()
                    count = 0
        return result
