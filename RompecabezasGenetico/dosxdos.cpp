#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

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

void JoinDospordos(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita.jpg",m_image);
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
    waitKey(0);
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
int sobreescribirIMG2(Mat laWea){
    Mat uno = imread("miniatura1.jpg",1);
    Mat dos = imread("miniatura2.jpg",1);
    Mat tres = imread("miniatura3.jpg",1);
    Mat cuatro = imread("miniatura4.jpg",1);
    while(true){
        JoinDospordos(laWea,cuatro,320,0);
        JoinDospordos2(laWea,uno,0,0);
        JoinDospordos3(laWea,dos,0,240);
        JoinDospordos4(laWea,tres,320,240);
        break;
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