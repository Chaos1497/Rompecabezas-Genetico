#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include "Individuos_estructura.h"
#include "Genetic.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;
Mat uno3,dos3,tres3,cuatro3,cinco3,seis3,siete3,ocho3,nueve3,LW3;



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
    waitKey(2000);
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
int sobreescribirIMG3(Mat laWea){
     uno3 = imread("miniatura1.jpg",1);
     dos3 = imread("miniatura2.jpg",1);
     tres3 = imread("miniatura3.jpg",1);
     cuatro3 = imread("miniatura4.jpg",1);
     cinco3 = imread("miniatura5.jpg",1);
     seis3 = imread("miniatura6.jpg",1);
     siete3 = imread("miniatura7.jpg",1);
     ocho3 = imread("miniatura8.jpg",1);
     nueve3 = imread("miniatura9.jpg",1);
    LW3=laWea;
    int gen=0;
    int fin=0;

    /*
    while(true){

        JoinTresportres(laWea,nueve3,427,320);
        JoinTresportres2(laWea,ocho3,214,320);
        JoinTresportres3(laWea,siete3,0,320);
        JoinTresportres4(laWea,seis3,427,160);
        JoinTresportres5(laWea,cinco3,214,160);
        JoinTresportres6(laWea,cuatro3,0,160);
        JoinTresportres7(laWea,tres3,427,0);
        JoinTresportres8(laWea,dos3,214,0);
        JoinTresportres9(laWea,uno3,0,0);

        Tlista AA;
        insertarFinal(AA,2);
        insertarFinal(AA,2);
        insertarFinal(AA,2);
        insertarFinal(AA,2);
        insertarFinal(AA,2);
        insertarFinal(AA,5);
        insertarFinal(AA,6);
        insertarFinal(AA,7);
        insertarFinal(AA,8);
        insertarFinal(AA,9);
        mostrar3(AA);

        waitKey(0);

        break;
    }
    */

    while(Muestra!=NULL){
        if(Muestra->sgte!=NULL){
            mostrar3(Muestra->sgte->individuo);
            waitKey(4000);
        }
        if(Muestra->sgte->sgte!=NULL){
            mostrar3(Muestra->sgte->sgte->individuo);
            waitKey(4000);
        }
        mostrar3(Muestra->individuo);
        waitKey(4000);
        Muestra=Muestra->sgte;
        Muestra=Muestra->sgte;
        cout<<"GENERACION \n";
        cout<<gen;
        gen+=1;
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres9(Mat laWea10){
    for(int y=320 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropTresportres(laWea10, x, y, 213, 160, nombre);
            sobreescribirIMG3(laWea10);
        }
    }
}
void tresportres8(Mat laWea9){
    for(int y=320 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropTresportres(laWea9, x, y, 213, 160, nombre);
            tresportres9(laWea9);
        }
    }
}
void tresportres7(Mat laWea8){
    for(int y=320 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 7);
            Mat miniatura = CropTresportres(laWea8, x, y, 213, 160, nombre);
            tresportres8(laWea8);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres6(Mat laWea7){
    for(int y=160 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropTresportres(laWea7, x, y, 213, 160, nombre);
            tresportres7(laWea7);
        }
    }
}
void tresportres5(Mat laWea6){
    for(int y=160 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropTresportres(laWea6, x, y, 213, 160, nombre);
            tresportres6(laWea6);
        }
    }
}
void tresportres4(Mat laWea5){
    for(int y=160 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropTresportres(laWea5, x, y, 213, 160, nombre);
            tresportres5(laWea5);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void tresportres3(Mat laWea4){
    for(int y=0 ; y<=480; y+=160){
        for(int x=427; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropTresportres(laWea4, x, y, 213, 160, nombre);
            tresportres4(laWea4);
        }
    }
}
void tresportres2(Mat laWea3){
    for(int y=0 ; y<=480; y+=160){
        for(int x=214; x<=640; x+=213) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropTresportres(laWea3, x, y, 213, 160, nombre);
            tresportres3(laWea3);
        }
    }
}
void tresportres1(Mat laWea2){
    for(int y=0 ; y<=480; y+=160){
        for(int x=0; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropTresportres(laWea2, x, y, 213, 160, nombre);
            tresportres2(laWea2);
        }
    }
}