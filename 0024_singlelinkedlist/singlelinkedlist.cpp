#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    int noMhs;
    node *next;
};

public:
    LinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout <<"\nMaskukkan Nomor Mahasiswa : ";
        cin >> nim;

        node *nodeBaru = new node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diizinkan" << endl;
                return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }
