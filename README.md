# lock
binary locking library for Linux and BSD 

lock is self-writing patch library, directly onto the compiled binary

place lock.h in /usr/include
pace liblock.a in /usr/lib

link with -llock
example:

cc -otestlock testlock.c -llock
