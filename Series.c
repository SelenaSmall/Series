#include <stdio.h>

/* Print the first 20 terms of 3 different Series */

void fib(int n);
void bin(int n);
void cube(int n);

int main()
{
    /* Reserve A Buffer of 1024 characters*/
    char c;
    char buffer[1024];

    /* Menu*/
    printf("Print the first 20 terms of 3 different Series \r\n");
    printf("Type 1 to print Fibonacci, \r\n");
    printf("Type 2 to print Binomial, \r\n");
    printf("Type 3 to print Cube \r\n");
    printf("Type 0 to EXIT: \r\n");
    
    do {
        /* Prompt*/
        printf(">");
    
        /* fgets = file get string*/
        /* The file is stdin (research stdin/stdout/stderr)*/
        /* fgets is used because it allows us to limit the input (1024 max chars)*/
        /* Notice the cast from the address of buffer (&buffer, which is a char[1024]*)*/
        /* - to a char**/
        fgets((char*)&buffer,1024,stdin);
    
        /* Switch on the first character in the buffer (index 0)*/
        switch (buffer[0]) {
            case '0':
                printf("Exit.\r\n");
                break;
            case '1':
                fib(20);
                break;
            case '2':
                bin(20);
                break;
            case '3':
                cube(20);
                break;
            default:
                printf("Unrecognized, Try again:\r\n");                
                break;
        } 
    } while (buffer[0]!='0'); 
    return 0;
}

void fib(int n)
{
    printf("Fibonacci Series %d\r\n", n);
    
    int a=0, b=1; /* declare a and b, both integers */
    
    for (int i=0; i<n; i++) {
        printf( "%d", a+b);
        if (i<n-1) printf(",");
        a=b;
        b=a+b;
    }
    printf("\r\n"); 
}

void bin(int n)
{
    printf("Binomial Series %d\r\n", n);
    
    int a=0, b=1;

    for (int i=0; i<n; i++) {
        printf( "%d", a+a);
        if (i<n-1) printf(",");
        a=b;
        b=b+b;
    }
    printf("\r\n"); 
}

void cube(int n)
{    
    printf("Cube Series %d\r\n", n);

    int a=0, b=1, c=1;

    for (int i=0; i<n; i++) {
        printf( "%d", a*a*a);
        if (i<n-1) printf(",");
        a=b;
        b=b+c;
    }
    printf("\r\n"); 
}


    
	