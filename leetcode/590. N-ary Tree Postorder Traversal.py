words = []
input_words = input("Enter strings separated by commas: ")

input_words=input_words.split(",")
for word in input_words:
    print(word.strip('"'))
    words.append(word.strip('"'))
for word in words:
    nums.append(int(words))