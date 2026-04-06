// test lock
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <pwd.h>
#include <signal.h>
#include <sys/time.h>
#include <lock.h>

#define VERSION 0.6

int locker;

int main(int argc, char *argv[])
{

    while ( 1 ) {
     license( stdout ); // can be stderr or any C file stream
     sleep( 1 );
    }


 return EXIT_SUCCESS;
}
