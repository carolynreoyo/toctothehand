#ifndef AUDPC_H_INCLUDED
#define AUDPC_H_INCLUDED

#include <iostream>
using namespace std;

int receive(bool *state);
int retrieve(string *message);
int process(string *message, int *commandval);
void execute (int *commandval);
int network_check(bool *check);
int network_check(string *message);


#endif // AUDPC_H_INCLUDED
