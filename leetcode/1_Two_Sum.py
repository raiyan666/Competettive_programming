nums = []
input_numbers = input("Enter numbers separated by commas: ")
target = int(input("Enter Target: "))
# print("start")

# Split the input string into a list of numbers
numbers = input_numbers.split(',')

# Convert each number to an integer and add to nums
for number in numbers:
    nums.append(int(number.strip()))
    print(number.strip())

numMap = {}
n = len(nums)
print("solution")

for i in range(n):
    numMap[nums[i]] = i

for i in range(n):
    complement = target - nums[i]
    if complement in numMap and numMap[complement] != i:
        print(f"[{i}, {numMap[complement]}]")
        break