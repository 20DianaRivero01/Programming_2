# OPERATORS OF STRUCTURED PROGRAMMING LANGUAGE
**CONTROL STRUCTURES**
___

##### A loop consists of two parts, a body of a loop and a control statement. The control statement is a combination of some conditions that direct the body of the loop to execute until the specified condition becomes false. The purpose of the loop is to repeat the same code a number of times. 
##### The most common Loops are:
* For
* While
* Do-While
##### There are two types of loops:
1. **Entry Controlled Loops
2. Exit Controlled Loops

![LOOPS](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191128194516/Cpp-loops.png)

## [FOR](https://www.geeksforgeeks.org/loops-in-c-and-cpp/)

##### Is an iterative control structure, which allows us to repeatedly execute a block of instructions, knowing previously a start value, a step size and a final value for the cycle.
##### Syntax
```for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}
```
##### Structure:
* **Initialization Expression:** In this expression we have to initialize the loop counter to some value. for example: int i=1;
* **Test Expression:** In this expression we have to test the condition. If the condition evaluates to true then we will execute the body of loop and go to update expression otherwise we will exit from the for loop. For example: i <= 10;
* **Update Expression:** After executing loop body this expression increments/decrements the loop variable by some value. for example: i++;

## [WHILE](https://www.programarya.com/Cursos/C++/Ciclos/Ciclo-while)

##### The while loop evaluates the test expression inside the parenthesis (). If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again. The process goes on until the test expression is evaluated to false. If the test expression is false, the loop terminates (ends).
```initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}
````
###