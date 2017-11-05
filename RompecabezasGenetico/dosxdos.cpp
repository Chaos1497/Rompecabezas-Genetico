#include <stdio.h>
#include "cv.h"
#include "Individuos_estructura.h"
#include "Genetic.h"
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;
Mat uno,dos,tres,cuatro,LW;
int tiempo2=2000;
int continuar2=1;
int disminuir2=1; //cuando se desea no mostrar una generacion
int salto_generaciones2=0;
void revisar2(int cont){

    int decision;
    cout<<"\n 1.Acelerar \n 3.Acelerar sin preguntar \n 2.Pausar \n 4.continuar2 sin preguntar \n 5.Detener \n 6.Saltar n generaciones \n Ingrese su eleccion:";
    cin>>decision;
    if(decision==1){
        tiempo2-=500;
    }else if(decision==2){
        while(decision!=1){
            cout<<"\n Reanudar? 1:SI 2:NO \n";
            cin>>decision;
        }
    }else if(decision==3){
        tiempo2-=1000;
        continuar2=0;

    }else if(decision==4){
        continuar2=0;
    }
    else if(decision==5){
        waitKey(0);
    }
    else if(decision==6){
        int generaciones_saltar=0;
        cout<<"\n¿Cuantas generaciones desea saltarse? \n";
        cin>>generaciones_saltar;
        disminuir2=1;
        salto_generaciones2=3*generaciones_saltar;
    }
}
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
Mat CropDospordos(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void JoinDospordos(Mat& m_image, Mat& s_image, int x_pos, int y_pos, int num){
    if(num!=0){
        s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
        imwrite("Escrita"+to_string(num)+".jpg",m_image);
    }else{
        s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
        imwrite("Escrita.jpg",m_image);
    }
}
void JoinDospordos2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita2.jpg",m_image);
}
void JoinDospordos3(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita3.jpg",m_image);
}
void JoinDospordos4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa4",m_image);
    imwrite("Escrita4.jpg",m_image);
    waitKey(2000);
}

void mostrar2(Tlista TT){
    int pos=0;
    while(TT!=NULL){
        if(pos==0){
            if(TT->nro==0){
                JoinDospordos(LW,uno,320,0,0);
            }else if(TT->nro==1){
                JoinDospordos(LW,dos,320,0,0);
            }else if(TT->nro==2){
                JoinDospordos(LW,tres,320,0,0);
            }else if(TT->nro==3){
                JoinDospordos(LW,cuatro,320,0,0);
            }
        } else if(pos==1){
            if(TT->nro==0){
                JoinDospordos2(LW,uno,0,0);
            }else if(TT->nro==1){
                JoinDospordos2(LW,dos,0,0);
            }else if(TT->nro==2){
                JoinDospordos2(LW,tres,0,0);
            }else if(TT->nro==3){
                JoinDospordos2(LW,cuatro,0,0);
            }
        } else if(pos==2){
            if(TT->nro==0){
                JoinDospordos3(LW,uno,0,240);
            }else if(TT->nro==1){
                JoinDospordos3(LW,dos,0,240);
            }else if(TT->nro==2){
                JoinDospordos3(LW,tres,0,240);
            }else if(TT->nro==3){
                JoinDospordos3(LW,cuatro,0,240);
            }
        } else if(pos==3){
            if(TT->nro==0){
                JoinDospordos4(LW,uno,320,240);
            }else if(TT->nro==1){
                JoinDospordos4(LW,dos,320,240);
            }else if(TT->nro==2){
                JoinDospordos4(LW,tres,320,240);
            }else if(TT->nro==3){
                JoinDospordos4(LW,cuatro,320,240);
            }
        }
        pos+=1;
        TT=TT->sgte;
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
int sobreescribirIMG2(Mat imag) {
    LW = imag;
    uno = imread("miniatura2.jpg", 1);
    dos = imread("miniatura1.jpg", 1);
    tres = imread("miniatura3.jpg", 1);
    cuatro = imread("miniatura4.jpg", 1);

    int gen = 1;
    Poblacion M2 = Muestra;
    int fin = 0;
    while (M2 != NULL) {
        fin += 1;
        M2 = M2->sgte;
    }
    int cont = 0; //condicion para detenerse en el ultimo individuo con un wait infinito
    int cont2 = 0; //sirve para mostrar el numero de generacion
    while (Muestra != NULL) {
        if (continuar2 != 0) {
            revisar2(cont);
        }
        cout << "\n GENERACION :";
        if (cont2 == 3) {
            cont2 = 0;
            gen += 1;
        }
        cont2 += 1;
        cont += 1;
        cout << gen;
        cout << "\n";
        if (salto_generaciones2 == 0) {
            mostrar2(Muestra->individuo);
            disminuir2 = 0;
        }
        if (disminuir2 == 1) {
            salto_generaciones2 -= 1;
        }
        waitKey(tiempo2);
        reportarLista(Muestra->individuo);
        Muestra = Muestra->sgte;
        if (cont == fin) {
            cout << "FINALIZADO\n";
            waitKey(0);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void dospordos4(Mat imag5){
    for(int y=240 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropDospordos(imag5, x, y, 320, 240, nombre);
            sobreescribirIMG2(imag5);
        }
    }
}
void dospordos3(Mat imag4){
    for(int y=240 ; y<=480; y+=240){
        for(int x=0; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropDospordos(imag4, x, y, 320, 240, nombre);
            dospordos4(imag4);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void dospordos2(Mat imag3){
    for(int y=0 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropDospordos(imag3, x, y, 320, 240, nombre);
            dospordos3(imag3);
        }
    }
}
void dospordos1(Mat imag2){
    for(int y=0 ; y<=480; y+=240){
        for(int x=0; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropDospordos(imag2, x, y, 320, 240, nombre);
            dospordos2(imag2);
        }
    }
}