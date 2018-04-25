C programming
---

- How to declare, define, reference a variable / function
- How to compile & execute the program.

Gcc
---

- compiler: assembly 
    - `-c`
- linker: linking multiple object files
- header flag
    - `-I`
- library flag
    - `-Lxxx -lyyy`

Makefile
---

- dependency rule
    - target, object, command
- `make target`
- compact Makefile: default target 
- variables: CFLAGS, SRC, OBJS

GDB
---

- control commands
    - set/delete breakpoints
    - stepping
    - run & continue. 
- read runtime value 
- list source code

C pointer & types
---

- pointer operations
    - define (assign) 
    - dereference 
    - get reference of
- data types 
    - unsigned vs signed 
    - size of
    - intepretate value & arithmetic operator
    - pointer type & primitive
    - pointer add

File IO
---

- `open`, `read`, `write`, `lseek`, `close`
- file descriptor
- open file, mode
- creat file: write-only 
- lseek file: base of offset add 
- read/write file: from file to buffer
- append a file
- seekable file
- print flag of an open file: fcntl
- file types: regular, directory, char/block special file
