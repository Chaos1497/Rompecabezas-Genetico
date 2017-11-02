#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include "Individuos_estructura.h"
#include "Genetic.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;
Mat uno,dos,tres,cuatro,LW;

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
int sobreescribirIMG2(Mat laWea){
    LW=laWea;
    uno = imread("miniatura2.jpg",1);
    dos = imread("miniatura1.jpg",1);
    tres = imread("miniatura3.jpg",1);
    cuatro = imread("miniatura4.jpg",1);
    int gen=0;
    int fin=0;
    Poblacion Muestra2=Muestra;

    while(Muestra!=NULL){


        if(Muestra->sgte!=NULL){
            mostrar2(Muestra->sgte->individuo);
            waitKey(4000);
        }



        if(Muestra->sgte->sgte!=NULL){
            mostrar2(Muestra->sgte->sgte->individuo);
            waitKey(4000);
        }
        mostrar2(Muestra->individuo);
        waitKey(4000);
        Muestra=Muestra->sgte;
        Muestra=Muestra->sgte;
        cout<<"GENERACION \n";
        cout<<gen;
        gen+=1;
        if(gen==fin){
            cout<<"FINALIZADO \n";
            waitKey(0);
        }
        }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void dospordos4(Mat laWea5){
    for(int y=240 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropDospordos(laWea5, x, y, 320, 240, nombre);
            sobreescribirIMG2(laWea5);
        }
    }
}
void dospordos3(Mat laWea4){
    for(int y=240 ; y<=480; y+=240){
        for(int x=0; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropDospordos(laWea4, x, y, 320, 240, nombre);
            dospordos4(laWea4);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void dospordos2(Mat laWea3){
    for(int y=0 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropDospordos(laWea3, x, y, 320, 240, nombre);
            dospordos3(laWea3);
        }
    }
}
void dospordos1(Mat laWea2){
    for(int y=0 ; y<=480; y+=240){
        for(int x=0; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropDospordos(laWea2, x, y, 320, 240, nombre);
            dospordos2(laWea2);
        }
    }
}