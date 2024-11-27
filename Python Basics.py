...................STRING.......................................
Q1.Print each character of string
Q2.Printing each word of string
Q3.Count no. of occurence of specific character in string
Q4.Count number of occurence of sprecific word in string
Q5.Reverse a  string :god yzal revo pmuj xof nworb kciuq ehT
Q6.Reverse order of string
Q7.Count words in string
Q8.Check substring
Q9.Find longest word in sentence
Q10.
Q11.
Q12.



🧩1.Print each character of string

##str = "The quick brown fox"
##for x in str:
##    print(x)
##########or#########
##for x in range(0, 17):
##    print(str[x])
##########or#######
##for x in range(len(str)):
##    print(str[x])

    
🧩2.Printing each word of string
##str1 = str.split(" ")
##print(str1)

🧩3.Count no. of occurence of specific character in string
##str = "The quick brown fox"
##count = 0
##for x in str:
##    if(x == 'o'):
##        count = count +1
##print(count)
    
🧩4.Count number of occurence of sprecific word in string
##str = "The quick brown fox quick quick"
##str1 = str.split(" ")
##count = 0
##for x in str1:
##    if(x == "quick"):
##        count = count +1
##print(count)
##

🧩5.Reverse a  string :god yzal revo pmuj xof nworb kciuq ehT
##str = "The quick brown fox jump over lazy dog"
##for x in range(1,len(str)+1):
##    print(str[-x], end='')   
###########or
##str1 = str[ : :-1]
##print(str1)

🧩6.Reverse order of string
##str = "The quick brown fox jump over lazy dog"
##str1 = str.split(" ")
##str2 = str1[ : : -1] 
##print(str2)
####The above will be in form of list but we want sentence hence
##sentence = " "    
##for x in str2:
##    sentence += x + " "
##print(sentence)

🧩7.Count words in string
##str = "The quick brown fox jump over lazy dog"
##print(len(str))
##str1 = str.split(" ")
##print(len(str1))

🧩8.Check substring
##str = "The quick brown fox jump over lazy dog"
##sub = "quick brown"
##isPresent = sub in str
##print(isPresent)

🧩9.Find longest word in sentence
##str = "The quick brown fox jump over lazy dog"
##sentence = str.split(" ")
##longestword = " "
##for x in sentence:
##    if len(x) > len(longestword) :
##        longestword = x
##
##print(longestword)

......................................Math operations...............................
Q1. Find factorial of number
Q2.
Q3.
Q4.
Q5.



A1. 
fact = 1
n = int(input("Enter number: "))

(using loop)
for i in range(1,n+1):
    fact = fact*i
print(fact)

(using recursion)
def fact(n):
    if(n<=1):
        return 1
    else:
        return n*fact(n-1)
        
print(fact(n))



