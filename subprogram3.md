# UNIT 3:"SUBPROGRAMS AND RECURSION"

## SUBPROGRAMS
___

A [Subprogram](https://www.geeksforgeeks.org/subprogram-and-its-characteristics/ ) is a program inside any larger program that can be reused any number of times.
**Subprograms** are small programs that are written within a larger, main program. The purpose of a subprogram is to perform a specific task. This task may need to be done more than once at various points in the main program.

### There are two types of subprograms
* **procedures:** Performs a specific task. When the task is complete, the subprogram ends and the main program continues from where it left off.
* **function:**  Works in the same way as a procedure, except that it manipulates data and returns a result back to the main program.

### Characteristics of a Subprograms
* Each subprogram has a single entry point.
* There is only one subprogram execution at any given time.
* Control always returns to the caller when the subprogram execution terminates.
* A Subprogram is implemented using the **Call & Return** instructions in Assembly Language.
* The **Call Instruction** is present in the Main Program and the Return(Ret) Instruction is present in the subprogram itself.
* It is important to note that the Main Program is suspended during the execution of any subprogram. Moreover, after the completion of the subprogram the main program executes from the next sequential address present in the Program Counter .
* For the implementation of any subprogram, a “Stack” is used to store the “Return Address” to the Main Program . Here, Return Address means the immediately next instruction address after the Call Instruction in the Main program. This Return Address is present inside the Program Counter.
* The Main advantage of Subprogram is that it avoids repetition of Code and allows us to reuse the same code again and again.

## **[Parameters in Subprograms]( https://www.geeksforgeeks.org/difference-between-call-by-value-and-call-by-reference/)**
* **Call by value:**  In this parameter passing method, values of actual parameters are copied to function’s formal parameters and the two types of parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of caller.

```
#include <stdio.h> 
  
// Function Prototype 
void swapx(int x, int y); 
  
// Main function 
int main() 
{ 
    int a = 10, b = 20; 
  
    // Pass by Values 
    swapx(a, b); 
  
    printf("a=%d b=%d\n", a, b); 
  
    return 0; 
} 
  
// Swap functions that swaps 
// two values 
void swapx(int x, int y) 
{ 
    int t; 
  
    t = x; 
    x = y; 
    y = t; 
  
    printf("x=%d y=%d\n", x, y); 
} 
```

* **By reference:** Both the actual and formal parameters refer to same locations, so any changes made inside the function are actually reflected in actual parameters of caller.

```
#include <stdio.h> 
  
// Function Prototype 
void swapx(int*, int*); 
  
// Main function 
int main() 
{ 
    int a = 10, b = 20; 
  
    // Pass reference 
    swapx(&a, &b); 
  
    printf("a=%d b=%d\n", a, b); 
  
    return 0; 
} 
  
// Function to swap two variables 
// by references 
void swapx(int* x, int* y) 
{ 
    int t; 
  
    t = *x; 
    *x = *y; 
    *y = t; 
  
    printf("x=%d y=%d\n", *x, *y); 
} 
```
## RECURSION 
___

[Recursion](https://www.geeksforgeeks.org/recursion/) is the process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.
In the recursive program, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems.
``` 
int fact(int n)
{
    if (n < = 1) // base case
        return 1;
    else    
        return n*fact(n-1);    
}


```
###  There are types of recursive processes
* **Direct recursive:** If it calls the same function fun. 
* **Indirect recursive:** If it calls another function say fun_new and fun_new calls fun directly or indirectly.
The difference between direct and indirect:
```
// An example of direct recursion
void directRecFun()
{
    // Some code....

    directRecFun();

    // Some code...
}

// An example of indirect recursion
void indirectRecFun1()
{
    // Some code...

    indirectRecFun2();

    // Some code...
}
void indirectRecFun2()
{
    // Some code...

    indirectRecFun1();

    // Some code...
}
```
 
STUDENTS: [DIANA RIVERO]( https://github.com/20DianaRivero01/Programming_2) Y [DAVID ROMERO](https://github.com/David2903/programming2)
