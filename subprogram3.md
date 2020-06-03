# UNIT 3:"SUBPROGRAMS AND RECURSION"

A [Subprogram](https://www.geeksforgeeks.org/subprogram-and-its-characteristics/ ) is a program inside any larger program that can be reused any number of times.
**Subprograms** are small programs that are written within a larger, main program. The purpose of a subprogram is to perform a specific task. This task may need to be done more than once at various points in the main program.

### There are two types of subprograms
* **procedures:** Performs a specific task. When the task is complete, the subprogram ends and the main program continues from where it left off.
* **function:**  Works in the same way as a procedure, except that it manipulates data and returns a result back to the main program.

## Characteristics of a Subprograms
* Each subprogram has a single entry point.
* There is only one subprogram execution at any given time.
* Control always returns to the caller when the subprogram execution terminates.
* A Subprogram is implemented using the **Call & Return** instructions in Assembly Language.
* The **Call Instruction** is present in the Main Program and the Return(Ret) Instruction is present in the subprogram itself.
* It is important to note that the Main Program is suspended during the execution of any subprogram. Moreover, after the completion of the subprogram the main program executes from the next sequential address present in the Program Counter .
* For the implementation of any subprogram, a “Stack” is used to store the “Return Address” to the Main Program . Here, Return Address means the immediately next instruction address after the Call Instruction in the Main program. This Return Address is present inside the Program Counter.
* The Main advantage of Subprogram is that it avoids repetition of Code and allows us to reuse the same code again and again.

## Parameters in Subprograms
* **By value:** 
* **By reference:** 



