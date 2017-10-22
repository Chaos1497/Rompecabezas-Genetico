#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

Mat CropTresportres(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    //imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void JoinTresportres(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa",m_image);
    //imshow("Pullita",s_image);
    imwrite("Escrita.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa2",m_image);
    //imshow("Pullita2",s_image);
    imwrite("Escrita2.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres3(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa3",m_image);
    //imshow("Pullita3",s_image);
    imwrite("Escrita3.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa4",m_image);
    //imshow("Pullita4",s_image);
    imwrite("Escrita4.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres5(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa5",m_image);
    //imshow("Pullita5",s_image);
    imwrite("Escrita5.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres6(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa6",m_image);
    //imshow("Pullita6",s_image);
    imwrite("Escrita6.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres7(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa7",m_image);
    //imshow("Pullita7",s_image);
    imwrite("Escrita7.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres8(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa8",m_image);
    //imshow("Pullita8",s_image);
    imwrite("Escrita8.jpg",m_image);
    //waitKey(0);
}
void JoinTresportres9(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa9",m_image);
    //imshow("Pullita9",s_image);
    imwrite("Escrita9.jpg",m_image);
    waitKey(0);
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

int sobreescribirIMG3(Mat laWea){
    Mat uno = imread("miniatura1.jpg",1);
    Mat dos = imread("miniatura2.jpg",1);
    Mat tres = imread("miniatura3.jpg",1);
    Mat cuatro = imread("miniatura4.jpg",1);
    Mat cinco = imread("miniatura5.jpg",1);
    Mat seis = imread("miniatura6.jpg",1);
    Mat siete = imread("miniatura7.jpg",1);
    Mat ocho = imread("miniatura8.jpg",1);
    Mat nueve = imread("miniatura9.jpg",1);
    while(true){
        JoinTresportres(laWea,ocho,427,320);
        JoinTresportres2(laWea,uno,214,320);
        JoinTresportres3(laWea,dos,0,320);
        JoinTresportres4(laWea,tres,427,160);
        JoinTresportres5(laWea,cinco,214,160);
        JoinTresportres6(laWea,nueve,0,160);
        JoinTresportres7(laWea,seis,427,0);
        JoinTresportres8(laWea,cuatro,214,0);
        JoinTresportres9(laWea,siete,0,0);
        break;
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
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
/*--------------------------------------------------------------------------------------------------------------*/
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
/*--------------------------------------------------------------------------------------------------------------*/
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