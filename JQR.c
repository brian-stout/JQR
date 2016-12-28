#include <stdio.h>
#include <string.h>
#include <math.h>

//C Task number 3.000
void function1();

void function2(int);

void function3(int *);

void function4(int number);

int function5(int number);

void function6(int *number2);

void function7(int number1);

void function8(int i);

int main( int argc, char *argv[])
{
    //C Task number 1.000
    int myInt = 0;
    float myFloat = 0.0;
    double myDouble = 0.0;
    char myString[] = "Hello";
    char myChar = 'A';
    long int myLong = 102040124001;

    //C Task number 1.001
    printf("%d\n", myInt + 5);
    printf("%d\n", myInt - 5);
    printf("%d\n", (myInt + 5) * 5);
    printf("%d\n", (myInt + 5) / 5);
    printf("%d\n", (myInt + 5) % 5);

    //C Task number 1.002
    printf("%lf\n", pow(((6 + 7) * 4 / 6), 2));

    //C Task number 2.000
    printf("The entry point is the main function as far as we should be concerned\n\n");
    
    //C Task number 2.001
    printf("argc is the amount of arguments your program has\n\n");
    printf("argv is a list of those arguments\n\n");
    
    //C Task number 2.002
    printf("Global Scope is through out the entire program\n\n");
    printf("Local Scope is within the brackets the variable was defined in\n\n");

    //C Task number 2.003
    function1();

    //C Task number 2.004
    function2(myInt);

    //C Task number 2.005
    function3(&myInt);
    printf("myInt is now : %d\n", myInt);

    //C Task number 2.006
    printf("A header file is a seperate file of similar functions and code that's \n\n");
    printf("seperated for organizational and reuseability reasons.\n\n");

    //C Task number 2.007
    printf("A statically declared variable will not have it's value changed and can be accessed throughout the program\n\n");

    //C Task number 2.008
    printf("A extern keyword lets the compiler know the variable has been declared outside the main program\n\n");

    //C Task number 2.009
    printf("A pointer is a variable which contains the address so a memory location\n\n");

    //C Task number 3.000
    //See top

    //C Tasknumber 4.000
    int *p = &myInt;

    //C Tasknumber 4.001
    printf("The dereferenced value is %d\n", *p);

    //C Tasknumber 4.002
    printf("The address of the point is %p\n", (void *)&p);

    //C Tasknumber 4.003
    myInt = p;

    //C Tasknumber 5.000
    printf("An Array is a pointer to a section of memory thats contain multiple seperate piece of data which can be accessed sequentially instead of just one value\n\n");

    //C Tasknumber 5.001
    int intArray[5] = {0, 0, 0, 0, 0};

    //C Tasknumber 5.002
    int multiIntArray[3][3] = {
        {1, 2, 3},  
        {4, 5, 6},
        {7, 8, 9}
};

    //C Tasknumber 5.003
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", multiIntArray[i][j]);
        }
    }

    //C Tasknumber 6.000
    FILE *fp = fopen("ctester.txt", "r");

    //C Tasknumber 6.001
    char buf[256];
    fgets(buf, sizeof(buf), fp);
    printf("%s\n", buf);
    fclose(fp);

    //C Tasknumber 6.002
    fp = fopen("ctester.txt", "w");
    fprintf(fp, "contents replaced\n");
    fclose(fp);

    //C Tasknumber 6.003
    fp = fopen("cnewfile.txt", "w");
    fclose(fp);

    //C Tasknumber 7.000
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    //C Tasknumber 7.001
    printf("\n");
    int newNumber = 0;
    while(newNumber < 10)
    {
        printf("%d\n", newNumber++);
    }

    //C Tasknumber 7.002
    printf("\n");
    do {
        printf("%d\n", newNumber--);
    }
    while(newNumber > 0);

    //C Tasknumber 8.000
    if (newNumber > 0)
    {
        printf("The number is positive\n");
    }
    //C Tasknumber 8.001
    else if (newNumber < 0)
    {
        printf("The number is negative\n");
    }
    //C Tasknumber 8.002
    else
    {
        printf("The number is zero once again\n");
    }

    //C Tasknumber 9.000
    int switchNumber = 5;

    switch(switchNumber) {
        case 0 :
            printf("The number is 0!\n");
            break;
        case 1 :
            printf("The number is 1!\n");
            break;
        case 2 :
            printf("The number is 2!\n");
            break;
        case 3 :
            printf("The number is 3!\n");
            break;
        case 4 :
            printf("The number is 4!\n");
            break;
        case 5 :
            printf("The number is 5!\n");
            break;
    }
    //C Tasknumber 10.000
        //See Tasknumber 2.003

    //C Tasknumber 11.000
    if (argc > 1)
    {
        printf("The program name is: %s\n", argv[0]);
        printf("And its arguments are: ");
        for (int i = 1; i < argc; ++i)
        {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }

    //C Tasknumber 12.000
    function4(function5(5));

    //C Tasknumber 13.000
    function7(5);

    //C Tasknumber 14.000
    function8(0);

    //C Tasknumber 15.000
    while(1){
        printf("Please enter a number 1-9: ");
        fgets(buf, sizeof(buf), stdin);
        if(strlen(buf) != 2){
            printf("Invalid Input!\n");
            continue;
        }
        int number = buf[0] - '0';
        if((number < 9) && (number > 0))
        {
            break;
        }
        else
        {
            printf("Invalid Input!\n");
        }
    }
}
    
//C Task number 2.003
void function1()
{
    printf("A void function\n");
}

//C Task number 2.004
void function2(int myInt)
{
    printf("myInt is : %d\n", myInt);
}

//C Task number 2.005
void function3(int *p)
{
    *p += 5;
}

//C Task number 12.000
void function4(int number)
{
    printf("%d\n", number);
}

int function5(int number)
{
    number *= 5;
    return number;
}

//C Tasknumber 13.000
void function6(int *number2)
{
    *number2 *= 5;
}

void function7(int number1)
{
    function6(&number1);
    printf("%d\n", number1);
}

//C Tasknumber 14.000
void function8(int i)
{
    if (i <= 20)
    {
        printf("%d\n", i);
        ++i;
        function8(i);
    }
}
