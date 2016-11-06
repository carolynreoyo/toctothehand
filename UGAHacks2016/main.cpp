#include "AudPC.h"
#include <iostream>
using namespace std;

int main()
{
    bool *state = new bool;
    *state = false;
    string *message = new string;
    int *commandval = new int;
    do
    {
        do
        {
            receive(state);
        }while(*state == false);

        retrieve(message);
        process(message, commandval);
        execute(commandval);
    }while(*commandval != 1);

    delete state, message,commandval;

    return 0;
}
