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

     void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

        node * nodeBaru = new node();
        nodeBaru->noMhs = nim;
        