#include <stdio.h>
#include "cv.h"
#include "Individuos_estructura.h"
#include "Genetic.h"
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;
Mat uno3,dos3,tres3,cuatro3,cinco3,seis3,siete3,ocho3,nueve3,LW3;
int tiempo3=2000;
int continuar=1;
int disminuir=1; //cuando se desea no mostrar una generacion
int salto_generaciones=0;
void revisar(int cont){

    int decision;
    cout<<"\n 1.Acelerar \n 3.Acelerar sin preguntar \n 2.Pausar \n 4.Continuar sin preguntar \n 5.Detener \n 6.Saltar n generaciones \n Ingrese su eleccion:";
    cin>>decision;
    if(decision==1){
        tiempo3-=500;
    }else if(decision==2){
        while(decision!=1){
            cout<<"\n Reanudar? 1:SI 2:NO \n";
            cin>>decision;
        }
    }else if(decision==3){
        tiempo3-=1000;
        continuar=0;

    }else if(decision==4){
        continuar=0;
    }
    else if(decision==5){
        waitKey(0);
    }
    else if(decision==6){
        int generaciones_saltar=0;
        cout<<"\n¿Cuantas generaciones desea saltarse? \n";
        cin>>generaciones_saltar;
        disminuir=1;
        salto_generaciones=3*generaciones_saltar;
    }
}
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
Mat CropTresportres(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void JoinTresportres(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita.jpg",m_image);
}
void JoinTresportres2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita2.jpg",m_image);
}
void JoinTresportres3(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita3.jpg",m_image);
}
void JoinTresportres4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita4.jpg",m_image);
}
void JoinTresportres5(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita5.jpg",m_image);
}
void JoinTresportres6(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita6.jpg",m_image);
}
void JoinTresportres7(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita7.jpg",m_image);
}
void JoinTresportres8(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita8.jpg",m_image);
}
void JoinTresportres9(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa9",m_image);
    imwrite("Escrita9.jpg",m_image);

}

void mostrar3(Tlista TT){
    int pos=0;
    while(TT!=NULL){
        if(pos==0){
            if(TT->nro==0){
                JoinTresportres(LW3,uno3,0,0);
            }else if(TT->nro==1){
                JoinTresportres(LW3,dos3,0,0);
            }else if(TT->nro==2){
                JoinTresportres(LW3,tres3,0,0);
            }else if(TT->nro==3){
                JoinTresportres(LW3,cuatro3,0,0);
            }else if(TT->nro==4){
                JoinTresportres(LW3,cinco3,0,0);
            }else if(TT->nro==5){
                JoinTresportres(LW3,seis3,0,0);
            }else if(TT->nro==6){
                JoinTresportres(LW3,siete3,0,0);
            }else if(TT->nro==7){
                JoinTresportres(LW3,ocho3,0,0);
            }else if(TT->nro==8){
                JoinTresportres(LW3,nueve3,0,0);
            }
        } else if(pos==1){
            if(TT->nro==0){
                JoinTresportres2(LW3,uno3,214,0);
            }else if(TT->nro==1){
                JoinTresportres2(LW3,dos3,214,0);
            }else if(TT->nro==2){
                JoinTresportres2(LW3,tres3,214,0);
            }else if(TT->nro==3){
                JoinTresportres2(LW3,cuatro3,214,0);
            }else if(TT->nro==4){
                JoinTresportres2(LW3,cinco3,214,0);
            }else if(TT->nro==5){
                JoinTresportres2(LW3,seis3,214,0);
            }else if(TT->nro==6){
                JoinTresportres2(LW3,siete3,214,0);
            }else if(TT->nro==7){
                JoinTresportres2(LW3,ocho3,214,0);
            }else if(TT->nro==8){
                JoinTresportres2(LW3,nueve3,214,0);
            }
        } else if(pos==2){
            if(TT->nro==0){
                JoinTresportres3(LW3,uno3,427,0);
            }else if(TT->nro==1){
                JoinTresportres3(LW3,dos3,427,0);
            }else if(TT->nro==2){
                JoinTresportres3(LW3,tres3,427,0);
            }else if(TT->nro==3){
                JoinTresportres3(LW3,cuatro3,427,0);
            }else if(TT->nro==4){
                JoinTresportres3(LW3,cinco3,427,0);
            }else if(TT->nro==5){
                JoinTresportres3(LW3,seis3,427,0);
            }else if(TT->nro==6){
                JoinTresportres3(LW3,siete3,427,0);
            }else if(TT->nro==7){
                JoinTresportres3(LW3,ocho3,427,0);
            }else if(TT->nro==8){
                JoinTresportres3(LW3,nueve3,427,0);
            }
        }else if(pos==3){
            if(TT->nro==0){
                JoinTresportres4(LW3,uno3,0,160);
            }else if(TT->nro==1){
                JoinTresportres4(LW3,dos3,0,160);
            }else if(TT->nro==2){
                JoinTresportres4(LW3,tres3,0,160);
            }else if(TT->nro==3){
                JoinTresportres4(LW3,cuatro3,0,160);
            }else if(TT->nro==4){
                JoinTresportres4(LW3,cinco3,0,160);
            }else if(TT->nro==5){
                JoinTresportres4(LW3,seis3,0,160);
            }else if(TT->nro==6){
                JoinTresportres4(LW3,siete3,0,160);
            }else if(TT->nro==7){
                JoinTresportres4(LW3,ocho3,0,160);
            }else if(TT->nro==8){
                JoinTresportres4(LW3,nueve3,0,160);
            }
        }else if(pos==4){
            if(TT->nro==0){
                JoinTresportres5(LW3,uno3,214,160);
            }else if(TT->nro==1){
                JoinTresportres5(LW3,dos3,214,160);
            }else if(TT->nro==2){
                JoinTresportres5(LW3,tres3,214,160);
            }else if(TT->nro==3){
                JoinTresportres5(LW3,cuatro3,214,160);
            }else if(TT->nro==4){
                JoinTresportres5(LW3,cinco3,214,160);
            }else if(TT->nro==5){
                JoinTresportres5(LW3,seis3,214,160);
            }else if(TT->nro==6){
                JoinTresportres5(LW3,siete3,214,160);
            }else if(TT->nro==7){
                JoinTresportres5(LW3,ocho3,214,160);
            }else if(TT->nro==8){
                JoinTresportres5(LW3,nueve3,214,160);
            }
        }else if(pos==5){
            if(TT->nro==0){
                JoinTresportres6(LW3,uno3,427,160);
            }else if(TT->nro==1){
                JoinTresportres6(LW3,dos3,427,160);
            }else if(TT->nro==2){
                JoinTresportres6(LW3,tres3,427,160);
            }else if(TT->nro==3){
                JoinTresportres6(LW3,cuatro3,427,160);
            }else if(TT->nro==4){
                JoinTresportres6(LW3,cinco3,427,160);
            }else if(TT->nro==5){
                JoinTresportres6(LW3,seis3,427,160);
            }else if(TT->nro==6){
                JoinTresportres6(LW3,siete3,427,160);
            }else if(TT->nro==7){
                JoinTresportres6(LW3,ocho3,427,160);
            }else if(TT->nro==8){
                JoinTresportres6(LW3,nueve3,427,160);
            }
        }else if(pos==6){
            if(TT->nro==0){
                JoinTresportres7(LW3,uno3,0,320);
            }else if(TT->nro==1){
                JoinTresportres7(LW3,dos3,0,320);
            }else if(TT->nro==2){
                JoinTresportres7(LW3,tres3,0,320);
            }else if(TT->nro==3){
                JoinTresportres7(LW3,cuatro3,0,320);
            }else if(TT->nro==4){
                JoinTresportres7(LW3,cinco3,0,320);
            }else if(TT->nro==5){
                JoinTresportres7(LW3,seis3,0,320);
            }else if(TT->nro==6){
                JoinTresportres7(LW3,siete3,0,320);
            }else if(TT->nro==7){
                JoinTresportres7(LW3,ocho3,0,320);
            }else if(TT->nro==8){
                JoinTresportres7(LW3,nueve3,0,320);
            }
        }else if(pos==7){
            if(TT->nro==0){
                JoinTresportres8(LW3,uno3,214,320);
            }else if(TT->nro==1){
                JoinTresportres8(LW3,dos3,214,320);
            }else if(TT->nro==2){
                JoinTresportres8(LW3,tres3,214,320);
            }else if(TT->nro==3){
                JoinTresportres8(LW3,cuatro3,214,320);
            }else if(TT->nro==4){
                JoinTresportres8(LW3,cinco3,214,320);
            }else if(TT->nro==5){
                JoinTresportres8(LW3,seis3,214,320);
            }else if(TT->nro==6){
                JoinTresportres8(LW3,siete3,214,320);
            }else if(TT->nro==7){
                JoinTresportres8(LW3,ocho3,214,320);
            }else if(TT->nro==8){
                JoinTresportres8(LW3,nueve3,214,320);
            }
        }else if(pos==8){
            if(TT->nro==0){
                JoinTresportres9(LW3,uno3,427,320);
            }else if(TT->nro==1){
                JoinTresportres9(LW3,dos3,427,320);
            }else if(TT->nro==2){
                JoinTresportres9(LW3,tres3,427,320);
            }else if(TT->nro==3){
                JoinTresportres9(LW3,cuatro3,427,320);
            }else if(TT->nro==4){
                JoinTresportres9(LW3,cinco3,427,320);
            }else if(TT->nro==5){
                JoinTresportres9(LW3,seis3,427,320);
            }else if(TT->nro==6){
                JoinTresportres9(LW3,siete3,427,320);
            }else if(TT->nro==7){
                JoinTresportres9(LW3,ocho3,427,320);
            }else if(TT->nro==8){
                JoinTresportres9(LW3,nueve3,427,320);
            }
        }
        pos+=1;
        TT=TT->sgte;
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
int sobreescribirIMG3(Mat imag){
     uno3 = imread("miniatura1.jpg",1);
     dos3 = imread("miniatura2.jpg",1);
     tres3 = imread("miniatura3.jpg",1);
     cuatro3 = imread("miniatura4.jpg",1);
     cinco3 = imread("miniatura5.jpg",1);
     seis3 = imread("miniatura6.jpg",1);
     siete3 = imread("miniatura7.jpg",1);
     ocho3 = imread("miniatura8.jpg",1);
     nueve3 = imread("miniatura9.jpg",1);
    LW3=imag;
    int gen=1;
    Poblacion M2=Muestra;
    int fin=0;
    while(M2!=NULL){
        fin+=1;
        M2=M2->sgte;
    }
    int cont=0; //condicion para detenerse en el ultimo individuo con un wait infinito
    int cont2=0; //sirve para mostrar el numero de generacion
    while(Muestra!=NULL){
        if(continuar!=0){
            revisar(cont);
        }
        cout<<"\n GENERACION :";
        if(cont2==3){
            cont2=0;
            gen+=1;
        }
        cont2+=1;
        cont+=1;
        cout<<gen;
        cout<<"\n";
        if(salto_generaciones==0){
            mostrar3(Muestra->individuo);
            disminuir=0;
        }
        if(disminuir==1){
            salto_generaciones-=1;
        }
        waitKey(tiempo3);
        reportarLista(Muestra->individuo);
        Muestra=Muestra->sgte;
        if(cont==fin){
            cout<<"FINALIZADO\n";
            waitKey(0);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres9(Mat imag10){
    for(int y=320 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropTresportres(imag10, x, y, 213, 160, nombre);
            sobreescribirIMG3(imag10);
        }
    }
}
void tresportres8(Mat imag9){
    for(int y=320 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropTresportres(imag9, x, y, 213, 160, nombre);
            tresportres9(imag9);
        }
    }
}
void tresportres7(Mat imag8){
    for(int y=320 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 7);
            Mat miniatura = CropTresportres(imag8, x, y, 213, 160, nombre);
            tresportres8(imag8);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres6(Mat imag7){
    for(int y=160 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropTresportres(imag7, x, y, 213, 160, nombre);
            tresportres7(imag7);
        }
    }
}
void tresportres5(Mat imag6){
    for(int y=160 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropTresportres(imag6, x, y, 213, 160, nombre);
            tresportres6(imag6);
        }
    }
}
void tresportres4(Mat imag5){
    for(int y=160 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropTresportres(imag5, x, y, 213, 160, nombre);
            tresportres5(imag5);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres3(Mat imag4){
    for(int y=0 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropTresportres(imag4, x, y, 213, 160, nombre);
            tresportres4(imag4);
        }
    }
}
void tresportres2(Mat imag3){
    for(int y=0 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropTresportres(imag3, x, y, 213, 160, nombre);
            tresportres3(imag3);
        }
    }
}
void tresportres1(Mat imag2){
    for(int y=0 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropTresportres(imag2, x, y, 213, 160, nombre);
            tresportres2(imag2);
        }
    }
}