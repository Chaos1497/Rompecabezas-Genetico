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
    imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

Mat CropTresportres2(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada2",cropped_img);
    imshow("Original2",image);
    return cropped_img;
}

void JoinTresportres(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa",m_image);
    imshow("Pullita",s_image);
    waitKey(0);
}

void JoinTresportres2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
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

void tresportres9(Mat laWea10){
    for(int y=320 ; y<=480; y+=160){
        for(int x=416; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropTresportres(laWea10, x, y, 213, 160, nombre);
            JoinTresportres(laWea10,miniatura,300,50);
        }
    }
}

void tresportres8(Mat laWea9){
    for(int y=320 ; y<=480; y+=160){
        for(int x=213; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropTresportres(laWea9, x, y, 213, 160, nombre);
            tresportres9(laWea9);
            JoinTresportres(laWea9,miniatura,300,50);
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
            JoinTresportres(laWea8,miniatura,200,200);
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
        for(int x=416; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropTresportres(laWea7, x, y, 213, 160, nombre);
            tresportres7(laWea7);
            JoinTresportres(laWea7,miniatura,300,50);
        }
    }
}

void tresportres5(Mat laWea6){
    for(int y=160 ; y<=480; y+=160){
        for(int x=213; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropTresportres(laWea6, x, y, 213, 160, nombre);
            tresportres6(laWea6);
            JoinTresportres(laWea6,miniatura,300,50);
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
            JoinTresportres(laWea5,miniatura,300,50);
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
        for(int x=416; x<=640; x+=213){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropTresportres(laWea4, x, y, 213, 160, nombre);
            tresportres4(laWea4);
            JoinTresportres(laWea4,miniatura,300,50);
        }
    }
}

void tresportres2(Mat laWea3){
    for(int y=0 ; y<=480; y+=160){
        for(int x=213; x<=640; x+=213) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropTresportres(laWea3, x, y, 213, 160, nombre);
            tresportres3(laWea3);
            JoinTresportres(laWea3,miniatura,200,200);
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
            JoinTresportres(laWea2,miniatura,300,50);
        }
    }
}