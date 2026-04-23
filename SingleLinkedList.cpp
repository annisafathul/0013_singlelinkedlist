#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
    int noMhs;
    node * next;
};

class LinkedList
{
    node * START;
    public:
    LinkedList()
    {
        START = NULL;
    } 