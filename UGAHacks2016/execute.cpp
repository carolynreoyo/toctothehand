#include <stdio.h>
#include <stdlib.h>

void execute (int *commandval)
{
    switch (*commandval)
    {
        case 1:
            break;
        case 2:
            system("c:\\users\\kevin\\documents\\c++_codes\\UGAHacks2016\\bat_files\\lockscreen");
            break;
        case 3:
            system("c:\\users\\kevin\\documents\\c++_codes\\UGAHacks2016\\bat_files\\netflix");
            break;
        case 4:
            system("c:\\users\\kevin\\documents\\c++_codes\\UGAHacks2016\\bat_files\\exec3");
            break;

        default:
            printf("error");
    }
}
