words = []
input_words = input("Enter strings separated by commas: ")

input_words=input_words.split(",")
for word in input_words:
    # print(word.strip('"'))
    words.append(word.strip('"'))

wordList=[]
n=len(words)
for word in words:
    # print(''.join(sorted(word)))
    wordList.append(''.join(sorted(word)))
wordMap={}
for i,word in enumerate(wordList):
    # print("case " + word + " : ")
    if word not in wordMap:
        wordMap[word]=[]
    wordMap[word].append(words[i])
    # print(words[i])
# return wordMap
for key, value in wordMap.items():
    print(f"{value}")



