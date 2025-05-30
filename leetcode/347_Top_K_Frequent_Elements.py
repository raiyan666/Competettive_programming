nums=[]
input_numbers = input("Enter numbers separated by commas: ")
numbers = [int(num) for num in input_numbers.split(",")]
for num in numbers:
    nums.append(int(num))
k=int(input("k= "))
numMap={}
for num in nums:
    if num not in numMap:
        numMap[num]=0
    numMap[num]+=1
sorted_numList=sorted(numMap.items(), key=lambda x: x[1], reverse=True)
# print(sorted_numList)
ans=[]
for key in sorted_numList:
    ans.append(key[0])
for i in range (k):
    print(ans[i])

