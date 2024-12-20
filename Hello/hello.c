
#include <stdio.h>
#include <math.h>
// main function - the entry point
// the retrn value of the main is an integer 
main()
{
    // print the message "Hello World!!!" to the console 
    // \n is shortcut for new line 

    printf("\n");
    printf("Hello World!!!\n\n\n");

    // variable of 32 characters
    char name[32];

    // ask for name 
    printf("Enter a name: ");

    // read the input of the user 
    scanf("%s", name);


    printf("\n hello \t %s \n\n\n", name);
    /* return 0: indicated that the program is terminated succesfully
    */
    return 0;
}
