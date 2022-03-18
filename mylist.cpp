#include <iostream>
/* Athallah Zacky Abdullah 1201204280
*/
void createList(List &L){
    First(L) = NIL;
}

infotype newMahasiswa(string nama, string nim, float ipk){
    infotype mhs;
    mhs.nama = nama;
    mhs.nim = nim;
    mhs.ipk = ipk;
    return mhs;
}

address newElement(infotype dataBaru){
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = NIL;
    return P;
}

void insertFirst(List &L, address P){
    if(First(L) == NIL){
        First(L) = P;
    } else {
        next(P) = First(L);
        First(L) = P;
    }
}

address deleteFirst(List &L){
    address P = First(L);
    if(next(First(L)) == NIL){
        First(L) = NIL;
    } else {
        First(L) = next(First(L));
    }
    next(P) = NIL;
}

address deleteLast(List &L){
    address p, q;
    if(First(L) == NIL){
        p = NIL;
        cout << "List Kosong!" << endl;
    } else if(next(First(L)) == NIL){
        p = First(L);
        First(L) = NIL;
    } else {
        q = First(L);
        p = First(L);
        while(next(p) != NIL){
            q = p;
            p = next(p);
        }
        next(q) = NIL;
    }
    return p;
}

void insertLast(List &L, address P){
    if(First(L) == NIL){
        First(L) = P;
    } else {
        address tmp = First(L);
        while( next(tmp) != NIL){
            tmp = next(tmp);
        }
        next(tmp) = P;
    }
}
