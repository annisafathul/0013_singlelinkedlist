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

          if (START == NULL || START->noMhs >= nodeBaru->noMhs)
        {
            if (START != NULL && START->noMhs == nodeBaru->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
        
            nodeBaru->next = START;
            START = nodeBaru;   
            return;
        }

        node * previous = START;
        node * current = START; 

        

         if (START == NULL || START->noMhs >= nodeBaru->noMhs)
        {
            if (START != NULL && START->noMhs == nodeBaru->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
        
            nodeBaru->next = START;
            START = nodeBaru;   
            return;
        }

        node *previous = START;
        node *current = START;

        while (current != NULL && nim > current->noMhs)
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            nodeBaru->next = current;
            previous->next = nodeBaru;
          
        }

        

        bool listEmpty()
        {
            return (START == NULL);
        }
    }
}
