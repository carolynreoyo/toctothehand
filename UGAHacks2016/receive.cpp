#include <iostream>
using namespace std;

int receive(bool *state)
{
    bool *check = new bool;
    *check = false;
    network_check(check);
    if(*check == true)
    {
        *state = true;
    }
    delete check;
    return *state;
}
