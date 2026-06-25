#WAP program to find prime number 
def is_prime(n):
    if n <= 1:
        return False
    return all(n % i != 0 for i in range(2, int(n ** 0.5) + 1))
'''num = int(input("Enter the num to check prime: "))
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number."('''
def creat_table ( ):
    
    number = int(input("Enter the number to form table: "))
    for i in range(1, 11):
        print(f"{number} x {i} = {number * i}")
'''
with open("myfile.txt", "+r") as f :
    
    #with statement is used to open file
    f.write( "Welcome to File handling class")
    for i in range (2):
        print(f.read(6)) '''
# ques of pattern triangles
def pattern_triangle(num ):
    ''' *
       ***
       *****
      *****'''
    #n=3
    for i in range (1,8,2):
        print((num * ' ' + i * '*'))
        num -=1
def chap_string():
    S="Hello Python" # anything in " " is a string
# it can be replicate using * and can be concatenation using +
    print(S*3)
    print(S+" Programming")
    print(S[0],"zero index of string")
# traversing a string
    for i in S:
        print(i)
# slicing a string
    print(S[0:5:2]) # it will print from 0 to 4 (str[start:end: step default is 1])
    print(S[::-1]) # it will print reverse of string 
    ''' 4 comb is possible [LL : UL :SV], [LL :: SL] , [ : UL : SV] , [: :SV] '''
# string functions
    def strfxn(S):
        print(len(S)) # it will print length of string

        print(S.upper()) # it will print string in upper case

        print(S.lower()) # it will print string in lower case

        print(S.capitalize()) # it will print first letter in upper case

        print(S.isalnum()) # return true if all char are alphanumeric

        print(S.isalpha()) # return true if all char are alphabetic

        print(S.isdigit()) # return true if all char are digits

        print(S.islower()) # return true if all char are in lower case

        print(S.isupper()) # return true if all char are in upper case it ignore num in alpnum 

        print(S.isspace()) # return true if all char are white space

        print(S.istitle()) # return true if first letter of each word is in upper case

        print(S.startswith("H")) # return true if string starts with given char

        print(S.endswith("n")) # return true if string ends with given char or group of chr

        print(S.count("l")) # return count of given char

        print(S.title()) # return string with first letter of each word in upper case

        print(S.replace("l","L")) # return string with all given char replaced by another character #replace(old , new)

        print(S.split()) # return list of string after splitting by given char

        print(S.partition("l")) # return tuple of string after splitting by given char

        print(S.index("P")) # return index of given char retunrs error if not found

        print(S.find("P", 0 , 29)) # return index of given char find(char ,start index, end index) if char no found it will return -1

        print(S.swapcase()) # return string with upper case to lower case and lower case to upper case

        print(S.lstrip()) # return string with leading white space removed
        print(S.rstrip()) # return string with trailing white space removed

        print(S.join("_")) # return string with given char joined to all char

#Write a palindrome program using string
# palindrome means that a string is same when read from left to right and right to left
# eg: madam , radar , level , rotor , reviver , nitin, dad , mom 
    str1=input("Enter the str to check palindrome: ")
    S1=str1.lower()
    if S1[::-1] == S1:
        print("It is a palindrome")
    else:
        print("Its not a palindrome")
#Write a program to convert its lower into upper case and upper into lower case
    str2=input("Enter the str to convert case: ")
    S2=str2.swapcase()
    print (S2,"New string")
#Write a program to count the number of words in a string
    str3=input("Enter the str to count words: ")
    S3=str3.split()
    print(len(S3),"words") #or
    count = 0
    for k in S3:
        count= count + 1
    print(count,"words are present in str")
#Write a program to count the number of vowels in a string
    str4=input("Enter the str to count vowels: ")
    S4=str4.lower()
    count2 = 0
    for i in S4:
        if i in "aeiou":
            count2=count2+1
    print(count2, "vowels are present in str")
    
def chap_list ( ) :
    L=[ ] # List is a collection of items in [ ]
    # creat a list [ two ways to create a list either by defining [ ] or using keywords that is list() ]
    L1=[1,2,3,4,5,6,7,8,9,10] # it is mutuable (which can be changed)
    # SLICING, REPLICATION CONCATENATION SAME AS STRG
    L4 = L1 + [1,4,5,7] # it will concatenate L1 and List [1,4,5,7]
    L5 = L1 * 3 # it will replicate L1 3 times
    ''' if List*0 it will return empty list '''
    L6 = L1[0:5] # it will print from 0 to 4 (str[start:end: step default is 1])
    def listfxn ( ):
        L1.append(11) # it will add 11 at the end of list
        
        L1.insert(0,0) # it will add 0 at 0 index
        L2 = [12,13,14,15]
        L1.extend (L2) # it will add L2 at the end of L1
        
        L1.remove(0) # it will remove 0 (item) from list
        
        L1.pop() # it will remove last element of list (index)
        
        L1.pop(0) # it will remove element at 0 index
        
        L1.clear() # it will clear all element of list
        
        L1.index(1) # it will return index of given item 
        
        L1.count(1) # it will return count of given item
        
        L1.sort() # it will sort list in ascending order
        
        L1.reverse() # it will reverse list
        
        L1.copy() # it will copy list 
        # two ways to copy L1 = l2 or l2 = L1.copy()
        
        len(L1) # it will return length of list

        del L1[0] # it will delete element at 0 index
        del L1[0 : 2] # it will delete element from 0 to 2 index 
        del L1 # it will delete entire list
        L1=[1,2,3,4,5,6,7,8,9,10]
        L3 = sorted(L1) # it will return sorted list and sve it in l3 
        
        Sum1 = sum(L1) # it will return sum of all element of list
        
        max1 = max(L1) # it will return maximum element of list
        
        min1 = min(L1) # it will return minimum element of list

    # Wap to shift all elements by one position to right and last      element will go to first position
    def shift_right ( ):
        L1=[1,2,3,4,5,6,7,8,9,10]
        L1.insert(0,L1.pop())
        print(L1)
    # Wap to shift all negative elements to left side and positive to right side
    def shift_neg_pos ( ):
        L1=[1,-2,3,-4,5,6,-7,8,9,10,-88,-65,0]
        L2=[]
        L3=[]
        for i in L1:
            if i < 0:
                L2.append(i)
            else:
                L3.append(i)
        L2.extend(L3)
        print(L2)
    # Wap to find second largest element in a list
    def second_largest ( ):
        L1=[1,2,3,4,5,6,7,8,9,10]
        L1.sort()
        print(L1[-2])

def chap_tuple ( ) :
    T = (1,2,3,4,5,6,7,8,9,10) # tuple is immutable (which can not be changed)
    # SLICING, REPLICATION CONCATENATION SAME AS STRG
    T1 = T + (1,4,5,7) # it will concatenate T and Tuple (1,4,5,7)
    T2 = T * 3 # it will replicate T 3 times
    ''' if Tuple*0 it will return empty tuple '''
    T3 = T[0:5] # it will print from 0 to 4 (str[start:end: step default is 1])
    # nested tuple e.g t1 = (1,2,3,4,(5,6,7,8))
    def tuplefxn ( ):
        T1.append(11) # it will give error as tuple is immutable
        T1.insert(0,0) # it will give error as tuple is immutable
        T2 = (12,13,14,15)
        T1.extend (T2) # it will give error as tuple is immutable
        T1.remove(0) # it will give error as tuple is immutable
        T1.pop() # it will give error as tuple is immutable
        T1.pop(0) # it will give error as tuple is immutable
        T1.clear() # it will give error as tuple is immutable

        len (T1) # it will return length of tuple
        print (max(T1))
        print (min(T1))
        print (sum(T1))

        print (sorted(T1)) # it will return sorted tuple and save it in         T3
        #comparing two tuple
        T1 = (1,2,3,4,5,6,7,8,9,10)
        T2 = (1,2,3,4,5,6,7,8,9,10,12)
        print (T1 == T2) # it will return true if both tuple are same
        print (T1 != T2) # it will return true if both tuple are not            same
        print (T1 > T2) # it will return true if T1 is greater than T2
        print (T1 < T2) # it will return true if T1 is less than T2

def chap_dict ( ) :
    D = { } # Dictionary is a collection of key value pairs in { } MUTABLE DATA TYPE 
    # creat a dictionary { } it is unordered datatype 
    D1 = {1:"one",2:"two",3:"three",4:"four",5:"five"}
    # 1,2,3 are keys and "one","two","three" are Key values
    # keys are unique and immutable and values are not unique and mutable
    #nested dict e.g D1 = {1:"one",2:"two",3:"three",4:{5:"five",6:"six"}}
    def dictfxn ( ):
        D1.clear() # it will clear all element of dictionary
        D1.copy() # it will copy dictionary
        D1.fromkeys() # it will return dictionary with given keys and default value
        D1.get() # it will return value of given key
        D1.items() # it will return all key value pairs in dictionary
        D1.values() # it will return all values in dictionary
        D1.keys() # it will return all keys in dictionary
        D1.pop() # it will remove last element of dictionary if item not exist return error 
        D1.pop(1) # it will remove element at 1 index
        D1.popitem() # it will remove last element of dictionary
        D1.setdefault() # it will return value of given key and if key not present then it will add key with default value
        D1.update() # it will update dictionary with given key value pairs
        D1.values() # it will return all values in dictionary
        A=list(sorted(D1.items())) # it will return sorted list of key value pairs
        
def chap_function ( ) :
    # Function is a block of code which only runs when it is called.
    #because of this, a function can do more than just one task.
    # there are two types of function
    # 1. built in function 2. user defined function
    # built in function e.g print(), len(), input(), max(), min(), sum()
    # user defined function e.g def my_function()
    # Module is a file containing python definitions and statements.
    # collection of muiltiple functions is called module
    # e.g import math or from math import sqrt[any function]
    # function can be passed as argument to another function
    '''e.g def my_function(a,b):
    #         print(a+b)
    #         my_function(2,3)'''
    # parameters are the variables listed inside the parentheses in the function definition.
    # arguments are the values that are sent to the function when it is called.
    # two types of parameters 1: Actual 2: Formal
    # Actual parameters are the values passed to the function [ define at calling time ]
    # Formal parameters are the variables listed in the function definition [ define at declaration time ]

    ## [ Trick bought AC with FD money[ AC (ACTUAL PARAMETERS AT TIME OF CALLING)] [FD Formal parameters at time of defining the function (DECLARATION TIME)] ] ]
    def fxn ( ) :
        print("Hello World") # it will print Hello World
    
    def fxn1 ( ) :
        return "Hello World" , "Hello Python" , "Hello C" , "Hello     Java" , "Hello C++" # it will return Hello World and Hello Python and   Hello C and Hello Java and Hello C++

    '''Local variable is a variable declared inside the function and is only accessible within the function whereas global variable is a variable declared outside the function and is accessible both inside and outside the function.
    # x= 5 # global variable
    # e.g def fxn2 ( ) :
    #         x = 10 [ local variable ]
    #         print(x)
    #         fxn2()    
    
'''
def main():
    #chap_string()'''


    arr= [28,23,45,67,78,89,90]
List2= [ ]
for i in range (0,len(arr)):
    List2 = arr[i-1]
print(List2)

t1 = ( 10,15,20,30)
print(t1)
    # practiceques
    # 
    #  
def factorial():
    n = int(input("Enter the number to find factorial: "))
    fact = 1
    for i in range(1,n+1):
        fact = fact * i
    print(fact)

def is_prime():
    n = int(input("Enter the number to check prime: "))
    if n <= 1:
        print("Not a prime number")
        for i in range(2,n):
            if n % i == 0:
                print("Not a prime number")
    return

def isaleapyear():
        n = int(input("Enter the year to check leap year: "))
        if n % 4 == 0 and n % 100 != 0 or n % 400 == 0:
            print("Leap year")
        else :
            print("Not a leap year")

def lcm(num1,num2):
    if num1 > num2:
        greater = num1
    else:
        greater = num2
        while(True):
                if greater % num1 == 0 and greater % num2 == 0:
                    lcm = greater
                    
                    greater += 1
                    return lcm
                    
def hcf(num1,num2):
    if num1 > num2:
        smaller = num2
    else:
        smaller = num1
        for i in range(1,smaller+1):
            if num1 % i == 0 and num2 % i == 0:
                hcf = i
                return hcf

