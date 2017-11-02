#ifndef ROMPECABEZASGENETICO_MUTACION_H
#define ROMPECABEZASGENETICO_MUTACION_H

#include <iostream>

using namespace std;
struct ndo{
    int posicion;        // en este caso es un numero entero
    int repeticion;
    struct ndo *sgte;
};

typedef struct ndo *Mutador;

void insertarFinal_P(Mutador &lista){
    Poblacion t, q = new(struct ndo);

    q->nro  = fit;
    q->sgte = NULL;
    q->individuo=I;
    if(lista==NULL){
        lista = q;
    }
    else{
        t = lista;
        while(t->sgte!=NULL){
            t = t->sgte;
        }
        t->sgte = q;
    }
}

int insertarAntesDespues_P(){
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;

    cout<<"\n\t Opcion : "; cin>> _op;

    if(_op==1)
        band = -1;
    else
        band = 0;
    return band;
}

void insertarElemento_P(Mutador &lista, int valor, int pos){
    Poblacion q, t;
    int i;
    q = new(struct ndo);
    q->nro = valor;

    if(pos==1){
        q->sgte = lista;
        lista = q;
    }
    else{
        int x = insertarAntesDespues_P();
        t = lista;

        for(i=1; t!=NULL; i++){
            if(i==pos+x){
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}

void buscarElemento_P(Mutador lista, int valor){
    Poblacion q = lista;
    int i = 1, band = 0;

    while(q!=NULL){
        if(q->nro==valor){
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void reportarLista_P(Mutador lista){
    int i = 0;
    while(lista != NULL){
        cout <<' '<< i+1 <<") " << lista->posicion<<"*_* "+lista->repeticion;
        cout<<endl;
        lista = lista->sgte;
        i++;
    }
}

void eliminarElemento_P(Mutador &lista, int valor){
    Poblacion p, ant;
    p = lista;

    if(lista!=NULL){
        while(p!=NULL){
            if(p->nro==valor){
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}

void eliminaRepetidos_P(Mutador &lista, int valor){
    Poblacion q, ant;
    q = lista;
    ant = lista;

    while (q != NULL){
        if (q->nro == valor){
            if (q == lista){ // primero elemento
                lista = lista->sgte;
                delete (q);
                q = lista;
            } else{
                ant->sgte = q->sgte;
                delete (q);
                q = ant->sgte;
            }
        }else{
            ant = q;
            q = q->sgte;
        }
    }
    // fin del while
    cout << "\n\n Valores eliminados..!" << endl;
}

void ordenarLista(Mutador lista){
    Mutador actual , siguiente;
    int rep;
    int pos1;
    Mutador ind;
    actual = lista;
    while(actual->sgte != NULL){
        siguiente = actual->sgte;
        while(siguiente!=NULL){
            if(actual->repeticion < siguiente->repeticion){
                rep = siguiente->repeticion;
                siguiente->repeticion = actual->repeticion;
                actual->repeticion = rep;
            }
            siguiente = siguiente->sgte;
        }
        actual = actual->sgte;
        siguiente = actual->sgte;
    }
    cout<<"\n\n\tLista ordenada..."<<endl;
}

#endif //ROMPECABEZASGENETICO_MUTACION_H