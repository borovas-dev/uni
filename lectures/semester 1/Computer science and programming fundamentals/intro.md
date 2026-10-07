# Introduction to the subject - lecture 1

**We're using two languages, python and c++. We'll most probably use these 2 languages to describe and execute the same arguments.**

## 1. Subject

We'll get an engineering problem and proper input data, and then, based on them, we'll use the appropriate language and write the code.

For sure, each task will possess a requirement. 

## 2. Example

We might have a constant program to use to convert values (eg. meters to feet, which is done by multiplying/dividing)

The implementation will differ between languages, which is obvious.

*In C++, double is used for multiplication in code*

## 3. Compiler

Compilers are checking whether the expression written in code is correct and the program can run without any issues.

## 4. Algorithm vs. program

An algorithm is a method for solving a problem.

A program implements the algorithm for a specific, selected language. 

Program = data + instructions + state

## 5. Input and output

Input data can vary between programs - it can be temperature, input from the keyboard, a file, network, a database, sensors, measuring devices.

Output might be provided in numbers, text, files, charts, warning messages, commands for another devices/programs and data sent over a network. 

## 6. Program flow

**Diagram**

Input data -> program -> calculations/decisions -> state change -> output data

## 7. Example of a calculation

A computer program is a part of the engineering model

q = 0.5pV^2

q = dynamic pressure [Pa]
p = air density [kg/m^3]
V = velocity [m/s]

**q = 0.5 x density x velocity^2**

*The correctness depends on the correctness of the physical model, data and the implementation of the formula. Units must be consistent, data type must be appropriate and numerical accuracy must be maintained.*

**Diagram**

real physical model -> physical object -> mathematical model -> algorithm -> program -> numerical result

*Omitting any step is the wrong approach and it's impossible to go from the real object to program immediately.*

## 8. DIsclaimer about properly running programs

A correctly running program doesn't guarantee a proper result! An engineer must maintain control over model, data, algorithm and implementation simultaneously.

## 9. Layers

USER PROGRAM (python/c++) -> libraries and runtime -> OS -> drivers -> processor architecture -> microarchitecture -> digital circuits -> trasistors

*Even a small failure of any of the layers can cause problems. Even a software failure of the driver can cause the stack to stop working.*

## 10. CPU - the processor

It executes the progras written and does the calculations, comparing and performing mathematical operations on low level. 

Registers - storage components, temporary memory of the CPU

Control unit - coordinates instruction execution, allocates operations to CPU threads.

Processor has cores; each core is capable of calculation and operation. 

## 11. Machine code vs. readable code

A human readable code like python, let's say:

**c = a+b**

Might be different for the CPU:

**load a**
**load b**
**add**
**store result**

## 12. Instruction cycle

### Fetch the instruction

Processor fetches instructin from memory. Address of the instruction is associated with a register.

### Decode

The processor determines:

> what kind of instruction it must execute
> what data is required
> which execution units will be used

### Execute

**ADD**

causes an addition

**LOAD**

loads data

**STORE**

stores data

**JUMP**

jumps between registers

### Update the state

Values might change. Then, the operation can be performed again (fetch)

## 13. Speed of storages

*In general, the closer to the processor, the faster (left to right). The fastest units are the smallest, too.*

registers -> L1 cache -> L2 cache -> L3 cache -> RAM -> SSD -> HDD / network

Cache is faster than RAM in general, and it belongs to the processor. 

