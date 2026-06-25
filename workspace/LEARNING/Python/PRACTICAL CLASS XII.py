# 1. Creating a calculator
def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error! Division by zero."
    return x / y

def menu():
    print("Simple Menu Driven Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Exit")

while True:
    menu()
    try:
        choice = int(input("Enter choice (1/2/3/4/5): "))

        if choice == 1:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"Result: {add(num1, num2)}")
        
        elif choice == 2:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"Result: {subtract(num1, num2)}")
        
        elif choice == 3:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"Result: {multiply(num1, num2)}")
        
        elif choice == 4:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"Result: {divide(num1, num2)}")
        
        elif choice == 5:
            print("Exiting the program...")
            break
        
        else:
            print("Invalid input. Please enter a valid option.")

    except ValueError:
        print("Invalid input! Please enter a number.")


# 2. Function to check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# 3. Function to print all prime numbers within a certain range
def prime_numbers_in_range(start, end):
    primes = []
    for num in range(start, end + 1):
        if is_prime(num):
            primes.append(num)
    return primes

# Main program
print("Prime Number Checker")
num = int(input("Enter a number to check if it is prime: "))
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")

# Option to find primes in a range
start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))
primes_in_range = prime_numbers_in_range(start, end)
print(f"Prime numbers between {start} and {end}: {primes_in_range}")



# 4. Calculate the factorial of a number recursively.
def factorial(n):
    
    if n < 0:
        return "Factorial is not defined for negative numbers."
    elif n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)


num = int(input("Enter a non-negative integer: "))
result = factorial(num)
print(f"The factorial of {num} is:",result)



# 5. Function to check if a string is a palindrome
def is_palindrome(s):
    # Remove spaces and convert to lowercase for case-insensitive comparison
    s = s.replace(" ", "").lower()

    # Compare the string with its reverse
    if s == s[::-1]:
        return True
    else:
        return False

# Main code to get user input and check for palindrome

user_input = input("Enter a string to check if it's a palindrome: ")

if is_palindrome(user_input):
        print(user_input," is a palindrome.")
else:
    print(f'"{user_input}" is not a palindrome.')


# 6. Menu driven program for string

def reverse_string(s):
    return s[::-1]

def count_vowels(s):
    return sum(1 for char in s if char.lower() in 'aeiou')

def check_palindrome(s):
    return s == s[::-1]

def convert_to_uppercase(s):
    return s.upper()

def convert_to_lowercase(s):
    return s.lower()

def string_menu():
    while True:
        print("\nString Operations Menu:")
        print("1. Reverse the string")
        print("2. Count vowels in the string")
        print("3. Check if the string is a palindrome")
        print("4. Convert to uppercase")
        print("5. Convert to lowercase")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            s = input("Enter a string: ")
            print("Reversed String:", reverse_string(s))
        elif choice == 2:
            s = input("Enter a string: ")
            print("Vowel count:", count_vowels(s))
        elif choice == 3:
            s = input("Enter a string: ")
            print("Is palindrome?", check_palindrome(s))
        elif choice == 4:
            s = input("Enter a string: ")
            print("Uppercase String:", convert_to_uppercase(s))
        elif choice == 5:
            s = input("Enter a string: ")
            print("Lowercase String:", convert_to_lowercase(s))
        elif choice == 6:
            break
        else:
            print("Invalid choice!")

string_menu()


## 7. Menu driven program for list

def add_item(lst, item):
    lst.append(item)
    return lst

def remove_item(lst, item):
    if item in lst:
        lst.remove(item)
    else:
        print("Item not found.")
    return lst

def find_item(lst, item):
    return item in lst

def sort_list(lst):
    return sorted(lst)

def find_max_min(lst):
    return max(lst), min(lst)

def list_menu():
    lst = []
    while True:
        print("\nList Operations Menu:")
        print("1. Add an item")
        print("2. Remove an item")
        print("3. Find an item")
        print("4. Sort the list")
        print("5. Find max and min values")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            item = input("Enter an item to add: ")
            lst = add_item(lst, item)
            print("Updated List:", lst)
        elif choice == 2:
            item = input("Enter an item to remove: ")
            lst = remove_item(lst, item)
            print("Updated List:", lst)
        elif choice == 3:
            item = input("Enter an item to find: ")
            print(f"Item found: {find_item(lst, item)}")
        elif choice == 4:
            print("Sorted List:", sort_list(lst))
        elif choice == 5:
            if lst:
                max_val, min_val = find_max_min(lst)
                print(f"Max: {max_val}, Min: {min_val}")
            else:
                print("List is empty!")
        elif choice == 6:
            break
        else:
            print("Invalid choice!")

list_menu()

# 8. Menu driven program for dict

def add_key_value(d, key, value):
    d[key] = value
    return d

def remove_key(d, key):
    if key in d:
        del d[key]
    else:
        print("Key not found.")
    return d

def find_value(d, key):
    return d.get(key, "Key not found")

def update_value(d, key, value):
    if key in d:
        d[key] = value
    else:
        print("Key not found.")
    return d

def display_all(d):
    return d

def dictionary_menu():
    d = {}
    while True:
        print("\nDictionary Operations Menu:")
        print("1. Add a key-value pair")
        print("2. Remove a key")
        print("3. Find a value by key")
        print("4. Update a value by key")
        print("5. Display all key-value pairs")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            key = input("Enter key: ")
            value = input("Enter value: ")
            d = add_key_value(d, key, value)
            print("Updated Dictionary:", d)
        elif choice == 2:
            key = input("Enter key to remove: ")
            d = remove_key(d, key)
            print("Updated Dictionary:", d)
        elif choice == 3:
            key = input("Enter key to find: ")
            print(f"Value: {find_value(d, key)}")
        elif choice == 4:
            key = input("Enter key to update: ")
            value = input("Enter new value: ")
            d = update_value(d, key, value)
            print("Updated Dictionary:", d)
        elif choice == 5:
            print("All Key-Value Pairs:", display_all(d))
        elif choice == 6:
            break
        else:
            print("Invalid choice!")

dictionary_menu()


# 9. Menu driven program for tuple

def count_item(tpl, item):
    return tpl.count(item)

def find_index(tpl, item):
    try:
        return tpl.index(item)
    except ValueError:
        return "Item not found"

def concatenate_tuples(tpl1, tpl2):
    return tpl1 + tpl2

def find_max_min(tpl):
    return max(tpl), min(tpl)

def tuple_to_list(tpl):
    return list(tpl)

def tuple_menu():
    tpl = tuple()
    while True:
        print("\nTuple Operations Menu:")
        print("1. Count occurrences of an item")
        print("2. Find index of an item")
        print("3. Concatenate two tuples")
        print("4. Find max and min values")
        print("5. Convert tuple to list")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            item = input("Enter item to count: ")
            print("Count:", count_item(tpl, item))
        elif choice == 2:
            item = input("Enter item to find index: ")
            print("Index:", find_index(tpl, item))
        elif choice == 3:
            tpl2 = tuple(input("Enter second tuple elements separated by space: ").split())
            print("Concatenated Tuple:", concatenate_tuples(tpl, tpl2))
        elif choice == 4:
            if tpl:
                max_val, min_val = find_max_min(tpl)
                print(f"Max: {max_val}, Min: {min_val}")
            else:
                print("Tuple is empty!")
        elif choice == 5:
            print("Tuple as List:", tuple_to_list(tpl))
        elif choice == 6:
            break
        else:
            print("Invalid choice!")

tuple_menu()


## 10. To create a user-defined function that shifts all negative numbers
## to the left and all positive numbers to the right in ascending order

def shift_numbers(nums):
    '''# Separate negative and positive numbers
    negative_nums = [num for num in nums if num < 0]
    positive_nums = [num for num in nums if num >= 0]'''

    # Sort both lists in ascending order
    negative_nums.sort()
    positive_nums.sort()

    # Combine both lists: negative numbers first, followed by positive numbers
    return negative_nums + positive_nums

nums = [3, -1, -4, 2, -3, 5, 0, -2]
print("Original list:", nums)

shifted_list = shift_numbers(nums)
print("Shifted list:", shifted_list)


# 11. python program to count vowels and words in text file 
def count_words_and_vowels(file_obj):
    # Initialize word and vowel count
    word_count = 0
    vowel_count = 0
    vowels = "aeiouAEIOU"
    
    try:
        # Open the file in read mode
        with open("temp.txt", 'r') as file:
            # Read the file content
            text = file.read()
            
            # Count words by splitting the text by whitespace
            words = text.split()
            word_count = len(words)
            print(f"Total number of words: {word_count}")
            
            # Count vowels in the text
            for char in text:
                if char in vowels:
                    vowel_count += 1

        return word_count, vowel_count
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
        return None 

# Test the function
file_obj = open  
    
word_count, vowel_count = count_words_and_vowels(file_path)
    
if word_count is not None and vowel_count is not None:
        
        print(f"Total number of vowels: {vowel_count}")


# 12 STACK QUES OF PUSH POP AND DISPLAY
def creating_userlist():
    ch= "y"
    while ch== "y":
        userlist=[]
        num=int(input("Enter the num you want to enter in the list"))
        userlist.append(num)
        ch="Do you want to enter more Y/N ??"
        if ch in 'nN':
            print("Loop has been terminated")
            break
    print("THE USER DEFINED LIST IS : ",userlist)

creating_userlist()

def push_pop_even(Arr):
    stack=[]
    if Arr==[]:
        print("The list is underflow")
        print("It is empty")
    else:
        for i in Arr:
            if i%2==0:
                stack.append(i)
    print("The new list of even num is : ",stack)
    print("Deleting the topmost num from stack")
    if stack==[]:
        print("stack is underflow , empty list")
    else :
        print(stack.pop())
        print("current list is ",stack)
        
push_pop_even()



# sql ques

import mysql.connector as mc
from tabulate import tabulate;
con=mc.connect(host="localhost" ,
               user="root",
               passwd="duckduckgo",
               database="schlproj")

if con.is_connected():
    print("successful executed, connected with sql")
cur=con.cursor()
query=("create table if not exists Bills( custname varchar(15) not null,\
mno int primary key,\
item_code int,\
qty int ,\
price int,\
Bill int)")

cur.execute(query)
print("table created successfully..")

# To input data into table
def add_data():
    
    try:
        
         print("enter Bill details....")
         custname=(input("enter customer name:-"))
         mno=int(input("enter mobile number:-"))
         icode=input("enter item code:-")
         qty=int(input("enter qty of items:-"))
         price=int(input("enter price of items:-"))
         Bill=qty*price
         q1="insert into Bills values('{}',{},{},{},{},{})".format(custname,mno,icode,qty,price,Bill)
  
         cur.execute(q1)
         con.commit()
         print("record added successfully")
    except:
        print("Something went wrong")

# To display all records
def display_all():
    
    try:
        q2="select * from Bills"
        cur.execute(q2)
        print(tabulate(cur,headers=['CUSTOMERNAME','MOBILE NUMBER','ITEM CODE','QUANTITY','PRICE','BILL'],tablefmt='psql'))
    except:
        print('something went wrong')


# To display data/record of particular customer              
def dispar():   
    try:
        mno=int(input("enter mobile number of the customer whose data is to be displayed.."))
        q3="select * from Bills where mno={}".format(mno)
        cur.execute(q3)
        record=cur.fetchone()
        print("\n\nData of mobile No.:",mno)
        print(record)
        count=cur.rowcount
        print(count)
        if count==-1:
            print("nothing to display")
    except:
            print("something went wrong")

# To delete all records            
def del_all():
    try:
        ch=input("do you want to delete all the records(y/n)")
        if ch.upper()=='Y':
            cur.execute('delete from Bills')
            con.commit()
            print("All record are deleted")
    except:

        print("something went wrong")


# To delete a particular record        
def del_particular():
    try:
        mno=int(input("enter mobile number of the customer whose data is to be deleted"))
        q4='delete from Bills where mno={}'.format(mno)
        cur.execute(q4)
        con.commit()
        count=cur.rowcount
        if count>0:
            print("deletion done")
        else:
            print("mobile number",mno,"not found")
    except:
            print("something went wrong")
            
# To modify a record

def modify():
    try:
        no = int(input("Enter the item code of the record to be modified: "))
        q5 = "SELECT * FROM Bills WHERE icode = {}".format(no)
        
        cur.execute(q5)
        record = cur.fetchone()
        count = cur.rowcount

        if count == -1:
            print(f"Item code {no} does not exist")
        else:
            custname = record[0]
            mno = record[1]
            icode = record[2]
            qty = record[3]
            price = record[4]
            bill = record[5]

            print("Customer name:", record[0])
            print("Mobile Number:", record[1])
            print("Item Code:", record[2])
            print("Quantity:", record[3])
            print("Price:", record[4])
            print("Bill:", record[5])
            print("--------------------")

            # Prompt for modifications
            x = input("Enter customer name (or press Enter for no change): ")
            if len(x) > 0:
                custname = x

            x = input("Enter mobile number (or press Enter for no change): ")
            if len(x) > 0:
                mno = int(x)

            x = input("Enter quantity (or press Enter for no change): ")
            if len(x) > 0:
                qty = int(x)

            x = input("Enter price (or press Enter for no change): ")
            if len(x) > 0:
                price = int(x)

            bill = qty * price
            q6 = "UPDATE Bills SET custname = '{}', mno = {}, qty = {}, price = {}, bill = {} WHERE icode = {}".format(
                custname, mno, icode, qty,price, bill
            )
            cur.execute(q6)
            con.commit()
            print("Record modified successfully")
    except SyntaxError:
        print("Something went wrong. Please debug your code and correct it.")
        print(f"****************** \n ")
        print(SyntaxError)
        

    

while True:
    print('\n\n\n')
    print("*"*100)
    print('\t\t\t\t\t TECHIE STRO')
    print('\t\t\t\t\t MAIN MENU')
    print("*"*100)
    print('\t\t\t\t1. Adding Customers Records')
    print('\t\t\t\t2. Displaying records of all the Customers')
    print('\t\t\t\t3. Displaying records of the particular Customer')
    print('\t\t\t\t4. Deleting records of all the Customers')
    print('\t\t\t\t5. Deleting records of particular Customer')
    print('\t\t\t\t 6. Modification in a records of the Customer')
    print('\t\t\t\t7. Exit')
    print("enter your choice...",end='')
    choice=int(input())
    if choice==1:
        add_data()
        
    elif choice==2:
        display_all()
        
    elif choice==3:
        dispar()
        
    elif choice==4:
        del_all()
        
    elif choice==5:
        del_particular()
        
    elif choice==6:
        modify()
    elif choice==7:
        print("Have a nice day\n Visit us Again")
        break
    else: 
        print("wrong choice")




    
    
        



