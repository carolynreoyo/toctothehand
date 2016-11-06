#include <iostream>
using namespace std;

int process(string *message, int *commandval)
{
    if (*message == "end" || "End")
    {
        *commandval = 1;
    }
    if (*message == "shutdown" || "shut down" || "Shutdown" || "Shut down")
    {
        *commandval = 2;
    }
    else if(*message == "open netflix" || "open Netflix" || "Open Netflix" || "Open netflix")
    {
        *commandval = 3;
    }
    else if(*message == "")
    {
        *commandval = 4;
    }
    else
    {
        *commandval = 0;
    }
    return *commandval;
}
