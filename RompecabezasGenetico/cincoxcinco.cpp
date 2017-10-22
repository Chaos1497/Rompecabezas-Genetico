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
    //imshow("Cortada",cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void JoinCincoporcinco(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa",m_image);
    //imshow("Pullita",s_image);
    imwrite("Escrita.jpg",m_image);
    //waitKey(0);
}

void JoinCincoporcinco2(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa2",m_image);
    //imshow("Pullita2",s_image);
    imwrite("Escrita2.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco3(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa3",m_image);
    //imshow("Pullita3",s_image);
    imwrite("Escrita3.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa4",m_image);
    //imshow("Pullita4",s_image);
    imwrite("Escrita4.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco5(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa5",m_image);
    //imshow("Pullita5",s_image);
    imwrite("Escrita5.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco6(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa6",m_image);
    //imshow("Pullita6",s_image);
    imwrite("Escrita6.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco7(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa7",m_image);
    //imshow("Pullita7",s_image);
    imwrite("Escrita7.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco8(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa8",m_image);
    //imshow("Pullita8",s_image);
    imwrite("Escrita8.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco9(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa9",m_image);
    //imshow("Pullita9",s_image);
    imwrite("Escrita9.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco10(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa10",m_image);
    //imshow("Pullita10",s_image);
    imwrite("Escrita10.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco11(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa11",m_image);
    //imshow("Pullita11",s_image);
    imwrite("Escrita11.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco12(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa12",m_image);
    //imshow("Pullita12",s_image);
    imwrite("Escrita12.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco13(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa13",m_image);
    //imshow("Pullita13",s_image);
    imwrite("Escrita13.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco14(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa14",m_image);
    //imshow("Pullita14",s_image);
    imwrite("Escrita14.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco15(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa15",m_image);
    //imshow("Pullita15",s_image);
    imwrite("Escrita15.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco16(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa16",m_image);
    //imshow("Pullita16",s_image);
    imwrite("Escrita16.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco17(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa17",m_image);
    //imshow("Pullita17",s_image);
    imwrite("Escrita17.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco18(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa18",m_image);
    //imshow("Pullita18",s_image);
    imwrite("Escrita18.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco19(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa19",m_image);
    //imshow("Pullita19",s_image);
    imwrite("Escrita19.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco20(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa20",m_image);
    //imshow("Pullita20",s_image);
    imwrite("Escrita20.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco21(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa21",m_image);
    //imshow("Pullita21",s_image);
    imwrite("Escrita21.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco22(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa22",m_image);
    //imshow("Pullita22",s_image);
    imwrite("Escrita22.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco23(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa23",m_image);
    //imshow("Pullita23",s_image);
    imwrite("Escrita23.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco24(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    //imshow("Completa24",m_image);
    //imshow("Pullita24",s_image);
    imwrite("Escrita24.jpg",m_image);
    //waitKey(0);
}
void JoinCincoporcinco25(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa25",m_image);
    //imshow("Pullita25",s_image);
    imwrite("Escrita25.jpg",m_image);
    waitKey(0);
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

int sobreescribirIMG5(Mat laWea){
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
    Mat diecisiete = imread("miniatura17.jpg",1);
    Mat dieciocho = imread("miniatura18.jpg",1);
    Mat diecinueve = imread("miniatura19.jpg",1);
    Mat veinte = imread("miniatura20.jpg",1);
    Mat veintiuno = imread("miniatura21.jpg",1);
    Mat veintidos = imread("miniatura22.jpg",1);
    Mat veintitres = imread("miniatura23.jpg",1);
    Mat veinticuatro = imread("miniatura24.jpg",1);
    Mat veinticinco = imread("miniatura25.jpg",1);
    while(true){
        JoinCincoporcinco(laWea,cuatro,512,384);
        JoinCincoporcinco2(laWea,uno,385,384);
        JoinCincoporcinco3(laWea,dos,257,384);
        JoinCincoporcinco4(laWea,tres,129,384);
        JoinCincoporcinco5(laWea,cinco,0,384);
        JoinCincoporcinco6(laWea,nueve,512,288);
        JoinCincoporcinco7(laWea,seis,385,288);
        JoinCincoporcinco8(laWea,ocho,257,288);
        JoinCincoporcinco9(laWea,siete,129,288);
        JoinCincoporcinco10(laWea,trece,0,288);
        JoinCincoporcinco11(laWea,diez,512,192);
        JoinCincoporcinco12(laWea,quince,385,192);
        JoinCincoporcinco13(laWea,once,257,192);
        JoinCincoporcinco14(laWea,dieciseis,129,192);
        JoinCincoporcinco15(laWea,doce,0,192);
        JoinCincoporcinco16(laWea,catorce,512,96);
        JoinCincoporcinco17(laWea,veinticinco,385,96);
        JoinCincoporcinco18(laWea,veinte,257,96);
        JoinCincoporcinco19(laWea,veintitres,129,96);
        JoinCincoporcinco20(laWea,diecisiete,0,96);
        JoinCincoporcinco21(laWea,veintiuno,512,0);
        JoinCincoporcinco22(laWea,dieciocho,385,0);
        JoinCincoporcinco23(laWea,veintidos,257,0);
        JoinCincoporcinco24(laWea,veinticuatro,129,0);
        JoinCincoporcinco25(laWea,diecinueve,0,0);
        break;
    }
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
            sobreescribirIMG5(laWea26);
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
        }
    }
}