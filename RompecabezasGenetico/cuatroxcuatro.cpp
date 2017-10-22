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

Mat CropCuatroporcuatro(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    //imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void JoinCuatroporcuatro(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa",m_image);
    //imshow("Pullita",s_image);
    imwrite("Escrita.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa2",m_image);
    //imshow("Pullita2",s_image);
    imwrite("Escrita2.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro3(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa3",m_image);
    //imshow("Pullita3",s_image);
    imwrite("Escrita3.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa4",m_image);
    //imshow("Pullita4",s_image);
    imwrite("Escrita4.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro5(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa5",m_image);
    //imshow("Pullita5",s_image);
    imwrite("Escrita5.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro6(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa6",m_image);
    //imshow("Pullita6",s_image);
    imwrite("Escrita6.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro7(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa7",m_image);
    //imshow("Pullita7",s_image);
    imwrite("Escrita7.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro8(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa8",m_image);
    //imshow("Pullita8",s_image);
    imwrite("Escrita8.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro9(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa9",m_image);
    //imshow("Pullita9",s_image);
    imwrite("Escrita9.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro10(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa10",m_image);
    //imshow("Pullita10",s_image);
    imwrite("Escrita10.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro11(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa11",m_image);
    //imshow("Pullita11",s_image);
    imwrite("Escrita11.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro12(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa12",m_image);
    //imshow("Pullita12",s_image);
    imwrite("Escrita12.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro13(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa13",m_image);
    //imshow("Pullita13",s_image);
    imwrite("Escrita13.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro14(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa14",m_image);
    //imshow("Pullita14",s_image);
    imwrite("Escrita14.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro15(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa15",m_image);
    //imshow("Pullita15",s_image);
    imwrite("Escrita15.jpg",m_image);
    //waitKey(0);
}
void JoinCuatroporcuatro16(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa16",m_image);
    //imshow("Pullita16",s_image);
    imwrite("Escrita16.jpg",m_image);
    waitKey(0);
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

int sobreescribirIMG4(Mat laWea){
    Mat uno = imread("miniatura1.jpg",1);
    Mat dos = imread("miniatura2.jpg",1);
    Mat tres = imread("miniatura3.jpg",1);
    Mat cuatro = imread("miniatura4.jpg",1);
    Mat cinco = imread("miniatura5.jpg",1);
    Mat seis = imread("miniatura6.jpg",1);
    Mat siete = imread("miniatura7.jpg",1);
    Mat ocho = imread("miniatura8.jpg",1);
    Mat nueve = imread("miniatura9.jpg",1);
    Mat diez = imread("miniatura10.jpg",1);
    Mat once = imread("miniatura11.jpg",1);
    Mat doce = imread("miniatura12.jpg",1);
    Mat trece = imread("miniatura13.jpg",1);
    Mat catorce = imread("miniatura14.jpg",1);
    Mat quince = imread("miniatura15.jpg",1);
    Mat dieciseis = imread("miniatura16.jpg",1);
    while(true){
        JoinCuatroporcuatro(laWea,cuatro,480,360);
        JoinCuatroporcuatro2(laWea,uno,320,360);
        JoinCuatroporcuatro3(laWea,dos,160,360);
        JoinCuatroporcuatro4(laWea,tres,0,360);
        JoinCuatroporcuatro5(laWea,cinco,480,120);
        JoinCuatroporcuatro6(laWea,nueve,320,120);
        JoinCuatroporcuatro7(laWea,seis,160,120);
        JoinCuatroporcuatro8(laWea,ocho,0,120);
        JoinCuatroporcuatro9(laWea,siete,480,240);
        JoinCuatroporcuatro10(laWea,trece,320,240);
        JoinCuatroporcuatro11(laWea,diez,160,240);
        JoinCuatroporcuatro12(laWea,quince,0,240);
        JoinCuatroporcuatro13(laWea,once,480,0);
        JoinCuatroporcuatro14(laWea,dieciseis,320,0);
        JoinCuatroporcuatro15(laWea,doce,160,0);
        JoinCuatroporcuatro16(laWea,catorce,0,0);
        break;
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cuatroporcuatro16(Mat laWea17){
    for(int y=360 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 16);
            Mat miniatura = CropCuatroporcuatro(laWea17, x, y, 160, 120, nombre);
            JoinCuatroporcuatro(laWea17,miniatura,300,50);
            sobreescribirIMG4(laWea17);
        }
    }
}

void cuatroporcuatro15(Mat laWea16){
    for(int y=360 ; y<=480; y+=120){
        for(int x=320; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 15);
            Mat miniatura = CropCuatroporcuatro(laWea16, x, y, 160, 120, nombre);
            cuatroporcuatro16(laWea16);
        }
    }
}

void cuatroporcuatro14(Mat laWea15){
    for(int y=360 ; y<=480; y+=120){
        for(int x=160; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 14);
            Mat miniatura = CropCuatroporcuatro(laWea15, x, y, 160, 120, nombre);
            cuatroporcuatro15(laWea15);
        }
    }
}

void cuatroporcuatro13(Mat laWea14){
    for(int y=360 ; y<=480; y+=120){
        for(int x=0; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 13);
            Mat miniatura = CropCuatroporcuatro(laWea14, x, y, 160, 120, nombre);
            cuatroporcuatro14(laWea14);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void cuatroporcuatro12(Mat laWea13){
    for(int y=240 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 12);
            Mat miniatura = CropCuatroporcuatro(laWea13, x, y, 160, 120, nombre);
            cuatroporcuatro13(laWea13);
        }
    }
}

void cuatroporcuatro11(Mat laWea12){
    for(int y=240 ; y<=480; y+=120){
        for(int x=320; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 11);
            Mat miniatura = CropCuatroporcuatro(laWea12, x, y, 160, 120, nombre);
            cuatroporcuatro12(laWea12);
        }
    }
}

void cuatroporcuatro10(Mat laWea11){
    for(int y=240 ; y<=480; y+=120){
        for(int x=160; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 10);
            Mat miniatura = CropCuatroporcuatro(laWea11, x, y, 160, 120, nombre);
            cuatroporcuatro11(laWea11);
        }
    }
}

void cuatroporcuatro9(Mat laWea10){
    for(int y=240 ; y<=480; y+=120){
        for(int x=0; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropCuatroporcuatro(laWea10, x, y, 160, 120, nombre);
            cuatroporcuatro10(laWea10);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void cuatroporcuatro8(Mat laWea9){
    for(int y=120 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropCuatroporcuatro(laWea9, x, y, 160, 120, nombre);
            cuatroporcuatro9(laWea9);
        }
    }
}

void cuatroporcuatro7(Mat laWea8){
    for(int y=120 ; y<=480; y+=120){
        for(int x=320; x<=640; x+=160) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 7);
            Mat miniatura = CropCuatroporcuatro(laWea8, x, y, 160, 120, nombre);
            cuatroporcuatro8(laWea8);
        }
    }
}

void cuatroporcuatro6(Mat laWea7){
    for(int y=120 ; y<=480; y+=120){
        for(int x=160; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropCuatroporcuatro(laWea7, x, y, 160, 120, nombre);
            cuatroporcuatro7(laWea7);
        }
    }
}

void cuatroporcuatro5(Mat laWea6){
    for(int y=120 ; y<=480; y+=120){
        for(int x=0; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropCuatroporcuatro(laWea6, x, y, 160, 120, nombre);
            cuatroporcuatro6(laWea6);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void cuatroporcuatro4(Mat laWea5){
    for(int y=0 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropCuatroporcuatro(laWea5, x, y, 160, 120, nombre);
            cuatroporcuatro5(laWea5);
        }
    }
}

void cuatroporcuatro3(Mat laWea4){
    for(int y=0 ; y<=480; y+=120){
        for(int x=320; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropCuatroporcuatro(laWea4, x, y, 160, 120, nombre);
            cuatroporcuatro4(laWea4);
        }
    }
}

void cuatroporcuatro2(Mat laWea3){
    for(int y=0 ; y<=480; y+=120){
        for(int x=160; x<=640; x+=160) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropCuatroporcuatro(laWea3, x, y, 160, 120, nombre);
            cuatroporcuatro3(laWea3);
        }
    }
}

void cuatroporcuatro1(Mat laWea2){
    for(int y=0 ; y<=480; y+=120){
        for(int x=0; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropCuatroporcuatro(laWea2, x, y, 160, 120, nombre);
            cuatroporcuatro2(laWea2);
        }
    }
}