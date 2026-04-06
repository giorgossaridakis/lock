# lock
binary locking library for Linux and BSD systems

lock is self-writing patch library, directly onto the compiled binary

place lock.h in /usr/include

pace liblock.a in /usr/lib 

liblock.a is currently archived for Debian Linux in this repository

link with -llock
example:

cc -otestlock testlock.c -llock
