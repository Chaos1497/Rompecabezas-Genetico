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

Mat CropCincoporcinco(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

Mat CropCincoporcinco2(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada2",cropped_img);
    imshow("Original2",image);
    return cropped_img;
}

void JoinCincoporcinco(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa",m_image);
    imshow("Pullita",s_image);
    waitKey(0);
}

void JoinCincoporcinco2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
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
void cincoporcinco25(Mat laWea26){
    for(int y=384 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 25);
            Mat miniatura = CropCincoporcinco(laWea26, x, y, 128, 96, nombre);
            JoinCincoporcinco(laWea26,miniatura,300,50);
        }
    }
}

void cincoporcinco24(Mat laWea25){
    for(int y=384 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 24);
            Mat miniatura = CropCincoporcinco(laWea25, x, y, 128, 96, nombre);
            cincoporcinco25(laWea25);
            JoinCincoporcinco(laWea25,miniatura,300,50);
        }
    }
}

void cincoporcinco23(Mat laWea24){
    for(int y=384 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 23);
            Mat miniatura = CropCincoporcinco(laWea24, x, y, 128, 96, nombre);
            cincoporcinco24(laWea24);
            JoinCincoporcinco(laWea24,miniatura,300,50);
        }
    }
}

void cincoporcinco22(Mat laWea23){
    for(int y=384 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 22);
            Mat miniatura = CropCincoporcinco(laWea23, x, y, 128, 96, nombre);
            cincoporcinco23(laWea23);
            JoinCincoporcinco(laWea23,miniatura,200,200);
        }
    }
}

void cincoporcinco21(Mat laWea22){
    for(int y=384 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 21);
            Mat miniatura = CropCincoporcinco(laWea22, x, y, 128, 96, nombre);
            cincoporcinco22(laWea22);
            JoinCincoporcinco(laWea22,miniatura,300,50);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco20(Mat laWea21){
    for(int y=288 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 20);
            Mat miniatura = CropCincoporcinco(laWea21, x, y, 128, 96, nombre);
            cincoporcinco21(laWea21);
            JoinCincoporcinco(laWea21,miniatura,300,50);
        }
    }
}

void cincoporcinco19(Mat laWea20){
    for(int y=288 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 19);
            Mat miniatura = CropCincoporcinco(laWea20, x, y, 128, 96, nombre);
            cincoporcinco20(laWea20);
            JoinCincoporcinco(laWea20,miniatura,300,50);
        }
    }
}

void cincoporcinco18(Mat laWea19){
    for(int y=288 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 18);
            Mat miniatura = CropCincoporcinco(laWea19, x, y, 128, 96, nombre);
            cincoporcinco19(laWea19);
            JoinCincoporcinco(laWea19,miniatura,300,50);
        }
    }
}

void cincoporcinco17(Mat laWea18){
    for(int y=288 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 17);
            Mat miniatura = CropCincoporcinco(laWea18, x, y, 128, 96, nombre);
            cincoporcinco18(laWea18);
            JoinCincoporcinco(laWea18,miniatura,200,200);
        }
    }
}

void cincoporcinco16(Mat laWea17){
    for(int y=288 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 16);
            Mat miniatura = CropCincoporcinco(laWea17, x, y, 128, 96, nombre);
            cincoporcinco17(laWea17);
            JoinCincoporcinco(laWea17,miniatura,300,50);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco15(Mat laWea16){
    for(int y=192 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 15);
            Mat miniatura = CropCincoporcinco(laWea16, x, y, 128, 96, nombre);
            cincoporcinco16(laWea16);
            JoinCincoporcinco(laWea16,miniatura,300,50);
        }
    }
}

void cincoporcinco14(Mat laWea15){
    for(int y=192 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 14);
            Mat miniatura = CropCincoporcinco(laWea15, x, y, 128, 96, nombre);
            cincoporcinco15(laWea15);
            JoinCincoporcinco(laWea15,miniatura,300,50);
        }
    }
}

void cincoporcinco13(Mat laWea14){
    for(int y=192 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 13);
            Mat miniatura = CropCincoporcinco(laWea14, x, y, 128, 96, nombre);
            cincoporcinco14(laWea14);
            JoinCincoporcinco(laWea14,miniatura,300,50);
        }
    }
}

void cincoporcinco12(Mat laWea13){
    for(int y=192 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 12);
            Mat miniatura = CropCincoporcinco(laWea13, x, y, 128, 96, nombre);
            cincoporcinco13(laWea13);
            JoinCincoporcinco(laWea13,miniatura,200,200);
        }
    }
}

void cincoporcinco11(Mat laWea12){
    for(int y=192 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 11);
            Mat miniatura = CropCincoporcinco(laWea12, x, y, 128, 96, nombre);
            cincoporcinco12(laWea12);
            JoinCincoporcinco(laWea12,miniatura,300,50);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco10(Mat laWea11){
    for(int y=96 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 10);
            Mat miniatura = CropCincoporcinco(laWea11, x, y, 128, 96, nombre);
            cincoporcinco11(laWea11);
            JoinCincoporcinco(laWea11,miniatura,300,50);
        }
    }
}

void cincoporcinco9(Mat laWea10){
    for(int y=96 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropCincoporcinco(laWea10, x, y, 128, 96, nombre);
            cincoporcinco10(laWea10);
            JoinCincoporcinco(laWea10,miniatura,300,50);
        }
    }
}

void cincoporcinco8(Mat laWea9){
    for(int y=96 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropCincoporcinco(laWea9, x, y, 128, 96, nombre);
            cincoporcinco9(laWea9);
            JoinCincoporcinco(laWea9,miniatura,300,50);
        }
    }
}

void cincoporcinco7(Mat laWea8){
    for(int y=96 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 7);
            Mat miniatura = CropCincoporcinco(laWea8, x, y, 128, 96, nombre);
            cincoporcinco8(laWea8);
            JoinCincoporcinco(laWea8,miniatura,200,200);
        }
    }
}

void cincoporcinco6(Mat laWea7){
    for(int y=96 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropCincoporcinco(laWea7, x, y, 128, 96, nombre);
            cincoporcinco7(laWea7);
            JoinCincoporcinco(laWea7,miniatura,300,50);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco5(Mat laWea6){
    for(int y=0 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropCincoporcinco(laWea6, x, y, 128, 96, nombre);
            cincoporcinco6(laWea6);
            JoinCincoporcinco(laWea6,miniatura,300,50);
        }
    }
}

void cincoporcinco4(Mat laWea5){
    for(int y=0 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropCincoporcinco(laWea5, x, y, 128, 96, nombre);
            cincoporcinco5(laWea5);
            JoinCincoporcinco(laWea5,miniatura,300,50);
        }
    }
}

void cincoporcinco3(Mat laWea4){
    for(int y=0 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropCincoporcinco(laWea4, x, y, 128, 96, nombre);
            cincoporcinco4(laWea4);
            JoinCincoporcinco(laWea4,miniatura,300,50);
        }
    }
}

void cincoporcinco2(Mat laWea3){
    for(int y=0 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropCincoporcinco(laWea3, x, y, 128, 96, nombre);
            cincoporcinco3(laWea3);
            JoinCincoporcinco(laWea3,miniatura,200,200);
        }
    }
}

void cincoporcinco1(Mat laWea2){
    for(int y=0 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropCincoporcinco(laWea2, x, y, 128, 96, nombre);
            cincoporcinco2(laWea2);
            JoinCincoporcinco(laWea2,miniatura,300,50);
        }
    }
}