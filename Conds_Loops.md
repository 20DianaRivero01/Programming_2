# OPERATORS OF STRUCTURED PROGRAMMING LANGUAGE
___

**-CONTROL STRUCTURES-**

## [WHAT IS A LOOP?](https://www.guru99.com/c-loop-statement.html)

A loop consists of two parts, a body of a loop and a control statement. The control statement is a combination of some conditions that direct the body of the loop to execute until the specified condition becomes false. The purpose of the loop is to repeat the same code a number of times. 
#### The most common Loops are:
* For
* While
* Do-While
#### There are two types of loops:
1. Entry Controlled 
2. Exit Controlled 

![LOOPS](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191128194516/Cpp-loops.png)

#### Structure:
* **Initialization Expression:** In this expression we have to initialize the loop counter to some value. for example: int i=1;
* **Test Expression:** In this expression we have to test the condition. If the condition evaluates to true then we will execute the body of loop and go to update expression otherwise we will exit from the for loop. For example: i <= 10;
* **Update Expression:** After executing loop body this expression increments/decrements the loop variable by some value. for example: i++;


## [FOR](https://www.geeksforgeeks.org/loops-in-c-and-cpp/)

Is an iterative control structure, which allows us to repeatedly execute a block of instructions, knowing previously a start value, a step size and a final value for the cycle.

#### Syntax
```
for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}
```
## [WHILE](https://www.programarya.com/Cursos/C++/Ciclos/Ciclo-while)

The while loop evaluates the test expression inside the parenthesis (). If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again. The process goes on until the test expression is evaluated to false. If the test expression is false, the loop terminates (ends).
#### Syntax
```
initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}
````
## [DO-WHILE](https://www.geeksforgeeks.org/loops-in-c-and-cpp/)

The loop execution is terminated on the basis of test condition. The main difference between do while loop and while loop is in do while loop the condition is tested at the end of loop body, i.e do while loop is exit controlled whereas the other two loops are entry controlled loops.
In do while loop the loop body will execute at least once irrespective of test condition.
*In do while loop the loop body will execute at least once irrespective of test condition.*

#### Syntax
```
initialization expression;
do
{
   // statements

   update_expression;
} while (test_expression);
```
## [CONDITIONALS](https://thestempedia.com/tutorials/conditional-programming/)
The conditionals allows us to establish a series of conditions within our program, which help us determine what actions to take under certain circumstances

### IF
If statement is responsible for modifying the flow of execution of a program. Is always used with a condition. The condition is evaluated first before executing any statement inside the body of If.

![IF](https://upload.wikimedia.org/wikipedia/commons/c/c5/If-Then-Else-diagram.svg)

### IF-ELSE
With this statement the programmer could establish other action if the condition does not meet. Else means that if the condition does not meet, the program will do the other action that is established by the programmer.

![IF-ELSE](https://camo.githubusercontent.com/63bb0d95f9a21f2240bf43b1c7fc4e4945c47ae8/68747470733a2f2f7777772e6775727539392e636f6d2f696d616765732f312f3032303831395f303433365f43436f6e646974696f6e61332e706e67)

### Nested Else-if statements 
Nested else-if is used when multipath decisions are required. 

#### Syntax
```
if (test - expression 1) {
    statement1;
} else if (test - expression 2) {
    Statement2;
} else if (test - expression 3) {
    Statement3;
} else if (test - expression n) {
    Statement n;
} else {
    default;
}
Statement x;
```
### Nested If-else Statements 
When a series of decision is required, nested if-else is used. Nesting means using one if-else construct within another one. 
For example
```
#include<stdio.h>
int main()
{
	int num=1; //1
	if(num<10) //2
	{
		if(num==1) //3
		{
			printf("The value is:%d\n",num);
		}
		else
		{
			printf("The value is greater than 1");
		}
	}
	else
	{
		printf("The value is greater than 10");
	}
	return 0; //4
}
```
## [JUMP STATEMENTS](https://www.geeksforgeeks.org/c-sharp-jump-statements-break-continue-goto-return-and-throw/)
Jump statements are used to transfer control from one point to another point in the program due to some specified code while executing the program. There are five keywords in the Jump Statements:
* break
* continue
* goto
* return
* throw

### BREAK 

The break statement is used to terminate the loop or statement in which it present. After that, the control will pass to the statements that present after the break statement, if available. If the break statement present in the nested loop, then it terminates only those loops which contains break statement. 
![BREAK](https://media.geeksforgeeks.org/wp-content/uploads/break-2.jpg)

#### Syntax
```
// use of break statement 
using System; 
  
class Geeks { 
  
    // Main Method 
    static public void Main() 
    { 
  
        // GeeksforGeeks is printed only 2 times 
        // because of break statement 
        for (int i = 1; i < 4; i++)  
        { 
            if (i == 3) 
                break; 
  
            Console.WriteLine("GeeksforGeeks"); 
        } 
    } 
} 
```
### CONTINUE
This statement is used to skip over the execution part of the loop on a certain condition. After that, it transfers the control to the beginning of the loop. Basically, it skips its following statements and continues with the next iteration of the loop.
And it may looks like
#### Syntaxis
```
// use of continue statement 
using System; 
  
class Geeks { 
  
    // Main Method 
    public static void Main() 
    { 
          
        // This will skip 4 to print 
        for (int i = 1; i <= 10; i++) { 
  
            // if the value of i becomes 4 then  
            // it will skip 4 and send the  
            // transfer to the for loop and  
            // continue with 5  
            if (i == 4) 
                continue; 
  
            Console.WriteLine(i); 
        } 
    } 
} 

```
___

TEAM: [DIANA RIVERO](https://github.com/20DianaRivero01/Programming_2) Y [DAVID ROMERO](https://github.com/David2903/programming2)
