#define MYLIST_H_INCLUDED
#include <iostream>
#include <string>
#define info(P) (P)->info
#define next(P) (P)->next
#define First(L) ((L).First)
#define NIL NULL

/* Athallah Zacky Abdullah 1301204280*/
using namespace std;

struct mahasiswa {
    string NAMA;
    string NIM ;
    float IPK ;
};

typedef mahasiswa infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct List{
    address First;
};


void createList(List &L);
infotype newMahasiswa(string nama, string nim, float ipk);
address newElement(infotype dataBaru);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
address deleteFirst(List &L);
address deleteLast(List &L);
void printList(List L);




#endif // MYLIST_H_INCLUDED
