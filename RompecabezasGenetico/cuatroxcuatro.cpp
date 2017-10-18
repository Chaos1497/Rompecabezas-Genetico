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
    imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

Mat CropCuatroporcuatro2(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Cortada2",cropped_img);
    imshow("Original2",image);
    return cropped_img;
}

void JoinCuatroporcuatro(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa",m_image);
    imshow("Pullita",s_image);
    waitKey(0);
}

void JoinCuatroporcuatro2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
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

void cuatroporcuatro16(Mat laWea17){
    for(int y=360 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 16);
            Mat miniatura = CropCuatroporcuatro(laWea17, x, y, 160, 120, nombre);
            JoinCuatroporcuatro(laWea17,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea16,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea15,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea14,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea13,miniatura,200,200);
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
            JoinCuatroporcuatro(laWea12,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea11,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea10,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea9,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea8,miniatura,200,200);
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
            JoinCuatroporcuatro(laWea7,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea6,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea5,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea4,miniatura,300,50);
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
            JoinCuatroporcuatro(laWea3,miniatura,200,200);
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
            JoinCuatroporcuatro(laWea2,miniatura,300,50);
        }
    }
}