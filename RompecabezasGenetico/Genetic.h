#ifndef ROMPECABEZASGENETICO_GENETIC_H
#define ROMPECABEZASGENETICO_GENETIC_H

#include "Individuos_manejador.h"
#include "Poblacion.h"

int fitnes;
int fitnes1;
int fitnes2;
int fitnes3;
int fitnes4;
int fitnes5;
int fitnes6;
int fitnes7;
int generacion;
Tlista ideal;
Poblacion Muestra;

void generar_I(int matr){
    int x=0;
    while(x<matr*matr){
        insertarFinal(ideal,9999);
        x+=1;
    }
    cout<<"Ideal\n";
    reportarLista(ideal);
}
int faltantes(Tlista A, int posicion){ // si el resultado implica mas del 50% se muta
    int resultado=0;
    int i = 1;

    while(A != NULL){
        if(A->nro==posicion){
            resultado+=1;
        }
        A = A->sgte;
        i++;
    }
    return resultado;
}

int random(int rango){
    int num;
    for(int c = 0; c <= 3; c++) {
        num = rand() % (rango);
    }
    return num;
}


Tlista combinarA(Tlista A_, Tlista B_,int matr, int mutador){
    Tlista R_=NULL;
    int I=0;
    int recorredor=0;
    int mt1=random(matr*matr);
    int mt2=random(matr*matr);
    int mt3=random(matr*matr);
    if(mt1>mt2){
        while(recorredor < matr*matr){

                if(I<mt1){
                    insertarFinal(R_, A_->nro);
                    A_ = A_->sgte;
                    recorredor++;
                    I+=1;
                }else{
                    insertarFinal(R_, I);
                    A_ = A_->sgte;
                    recorredor++;
                    I+=1;
                }
        }

    }
    while(recorredor < matr*matr){
        if(recorredor<((matr*matr)-matr*2)){
            insertarFinal(R_, A_->nro);
            A_ = A_->sgte;
            recorredor++;
        }
        else{
            insertarFinal(R_, B_->nro);
            B_ = B_->sgte;
            recorredor++;
        }
    }
    return R_;
}

Tlista combinarB(Tlista A_, Tlista B_,int matr){
    Tlista R_=NULL;
    int I=0;
    int recorredor=0;
    int mt1=random(matr*matr); //mutadores
    int mt2=random(matr*matr);
    if(mt1>mt2){
        while(recorredor < matr*matr){
            if(I<mt2){
                insertarFinal(R_, I);
                A_ = A_->sgte;
                recorredor++;
                I+=1;
            }
            else{
                insertarFinal(R_, A_->nro);
                A_ = A_->sgte;
                recorredor++;
                I+=1;
            }
        }
    }
    while(recorredor < matr*matr){
        if(recorredor>((matr*matr)-matr*2)){
            insertarFinal(R_, A_->nro);
            A_ = A_->sgte;
            recorredor++;
        }
        else{
            insertarFinal(R_, B_->nro);
            B_ = B_->sgte;
            recorredor++;
        }
    }
    return R_;
}

void iniciar(int matriz) {
    int Id=0;
    Tlista A, B, C, D,A_aux,B_aux,C_aux,D_aux; //los 4 mejores de cada generacion
    Poblacion Recorredor;
    int mutar=1;
    crear(matriz);
    crear_R(matriz);
    int fit_max = 0;
    int alt=0;
    int pos2;
    while(fit_max!=matriz*matriz) {
        generacion+=1;
        ordenarLista(P);
        cout << "Fit maximo antes";
        cout << P->nro;
        cout << endl;
        /*OBTIENE LOS 4 MEJORES ORDENADOS SEGUN EL FITNESS*/
        A = P->individuo;
        Recorredor = P->sgte;
        B = Recorredor->individuo;
        Recorredor = Recorredor->sgte;
        C = Recorredor->individuo;
        Recorredor = Recorredor->sgte;
        D = Recorredor->individuo;

        cout << "3 Mejores\n";
        reportarLista(A);
        cout << "\n";
        reportarLista(B);
        cout << "\n";
        reportarLista(C);
        cout << "\n";
        /*Muestra en pantalla el mejor*/

        /*Comienza a combinar*/
        C1_R = A;
        C2_R = B;
        C3_R = C;
        C4_R = D;
        C5_R = combinarA(A, B, matriz,mutar);
        C6_R = combinarB(A, B, matriz);
        C7_R = combinarA(C, D, matriz,mutar);
        C8_R = combinarB(C, D, matriz);
        int mtr;

        if(pos2==matriz*matriz){
            pos2=0;
        }
        if( pos2 <matriz*matriz) {
            mtr = 0;
            mtr += faltantes(C1_R, pos2);
            mtr += faltantes(C2_R, pos2);
            mtr += faltantes(C3_R, pos2);
            mtr += faltantes(C4_R, pos2);
            mtr += faltantes(C5_R, pos2);
            mtr += faltantes(C6_R, pos2);
            mtr += faltantes(C7_R, pos2);
            mtr += faltantes(C8_R, pos2);
            if(mtr> 4){
                mtr = 0;
                cout<<pos2;
                cout << " Deberia mutar en \n";
                cout<<pos2;
                cout<<endl;
                insertarFinal(ideal,Id);
                reportarLista(ideal);
                Id+=1;
                pos2+=1;
            }
            cout<<"aun no";
            mtr = 0;
            pos2++;
        }
        mutar=mtr;
        P=NULL;
        /*Comienza a insertar en la nueva poblacion*/

        insertarFinal_P(P,fitnes_por_columna(C1,C1_R),C1_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C2_R),C2_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C3_R),C3_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C4_R),C4_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C5_R),C5_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C6_R),C6_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C7_R),C7_R);
        insertarFinal_P(P,fitnes_por_columna(C1,C8_R),C8_R);
        ordenarLista(P);
        reportarLista_P(P);
        insertarFinal_P(Muestra,0,P->individuo);
        insertarFinal_P(Muestra,0,P->sgte->individuo);

        A = NULL;
        B = NULL;
        C = NULL;
        D = NULL;
        Recorredor=NULL;
        cout << "Fit maximo despues";
        cout << P->nro;
        cout<<endl;
        fit_max=P->nro;
        cout << "\n**********************GENERACION TERMINADA*****************************";
        if(generacion>4000){
            cout<<"Limite excedido";
            break;
        }
        cout<<generacion;
    }
}

    /*
        JoinDospordos(laWea,dos,320,0);
        JoinDospordos2(laWea,tres,0,0);
        JoinDospordos3(laWea,cuatro,0,240);
        JoinDospordos4(laWea,uno,320,240);
        */

//Calcular donde se ocupa más la mutacion
// no modificar donde este la mutacion
#endif //ROMPECABEZASGENETICO_GENETIC_H
