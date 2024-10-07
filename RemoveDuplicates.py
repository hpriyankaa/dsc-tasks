def removeDuplicate(nums):
    i = 0
    while i < len(nums) - 1:
        if nums[i] == nums[i + 1]:
            nums.remove(nums[i])
        else:
            i += 1 
    return nums
num=[2,3,4,4,6,7,7]
print(removeDuplicate(num))
