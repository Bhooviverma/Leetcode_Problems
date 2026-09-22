class Solution:
    def findRestaurant(self, list1: list[str], list2: list[str]) -> list[str]:
        index = {}

        for i in range(len(list1)):
            index[list1[i]] = i

        min_sum = float('inf')
        ans = []

        for j in range(len(list2)):
            if list2[j] in index:
                total = index[list2[j]] + j

                if total < min_sum:
                    min_sum = total
                    ans = [list2[j]]

                elif total == min_sum:
                    ans.append(list2[j])

        return ans
