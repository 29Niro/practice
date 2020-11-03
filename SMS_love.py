def split(word): 
    return [char for char in word]

count=0

msg=input()
word=input()

split(msg)
split(word)

#print(msg[0],word[0])

diffrence=len(msg)-len(word)+1

for i in range(diffrence):
    for j in range(len(word)):
        if msg[i+j]==word[j]:
        	if msg[i+j]!='[':
        		count+=1

print(count)