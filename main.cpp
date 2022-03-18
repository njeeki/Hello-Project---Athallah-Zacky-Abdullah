#include "mylist.h"
/* Athallah Zacky Abdullah 1301204280*/
using namespace std;

int main()
{
    List L;
    address P;
    infotype Mhs;

    createList(L);
    printList(L);

    Mhs = newMahasiswa("Alice", "1301190202", 3.5);
    P = newElement(Mhs);
    insertFirst(L, P);

    Mhs = newMahasiswa("Bob", "1301190203", 4);
    P = newElement(Mhs);
    insertFirst(L, P);
}
