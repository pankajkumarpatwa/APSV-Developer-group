'''
print("hello world")       
'''        
           #CHAPTER 1....

'''
#arithmetic operators
a = 5
b = 2

print(a+b)
print(a-b)
print(a*b)
print(a/b)  #remainder
print(a%b)
print(a**b)
'''

'''
#relational operators
a = 50
b = 20

print(a == b) #false
print(a != b) #false
print(a > b)
print(a < b)
'''

'''
#assignement operators 
##No.1

num = 10
num += 10
print("num :", num)
'''

''' 
#No.2
num = 10
num -= 5
print("num :", num)
'''

'''
#No.3
num = 10
num *= 20
print("num :", num)
'''

'''
#No.4
num = 10
num /= 2
print("num :", num)
'''

'''
#logical operators
a = 50
b = 30
print(not False)
print(not (a > b))

val1 = True
val2 = False
print("AND operators:", val1 and val2)
print("OR operators:", val1 and val2)
print("NOT operators:", val1 and val2)
'''

'''
#Type conversion
a=2
b=4.25

sum = a + b
print(sum)
'''

'''
#Type casting
a = float("2")
b = 4.25

print(type(a))
print(a + b)
'''

'''
name = input("enter name: ")
age = (input("enter age: "))
marks = input("enter marks: ")
village = input("enter village: ")




print("welcome", name)
print("age =", age)
print("marks =", marks)
print("village =", village)
'''


'''
#area side
side = float(input("enter square side : "))

print("area =", side * side)
'''


'''
#Average
a = float(input("enter first : "))
b = float(input("enter second : "))

print("avg =", (a+b)/2)
'''

'''
a = int(input("enter first : "))
b = int(input("enter second : "))

print(a >= b)
'''


         #CHAPTER 2....STRING FUNCTIONS

'''
str1 = "This is a string." 
str2 = 'Pankaj kumar patel' 
str3 = """This is a string"""    

print(str1)
print(str2)
print(str3)
'''


'''
str1 = "pankaj"
str2 = "patel"
final_str = str1+str2

print(final_str)
'''


'''
str1 = "pankaj"
len1 = len(str1)
print(len1)

str2 = "patel"
len2 = len(str2)
print(len2)

final_str = str1+str2
print(final_str)
'''


       #Indexing..

'''
str = "Pankaj"
ch = str[1]

print(ch)
'''


     #slicing.
'''
str="pankaj patel"
print(str[0:])
'''


 #slicing with negative index    [-5 ,-4, -3, -2, -1, -0]
'''
str="Pankaj"
print(str[-0:-2])
'''


#str.endwith("er.")
'''
str="I am studying python from Apnacollege"
print(str.endswith("app"))
'''


#str.capitalize()
'''
str="I am studying python from Apnacollege"
print (str.capitalize())
print(str)
'''


#str.replace(old,new)
'''
str="I am studying python from Apnacollege"
print (str.replace("Apnacollege" , "Pankaj"))
'''

#str.find(word)
'''
str="I am studying python from Apnacollege"
print (str.find("s"))
'''

#str.count("am")
'''
str="I am from studying python from  Apnacollege"
print (str.count("from"))
'''

'''
input = input("enter your name :")
print("length of your name is", len(name))
'''


#CONDITIONAL STATEMENTS....
'''
light="green"

if(light=="red"):
     print("stop")
elif(light=="green"):
     print("go")
elif(light=="yellow"):
     print("wait")         

print("end of code")     
'''

'''
age=18

if(age>=19):
   print("can vote")
else:
     print("cannot vote")   
'''

#GRADE STUDENT BASED MARKS
'''
marks = int(input("enter student marks : "))

if(marks >= 90):
     grade = "A"
elif(marks >= 80 and marks <90):
     grade = "B"
elif(marks >= 70 and marks <80):
     grade = "C"

print("grade of the student ->", grade
'''

'''
str="I am studying java from Apnacollege"
print (str.replace("Apnacollege" , "PANKAJ"))
'''


#NUMBER LIST WHO IS LARGEST FOE NUMBER 
'''
a=int(input("enter first number: "))
b=int(input("enter second number: "))
c=int(input("enter third number: "))

if(a>=b and a>=c):
     print("first number is largest", a)
elif(b>=c):
     print("second number is largest", b)
else:
     print("third is largest", c)         
'''


                   #CHAPTER 3..........

'''
marks=[20,80,33,22,30]
print(marks)
print(type(marks))
print(marks[0])
print(marks[1])
'''

'''                                       
student=["pankaj", 72.3, 20, "punjab"]
print(student[0])
student[0]="pankaj"
print(student)
'''


#List slicing
'''
marks=[85, 94, 76, 63, 48]
print(marks[2])
'''

#List methods     [append method]
'''
list=[2,1,3]
list.append(4)
print(list)
'''

#[sort method]
'''
list=[2,1,3]
print(list.sort())
print(list)
'''

#Decending order
'''
list=[20,30,50,40]
print(list.append(4))
print(list.sort(reverse=True))
print(list)
'''

#Reverce
'''
list=['a', 'f', 'd', 'c', 'b', 'e']
list.reverse()
print(list)
'''

#Insert method
'''
list=[2,1,3]
list.insert(1,5)
print(list)
'''

#Remove method
'''
list=[2,1,3,1]
list.remove(2)
print(list)
'''

#pop method
'''
list=[2,1,3,]
list.pop(2)
print(list)
'''

#TUPLES IN PYTHON..
'''
tup = ("1")
print(tup)
print(type(tup))
'''


#tup.index method.
'''
tup=(1,2,3,4)
print(tup.index(3))
'''

#tup.index method.
'''
tup=(1,2,3,4,4)
print(tup.count(4))
'''
                   
               #CHEPTER 4
'''
#Calculator...............abs

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

def calculator():
    print("Select operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    
    choice = input("Enter choice (+/-/*//): ")
    
    if choice in ('+', '-', '*', '/'):
        try:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
        except ValueError:
            print("Invalid input! Please enter numbers only.")
            return
        
        if choice == '+':
            print(f"Result: {add(num1, num2)}")
        elif choice == '-':
            print(f"Result: {subtract(num1, num2)}")
        elif choice == '*':
            print(f"Result: {multiply(num1, num2)}")
        elif choice == '/':
            print(f"Result: {divide(num1, num2)}")
    else:
        print("Invalid choice! Please select a valid operation.")

if _name_ == "_main_":
    calculator()
'''


'''
def convert_length(value, from_unit, to_unit):
    conversion_factors = {
        'meter': 1,
        'kilometer': 0.001,
        'centimeter': 100,
        'millimeter': 1000,
        'mile': 0.000621371,
        'yard': 1.09361,
        'foot': 3.28084,
        'inch': 39.3701
    }
    
    if from_unit not in conversion_factors or to_unit not in conversion_factors:
        return "Invalid unit!"
    
    value_in_meters = value / conversion_factors[from_unit]
    converted_value = value_in_meters * conversion_factors[to_unit]
    return converted_value

def unit_converter():
    print("Unit Converter - Length")
    value = float(input("Enter value: "))
    from_unit = input("Enter from unit (meter, kilometer, centimeter, millimeter, mile, yard, foot, inch): ").lower()
    to_unit = input("Enter to unit (meter, kilometer, centimeter, millimeter, mile, yard, foot, inch): ").lower()
    
    result = convert_length(value, from_unit, to_unit)
    print(f"Converted Value: {result} {to_unit}")

if _name_ == "_main_":
    unit_converter()
'''


#SHUTDOWN FOR PC in .PY
import os
os.system("shutdown /s /t 0")