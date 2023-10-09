
loop=int(input())
for x in range(0,loop):
    container=[]
    n=int(input())
    same=0
    different=1
    for index in range(0,n):
        ele=int(input())
        container.append(ele)
    #     if same==0:
    #         same=container[index]
    #     elif same!=ele:
    #        different=index
    # print(different+1)
    # print()



# for index in range(0,n):
#     print(container[index],end=' ')
for i in container:
    print(i,end=' ')
