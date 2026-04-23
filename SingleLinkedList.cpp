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

         bool search(int nim, Node *&previous, Node *&current)
        {
            previous = START;
            current = START;

            while (current != NULL && current->noMhs != nim)
            {
                previous = current;
                current = current->next;
            }
            return current != NULL;
        }

        booldelNode(int nim)
        {
            Node *current, *previous;
            if (!search(nim, previous, current))
                return false;

                if (current == START)
                    START = START->next;
                else
                    previous->next = current->next;
                
                    delete current;
                
                    return true;
        }

        void traverse()
        {
            if (listEmpty())
                cout << "\nList Kosong\n";
            else
            {
                cout << "\nData di dalam list adalah: \n";
                Node *currentNode = START;
                
                while (currentNode != NULL)
                {
                    cout << currentNode->noMhs << endl;
                    currentNode = currentNode->next;
                }
                cout << endl;
            }
        }

    }
};


int main()
{
    LinkedList mhs;
    int nim;
    char ch;

    do 
    {
        cout << "\nMenu" << endl;
        cout << "1. Menambahkan data ke dalam list" << endl;
        cout << "2. Menghapus data dari list" << endl;
        cout << "3. Menampilkan data dalam list" << endl;
        cout << "4. Mencari data dalam list" << endl;
        cout << "5. Keluar" << endl;
        
        cout << "\nMasukkan pilihan (1-5): ";
        cin >> ch;

         switch (ch)
        {
            case '1':
                mhs.addNode();
                break;

            case '2':
                if (mhs.listEmpty())
                {
                    cout << "\nList Kosong\n";
                    break;
                } 
                
                cout << "\nMasukkan nomor mahasiswa yang akan dihapus: ";
                cin >> nim;

                if (mhs.delNode(nim))
                    cout << "\nData tidak ditemukan " << endl;
                else
                    cout << "\nData dengan nomor " << nim << " berhasil dihapus\n";
                break;

            case '3':
                mhs.traverse();
                break;


            case '4':
                if (mhs.listEmpty())
                {
                    cout << "\nList Kosong\n";
                    break;
                }

                Node *previous, *current;
                cout << "\nMasukkan nomor mahasiswa yang akan dicari: ";
                cin >> nim;

                if (mhs.search(nim, previous, current))
                    cout << "\nData tidak ditemukan\n";
                else
                { 
                    cout << "\nData ditemukan\n";
                    cout << "\n NIM Mahasiswa : " << current->noMhs << endl;
                }
                break;
        }
            case '5':
                break;


            default:
                cout << "\nPilihan salah!\n";
        }
    } while (ch != '5');
    
    return 0;
};

