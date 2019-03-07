Windows DL Practice
On some windows cmd with gcc installed

Librarie File:
libbasic.so
Implement from lib:
demo.o

Steps to get Libraries:

gcc -fPIC A00817658_P8.c
gcc -shared -o libbasic.so A00817658_P8.c
gcc -c demo.c

This will generate demo.o and next type:
gcc -o demo demo.o libbasic.so

And just include the lib on c program to use myFunction and myFunction2 executing with:
demo
