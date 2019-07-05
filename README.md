# memfull
small c++ utility program to fill up your memory.

## Compile:
`
g++ -Wall memory_test.cpp -o memory_test
`

## Run:

`./memory_test`

## Example run using 250MB block:
```
~/Documents/k2_informatics/memfull $ ./memory_test 
Please enter the block size (in MB): 250
Enter '+' to allocate and '-' to release a block of memory
++++
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
++
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
Reserving a block of memory
Memory allocated, filling with random characters
Enter '+' to allocate and '-' to release a block of memory
----
released a block of memory
Enter '+' to allocate and '-' to release a block of memory
released a block of memory
Enter '+' to allocate and '-' to release a block of memory
released a block of memory
Enter '+' to allocate and '-' to release a block of memory
released a block of memory
Enter '+' to allocate and '-' to release a block of memory
```

After running the above operations the memory used by the program is 500MB
```
 memory_test	500.4 MB	1	10	21927	agustin	0.0	8.59
```
