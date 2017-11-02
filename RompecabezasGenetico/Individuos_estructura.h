#ifndef ROMPECABEZASGENETICO_LISTA_H
#define ROMPECABEZASGENETICO_LISTA_H

#include <iostream>

using namespace std;

struct nodo{
    int nro;        // en este caso es un numero entero
    struct nodo *sgte;
    int fit;
};

typedef struct nodo *Tlista;

void insertarFinal(Tlista &lista, int valor){
    Tlista t, q = new(struct nodo);

    q->nro  = valor;
    q->sgte = NULL;

    if(lista==NULL){
        lista = q;
    }else{
        t = lista;
        while(t->sgte!=NULL){
            t = t->sgte;
        }
        t->sgte = q;
    }
}

int insertarAntesDespues(){
    int _op, band;
    _op=2;
    if(_op==1)
        band = -1;
    else
        band = 0;
    return band;
}

void insertarElemento(Tlista &lista, int valor, int pos){
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;

    if(pos==1) {
        lista = q;
    }
    else{
        int x = insertarAntesDespues();
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

void buscarElemento(Tlista lista, int valor){
    Tlista q = lista;
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

void reportarLista(Tlista lista){
    int i = 0;
    while(lista != NULL){
        cout<<lista->nro;
        cout<<" ";
        lista = lista->sgte;
        i++;
    }
}

void modificar_valor(Tlista lista, int val){
    int i = 0;
    while(lista != NULL){
        if(lista->nro==val){
            lista->nro=val;
        }
        lista = lista->sgte;
        i++;
    }
}

int fitnes_por_columna(Tlista lista,Tlista lista2){
    int i = 0;
    int fit=0;
    while(lista != NULL){
        if (lista->nro == lista2->nro)
                fit += 1;
        lista = lista->sgte;
        lista2=lista2->sgte;
        i++;
    }
    return fit;
}

void eliminarElemento(Tlista &lista, int valor){
    Tlista p, ant;
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

void eliminaRepetidos(Tlista &lista, int valor) {
    Tlista q, ant;
    q = lista;
    ant = lista;
    while(q!=NULL){
        if(q->nro==valor){
            if(q==lista){ // primero elemento
                lista = lista->sgte;
                delete(q);
                q = lista;
            }else{
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }else{
            ant = q;
            q = q->sgte;
        }
    }// fin del while
    cout<<"\n\n Valores eliminados..!"<<endl;
}

#endif //ROMPECABEZASGENETICO_LISTA_H