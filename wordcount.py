file = open("C:\data.txt", "r+")
data = file.read()
words = data.split()

print('Number of words in text file :', len(words))
