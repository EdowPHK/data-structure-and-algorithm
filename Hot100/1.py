class Solution(object):
    def twoSum(self, nums, target):
        hashmap = {}

        for idx, value in enumerate(nums):
            need = target - value
            if need in hashmap:
                return [idx, hashmap[need]]

            hashmap[value] = idx