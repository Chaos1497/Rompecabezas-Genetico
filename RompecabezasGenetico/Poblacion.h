#ifndef ROMPECABEZASGENETICO_POBLACION_H
#define ROMPECABEZASGENETICO_POBLACION_H

#include <iostream>
#include "Individuos_estructura.h"

using namespace std;
struct ndo{
    int nro;        // en este caso es un numero entero
    struct ndo *sgte;
    Tlista individuo;
};

typedef struct ndo *Poblacion;

void insertarFinal_P(Poblacion &lista, int fit, Tlista I){
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

void insertarElemento_P(Poblacion &lista, int valor, int pos){
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

void buscarElemento_P(Poblacion lista, int valor){
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

void reportarLista_P(Poblacion lista){
    int i = 0;
    while(lista != NULL){
        cout <<' '<< i+1 <<") " << lista->nro<<"*_* ";
        reportarLista(lista->individuo);
        cout<<endl;
        lista = lista->sgte;
        i++;
    }
}


int fitnes_por_columna_P(Poblacion lista,Poblacion lista2){
    int i = 0;
    int fit=0;
    do{
        if (lista->nro == lista2->nro)
            fit += 1;
        lista = lista->sgte;
        lista2=lista2->sgte;
        i++;
    }while(lista != NULL);
    return fit;
}

void eliminarElemento_P(Poblacion &lista, int valor){
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

void eliminaRepetidos_P(Poblacion &lista, int valor){
    Poblacion q, ant;
    q = lista;
    ant = lista;

    while (q != NULL){
        if (q->nro == valor){
            if (q == lista){ // primero elemento
                lista = lista->sgte;
                delete (q);
                q = lista;
            }else{
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

void ordenarLista(Poblacion lista){
    Poblacion actual , siguiente;
    int t;
    Tlista ind;
    actual = lista;
    while(actual->sgte != NULL){
        siguiente = actual->sgte;
        while(siguiente!=NULL){
            if(actual->nro < siguiente->nro){
                t = siguiente->nro;
                ind=siguiente->individuo;
                siguiente->nro = actual->nro;
                siguiente->individuo=actual->individuo;
                actual->nro = t;
                actual->individuo = ind;
            }
            siguiente = siguiente->sgte;
        }
        actual = actual->sgte;
        siguiente = actual->sgte;
    }
    cout<<"\n\n\tLista ordenada..."<<endl;
}

#endif //ROMPECABEZASGENETICO_POBLACION_H