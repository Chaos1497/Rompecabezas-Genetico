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

Mat CropDospordos(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

Mat CropDospordos2(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada2",cropped_img);
    imshow("Original2",image);
    return cropped_img;
}

void JoinDospordos(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa",m_image);
    imshow("Pullita",s_image);
    waitKey(0);
}

void JoinDospordos2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa2",m_image);
    imshow("Pullita2",s_image);
    waitKey(0);
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void dospordos4(Mat laWea5){
    for(int y=240 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropDospordos(laWea5, x, y, 320, 240, nombre);
            JoinDospordos(laWea5,miniatura,300,50);
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
            JoinDospordos(laWea4,miniatura,300,50);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void dospordos2(Mat laWea3){
    for(int y=0 ; y<=480; y+=240){
        for(int x=320; x<=640; x+=320) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropDospordos(laWea3, x, y, 320, 240, nombre);
            dospordos3(laWea3);
            JoinDospordos(laWea3,miniatura,200,200);
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
            JoinDospordos(laWea2,miniatura,300,50);
        }
    }
}