#ifndef ROMPECABEZASGENETICO_MATRIZ_H
#define ROMPECABEZASGENETICO_MATRIZ_H

#include <iostream>
#include "Individuos_estructura.h"
#include "Poblacion.h"

using namespace std;
Tlista C1=NULL;

//Poblacion inicial
Poblacion P;
Tlista C1_R=NULL;
Tlista C2_R=NULL;
Tlista C3_R=NULL;
Tlista C4_R=NULL;
Tlista C5_R=NULL;
Tlista C6_R=NULL;
Tlista C7_R=NULL;
Tlista C8_R=NULL;

int random_M(int range,int t){
    int xRan;
    srand(time(NULL)); // This will ensure a really randomized number by help of time.
    xRan=rand()%range; // Randomizing the number between 1-15.
    return xRan;
}

void crear(int size){
    if(size ==2){
        int x=0;
        while(x<size*size){
            insertarFinal(C1,x);
            x++;
        }
        cout<<"Matriz :\n";
        reportarLista(C1);
    }
    else if(size==3){
        int x=0;
        while(x<size*size){
            insertarFinal(C1,x);
            x++;
        }
        cout<<"Matriz :\n";
        reportarLista(C1);
    }
    else if(size==4){
        int x=0;
        while(x<size*size){
            insertarFinal(C1,x);
            x++;
        }
        cout<<"Matriz :\n";
        reportarLista(C1);
    }
    else if(size==5){
        int x=0;
        while(x<size*size){
            insertarFinal(C1,x);
            x++;
        }
        cout<<"Matriz :\n";
        reportarLista(C1);
    }
}

void crear_R(int size){
    if(size==2){
        cout<<"2x2\n";
        int num;
        srand(time(NULL));
        for(int c = 0; c <= 3; c++){
            num =rand() % (4);
            insertarFinal(C1_R,num);
            num =rand() % (4);
            insertarFinal(C2_R,num);
            num =rand() % (4);
            insertarFinal(C3_R,num);
            num =rand() % (4);
            insertarFinal(C4_R,num);
            num =rand() % (4);
            insertarFinal(C5_R,num);
            num =rand() % (4);
            insertarFinal(C6_R,num);
            num =rand() % (4);
            insertarFinal(C7_R,num);
            num =rand() % (4);
            insertarFinal(C8_R,num);
        }
        insertarFinal_P(P,fitnes_por_columna(C1,C1_R),C1_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C2_R),C2_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C3_R),C3_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C4_R),C4_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C5_R),C5_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C6_R),C6_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C7_R),C7_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C8_R),C8_R);
    }
    else if(size==3){
        cout<<"3x3\n";
        srand(time(NULL));
        int num=0;
        for(int c = 0; c <= 8; c++){
            num =rand() % (9);
            insertarFinal(C1_R,num);
            num =rand() % (9);
            insertarFinal(C2_R,num);
            num =rand() % (9);
            insertarFinal(C3_R,num);
            num =rand() % (9);
            insertarFinal(C4_R,num);
            num =rand() % (9);
            insertarFinal(C5_R,num);
            num =rand() % (9);
            insertarFinal(C6_R,num);
            num =rand() % (9);
            insertarFinal(C7_R,num);
            num =rand() % (9);
            insertarFinal(C8_R,num);
        }
        insertarFinal_P(P,fitnes_por_columna(C1,C1_R),C1_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C2_R),C2_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C3_R),C3_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C4_R),C4_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C5_R),C5_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C6_R),C6_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C7_R),C7_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C8_R),C8_R);
    }
    else if(size==4){
        cout<<"4x4\n";
        srand(time(NULL));
        int num=0;
        for(int c = 0; c <= 15; c++){
            num =rand() % (16);
            insertarFinal(C1_R,num);
            num =rand() % (16);
            insertarFinal(C2_R,num);
            num =rand() % (16);
            insertarFinal(C3_R,num);
            num =rand() % (16);
            insertarFinal(C4_R,num);
            num =rand() % (16);
            insertarFinal(C5_R,num);
            num =rand() % (16);
            insertarFinal(C6_R,num);
            num =rand() % (16);
            insertarFinal(C7_R,num);
            num =rand() % (16);
            insertarFinal(C8_R,num);
        }
        insertarFinal_P(P,fitnes_por_columna(C1,C1_R),C1_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C2_R),C2_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C3_R),C3_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C4_R),C4_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C5_R),C5_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C6_R),C6_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C7_R),C7_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C8_R),C8_R);
    }
    else if(size==5){
        cout<<"5x5\n";
        srand(time(NULL));
        int num=0;
        for(int c = 0; c <= 24; c++){
            num =rand() % (25);
            insertarFinal(C1_R,num);
            num =rand() % (25);
            insertarFinal(C2_R,num);
            num =rand() % (25);
            insertarFinal(C3_R,num);
            num =rand() % (25);
            insertarFinal(C4_R,num);
            num =rand() % (25);
            insertarFinal(C5_R,num);
            num =rand() % (25);
            insertarFinal(C6_R,num);
            num =rand() % (25);
            insertarFinal(C7_R,num);
            num =rand() % (25);
            insertarFinal(C8_R,num);
        }
        insertarFinal_P(P,fitnes_por_columna(C1,C1_R),C1_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C2_R),C2_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C3_R),C3_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C4_R),C4_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C5_R),C5_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C6_R),C6_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C7_R),C7_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C8_R),C8_R);
    }
}

#endif //ROMPECABEZASGENETICO_MATRIZ_H