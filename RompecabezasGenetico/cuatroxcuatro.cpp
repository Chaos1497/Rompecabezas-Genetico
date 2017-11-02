#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include "Individuos_estructura.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include "Genetic.h"

using namespace cv;
using namespace std;
Mat uno4,dos4,tres4,cuatro4,cinco4,seis4,siete4,ocho4,nueve4,diez4,once4,doce4,trece4,catorce4,quince4,dieciseis4,LW4;
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
Mat CropCuatroporcuatro(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void Join4(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita.jpg",m_image);
}
void Join42(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita2.jpg",m_image);
}
void Join43(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita3.jpg",m_image);
}
void Join44(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita4.jpg",m_image);
}
void Join45(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita5.jpg",m_image);
}
void Join46(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita6.jpg",m_image);
}
void Join47(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita7.jpg",m_image);
}
void Join48(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita8.jpg",m_image);
}
void Join49(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita9.jpg",m_image);
}
void Join410(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita10.jpg",m_image);
}
void Join411(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita11.jpg",m_image);
}
void Join412(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita12.jpg",m_image);
}
void Join413(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita13.jpg",m_image);
}
void Join414(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita14.jpg",m_image);
}
void Join415(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita15.jpg",m_image);
}
void Join416(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa16",m_image);
    imwrite("Escrita16.jpg",m_image);
    waitKey(2000);
}
void mostrar4(Tlista TT){
    int pos=0;
    while(TT!=NULL){
        if(pos==0){
            if(TT->nro==0){
                Join4(LW4,uno4,480,360);
            }else if(TT->nro==1){
                Join4(LW4,dos4,480,360);
            }else if(TT->nro==2){
                Join4(LW4,tres4,480,360);
            }else if(TT->nro==3){
                Join4(LW4,cuatro4,480,360);
            }else if(TT->nro==4){
                Join4(LW4,cinco4,480,360);
            }else if(TT->nro==5){
                Join4(LW4,seis4,480,360);
            }else if(TT->nro==6){
                Join4(LW4,siete4,480,360);
            }else if(TT->nro==7){
                Join4(LW4,ocho4,480,360);
            }else if(TT->nro==8){
                Join4(LW4,nueve4,480,360);
            }else if(TT->nro==9){
                Join4(LW4,diez4,480,360);
            }else if(TT->nro==10){
                Join4(LW4,once4,480,360);
            }else if(TT->nro==11){
                Join4(LW4,doce4,480,360);
            }else if(TT->nro==12){
                Join4(LW4,trece4,480,360);
            }else if(TT->nro==13){
                Join4(LW4,catorce4,480,360);
            }else if(TT->nro==14){
                Join4(LW4,quince4,480,360);
            }else if(TT->nro==15){
                Join4(LW4,dieciseis4,480,360);
            }
        }else if(pos==1){ //Join42(LW4,quince4,320,360);
            if(TT->nro==0){
                Join42(LW4,uno4,320,360);
            }else if(TT->nro==1){
                Join42(LW4,dos4,320,360);
            }else if(TT->nro==2){
                Join42(LW4,tres4,320,360);
            }else if(TT->nro==3){
                Join42(LW4,cuatro4,320,360);
            }else if(TT->nro==4){
                Join42(LW4,cinco4,320,360);
            }else if(TT->nro==5){
                Join42(LW4,seis4,320,360);
            }else if(TT->nro==6){
                Join42(LW4,siete4,320,360);
            }else if(TT->nro==7){
                Join42(LW4,ocho4,320,360);
            }else if(TT->nro==8){
                Join42(LW4,nueve4,320,360);
            }else if(TT->nro==9){
                Join42(LW4,diez4,320,360);
            }else if(TT->nro==10){
                Join42(LW4,once4,320,360);
            }else if(TT->nro==11){
                Join42(LW4,doce4,320,360);
            }else if(TT->nro==12){
                Join42(LW4,trece4,320,360);
            }else if(TT->nro==13){
                Join42(LW4,catorce4,320,360);
            }else if(TT->nro==14){
                Join42(LW4,quince4,320,360);
            }else if(TT->nro==15){
                Join42(LW4,dieciseis4,320,360);
            }

        }else if(pos==2){//Join43(LW4,catorce4,160,360);
            if(TT->nro==0){
                Join43(LW4,uno4,160,360);
            }else if(TT->nro==1){
                Join43(LW4,dos4,160,360);
            }else if(TT->nro==2){
                Join43(LW4,tres4,160,360);
            }else if(TT->nro==3){
                Join43(LW4,cuatro4,160,360);
            }else if(TT->nro==4){
                Join43(LW4,cinco4,160,360);
            }else if(TT->nro==5){
                Join43(LW4,seis4,160,360);
            }else if(TT->nro==6){
                Join43(LW4,siete4,160,360);
            }else if(TT->nro==7){
                Join43(LW4,ocho4,160,360);
            }else if(TT->nro==8){
                Join43(LW4,nueve4,160,360);
            }else if(TT->nro==9){
                Join43(LW4,diez4,160,360);
            }else if(TT->nro==10){
                Join43(LW4,once4,160,360);
            }else if(TT->nro==11){
                Join43(LW4,doce4,160,360);
            }else if(TT->nro==12){
                Join43(LW4,trece4,160,360);
            }else if(TT->nro==13){
                Join43(LW4,catorce4,160,360);
            }else if(TT->nro==14){
                Join43(LW4,quince4,160,360);
            }else if(TT->nro==15){
                Join43(LW4,dieciseis4,160,360);
            }
        }else if(pos==3){//Join44(LW4,trece4,0,360);
            if(TT->nro==0){
                Join44(LW4,uno4,0,360);
            }else if(TT->nro==1){
                Join44(LW4,dos4,0,360);
            }else if(TT->nro==2){
                Join44(LW4,tres4,0,360);
            }else if(TT->nro==3){
                Join44(LW4,cuatro4,0,360);
            }else if(TT->nro==4){
                Join44(LW4,cinco4,0,360);
            }else if(TT->nro==5){
                Join44(LW4,seis4,0,360);
            }else if(TT->nro==6){
                Join44(LW4,siete4,0,360);
            }else if(TT->nro==7){
                Join44(LW4,ocho4,0,360);
            }else if(TT->nro==8){
                Join44(LW4,nueve4,0,360);
            }else if(TT->nro==9){
                Join44(LW4,diez4,0,360);
            }else if(TT->nro==10){
                Join44(LW4,once4,0,360);
            }else if(TT->nro==11){
                Join44(LW4,doce4,0,360);
            }else if(TT->nro==12){
                Join44(LW4,trece4,0,360);
            }else if(TT->nro==13){
                Join44(LW4,catorce4,0,360);
            }else if(TT->nro==14){
                Join44(LW4,quince4,0,360);
            }else if(TT->nro==15){
                Join44(LW4,dieciseis4,0,360);
            }
        }else if(pos==4){//Join45(laWea,cinco4,480,120);
            if(TT->nro==0){
                Join45(LW4,uno4,480,120);
            }else if(TT->nro==1){
                Join45(LW4,dos4,480,120);
            }else if(TT->nro==2){
                Join45(LW4,tres4,480,120);
            }else if(TT->nro==3){
                Join45(LW4,cuatro4,480,120);
            }else if(TT->nro==4){
                Join45(LW4,cinco4,480,120);
            }else if(TT->nro==5){
                Join45(LW4,seis4,480,120);
            }else if(TT->nro==6){
                Join45(LW4,siete4,480,120);
            }else if(TT->nro==7){
                Join45(LW4,ocho4,480,120);
            }else if(TT->nro==8){
                Join45(LW4,nueve4,480,120);
            }else if(TT->nro==9){
                Join45(LW4,diez4,480,120);
            }else if(TT->nro==10){
                Join45(LW4,once4,480,120);
            }else if(TT->nro==11){
                Join45(LW4,doce4,480,120);
            }else if(TT->nro==12){
                Join45(LW4,trece4,480,120);
            }else if(TT->nro==13){
                Join45(LW4,catorce4,480,120);
            }else if(TT->nro==14){
                Join45(LW4,quince4,480,120);
            }else if(TT->nro==15){
                Join45(LW4,dieciseis4,480,120);
            }
        }else if(pos==5){ //Join46(laWea,seis4,320,120);
            if(TT->nro==0){
                Join46(LW4,uno4,320,120);
            }else if(TT->nro==1){
                Join46(LW4,dos4,320,120);
            }else if(TT->nro==2){
                Join46(LW4,tres4,320,120);
            }else if(TT->nro==3){
                Join46(LW4,cuatro4,320,120);
            }else if(TT->nro==4){
                Join46(LW4,cinco4,320,120);
            }else if(TT->nro==5){
                Join46(LW4,seis4,320,120);
            }else if(TT->nro==6){
                Join46(LW4,siete4,320,120);
            }else if(TT->nro==7){
                Join46(LW4,ocho4,320,120);
            }else if(TT->nro==8){
                Join46(LW4,nueve4,320,120);
            }else if(TT->nro==9){
                Join46(LW4,diez4,320,120);
            }else if(TT->nro==10){
                Join46(LW4,once4,320,120);
            }else if(TT->nro==11){
                Join46(LW4,doce4,320,120);
            }else if(TT->nro==12){
                Join46(LW4,trece4,320,120);
            }else if(TT->nro==13){
                Join46(LW4,catorce4,320,120);
            }else if(TT->nro==14){
                Join46(LW4,quince4,320,120);
            }else if(TT->nro==15){
                Join46(LW4,dieciseis4,320,120);
            }

        }else if(pos==6){//Join47(laWea,siete4,160,120);
            if(TT->nro==0){
                Join47(LW4,uno4,160,120);
            }else if(TT->nro==1){
                Join47(LW4,dos4,160,120);
            }else if(TT->nro==2){
                Join47(LW4,tres4,160,120);
            }else if(TT->nro==3){
                Join47(LW4,cuatro4,160,120);
            }else if(TT->nro==4){
                Join47(LW4,cinco4,160,120);
            }else if(TT->nro==5){
                Join47(LW4,seis4,160,120);
            }else if(TT->nro==6){
                Join47(LW4,siete4,160,120);
            }else if(TT->nro==7){
                Join47(LW4,ocho4,160,120);
            }else if(TT->nro==8){
                Join47(LW4,nueve4,160,120);
            }else if(TT->nro==9){
                Join47(LW4,diez4,160,120);
            }else if(TT->nro==10){
                Join47(LW4,once4,160,120);
            }else if(TT->nro==11){
                Join47(LW4,doce4,160,120);
            }else if(TT->nro==12){
                Join47(LW4,trece4,160,120);
            }else if(TT->nro==13){
                Join47(LW4,catorce4,160,120);
            }else if(TT->nro==14){
                Join47(LW4,quince4,160,120);
            }else if(TT->nro==15){
                Join47(LW4,dieciseis4,160,120);
            }
        }else if(pos==7){//Join48(laWea,ocho4,0,120);
            if(TT->nro==0){
                Join48(LW4,uno4,0,120);
            }else if(TT->nro==1){
                Join48(LW4,dos4,0,120);
            }else if(TT->nro==2){
                Join48(LW4,tres4,0,120);
            }else if(TT->nro==3){
                Join48(LW4,cuatro4,0,120);
            }else if(TT->nro==4){
                Join48(LW4,cinco4,0,120);
            }else if(TT->nro==5){
                Join48(LW4,seis4,0,120);
            }else if(TT->nro==6){
                Join48(LW4,siete4,0,120);
            }else if(TT->nro==7){
                Join48(LW4,ocho4,0,120);
            }else if(TT->nro==8){
                Join48(LW4,nueve4,0,120);
            }else if(TT->nro==9){
                Join48(LW4,diez4,0,120);
            }else if(TT->nro==10){
                Join48(LW4,once4,0,120);
            }else if(TT->nro==11){
                Join48(LW4,doce4,0,120);
            }else if(TT->nro==12){
                Join48(LW4,trece4,0,120);
            }else if(TT->nro==13){
                Join48(LW4,catorce4,0,120);
            }else if(TT->nro==14){
                Join48(LW4,quince4,0,120);
            }else if(TT->nro==15){
                Join48(LW4,dieciseis4,0,120);
            }
        }else if(pos==8){//Join49(laWea,nueve4,480,240);
            if(TT->nro==0){
                Join49(LW4,uno4,480,240);
            }else if(TT->nro==1){
                Join49(LW4,dos4,480,240);
            }else if(TT->nro==2){
                Join49(LW4,tres4,480,240);
            }else if(TT->nro==3){
                Join49(LW4,cuatro4,480,240);
            }else if(TT->nro==4){
                Join49(LW4,cinco4,480,240);
            }else if(TT->nro==5){
                Join49(LW4,seis4,480,240);
            }else if(TT->nro==6){
                Join49(LW4,siete4,480,240);
            }else if(TT->nro==7){
                Join49(LW4,ocho4,480,240);
            }else if(TT->nro==8){
                Join49(LW4,nueve4,480,240);
            }else if(TT->nro==9){
                Join49(LW4,diez4,480,240);
            }else if(TT->nro==10){
                Join49(LW4,once4,480,240);
            }else if(TT->nro==11){
                Join49(LW4,doce4,480,240);
            }else if(TT->nro==12){
                Join49(LW4,trece4,480,240);
            }else if(TT->nro==13){
                Join49(LW4,catorce4,480,240);
            }else if(TT->nro==14){
                Join49(LW4,quince4,480,240);
            }else if(TT->nro==15){
                Join49(LW4,dieciseis4,480,240);
            }
        }else if(pos==9){ //Join410(laWea,diez4,320,240);
            if(TT->nro==0){
                Join410(LW4,uno4,320,240);
            }else if(TT->nro==1){
                Join410(LW4,dos4,320,240);
            }else if(TT->nro==2){
                Join410(LW4,tres4,320,240);
            }else if(TT->nro==3){
                Join410(LW4,cuatro4,320,240);
            }else if(TT->nro==4){
                Join410(LW4,cinco4,320,240);
            }else if(TT->nro==5){
                Join410(LW4,seis4,320,240);
            }else if(TT->nro==6){
                Join410(LW4,siete4,320,240);
            }else if(TT->nro==7){
                Join410(LW4,ocho4,320,240);
            }else if(TT->nro==8){
                Join410(LW4,nueve4,320,240);
            }else if(TT->nro==9){
                Join410(LW4,diez4,320,240);
            }else if(TT->nro==10){
                Join410(LW4,once4,320,240);
            }else if(TT->nro==11){
                Join410(LW4,doce4,320,240);
            }else if(TT->nro==12){
                Join410(LW4,trece4,320,240);
            }else if(TT->nro==13){
                Join410(LW4,catorce4,320,240);
            }else if(TT->nro==14){
                Join410(LW4,quince4,320,240);
            }else if(TT->nro==15){
                Join410(LW4,dieciseis4,320,240);
            }

        }else if(pos==10){//Join411(laWea,once4,160,240);
            if(TT->nro==0){
                Join411(LW4,uno4,160,240);
            }else if(TT->nro==1){
                Join411(LW4,dos4,160,240);
            }else if(TT->nro==2){
                Join411(LW4,tres4,160,240);
            }else if(TT->nro==3){
                Join411(LW4,cuatro4,160,240);
            }else if(TT->nro==4){
                Join411(LW4,cinco4,160,240);
            }else if(TT->nro==5){
                Join411(LW4,seis4,160,240);
            }else if(TT->nro==6){
                Join411(LW4,siete4,160,240);
            }else if(TT->nro==7){
                Join411(LW4,ocho4,160,240);
            }else if(TT->nro==8){
                Join411(LW4,nueve4,160,240);
            }else if(TT->nro==9){
                Join411(LW4,diez4,160,240);
            }else if(TT->nro==10){
                Join411(LW4,once4,160,240);
            }else if(TT->nro==11){
                Join411(LW4,doce4,160,240);
            }else if(TT->nro==12){
                Join411(LW4,trece4,160,240);
            }else if(TT->nro==13){
                Join411(LW4,catorce4,160,240);
            }else if(TT->nro==14){
                Join411(LW4,quince4,160,240);
            }else if(TT->nro==15){
                Join411(LW4,dieciseis4,160,240);
            }
        }else if(pos==11){//Join412(laWea,doce4,0,240);
            if(TT->nro==0){
                Join412(LW4,uno4,0,240);
            }else if(TT->nro==1){
                Join412(LW4,dos4,0,240);
            }else if(TT->nro==2){
                Join412(LW4,tres4,0,240);
            }else if(TT->nro==3){
                Join412(LW4,cuatro4,0,240);
            }else if(TT->nro==4){
                Join412(LW4,cinco4,0,240);
            }else if(TT->nro==5){
                Join412(LW4,seis4,0,240);
            }else if(TT->nro==6){
                Join412(LW4,siete4,0,240);
            }else if(TT->nro==7){
                Join412(LW4,ocho4,0,240);
            }else if(TT->nro==8){
                Join412(LW4,nueve4,0,240);
            }else if(TT->nro==9){
                Join412(LW4,diez4,0,240);
            }else if(TT->nro==10){
                Join412(LW4,once4,0,240);
            }else if(TT->nro==11){
                Join412(LW4,doce4,0,240);
            }else if(TT->nro==12){
                Join412(LW4,trece4,0,240);
            }else if(TT->nro==13){
                Join412(LW4,catorce4,0,240);
            }else if(TT->nro==14){
                Join412(LW4,quince4,0,240);
            }else if(TT->nro==15){
                Join412(LW4,dieciseis4,0,240);
            }
        }else if(pos==12){//Join413(laWea,cuatro4,480,0);
            if(TT->nro==0){
                Join413(LW4,uno4,480,0);
            }else if(TT->nro==1){
                Join413(LW4,dos4,480,0);
            }else if(TT->nro==2){
                Join413(LW4,tres4,480,0);
            }else if(TT->nro==3){
                Join413(LW4,cuatro4,480,0);
            }else if(TT->nro==4){
                Join413(LW4,cinco4,480,0);
            }else if(TT->nro==5){
                Join413(LW4,seis4,480,0);
            }else if(TT->nro==6){
                Join413(LW4,siete4,480,0);
            }else if(TT->nro==7){
                Join413(LW4,ocho4,480,0);
            }else if(TT->nro==8){
                Join413(LW4,nueve4,480,0);
            }else if(TT->nro==9){
                Join413(LW4,diez4,480,0);
            }else if(TT->nro==10){
                Join413(LW4,once4,480,0);
            }else if(TT->nro==11){
                Join413(LW4,doce4,480,0);
            }else if(TT->nro==12){
                Join413(LW4,trece4,480,0);
            }else if(TT->nro==13){
                Join413(LW4,catorce4,480,0);
            }else if(TT->nro==14){
                Join413(LW4,quince4,480,0);
            }else if(TT->nro==15){
                Join413(LW4,dieciseis4,480,0);
            }
        }else if(pos==13){ //Join414(laWea,tres4,320,0);
            if(TT->nro==0){
                Join414(LW4,uno4,320,0);
            }else if(TT->nro==1){
                Join414(LW4,dos4,320,0);
            }else if(TT->nro==2){
                Join414(LW4,tres4,320,0);
            }else if(TT->nro==3){
                Join414(LW4,cuatro4,320,0);
            }else if(TT->nro==4){
                Join414(LW4,cinco4,320,0);
            }else if(TT->nro==5){
                Join414(LW4,seis4,320,0);
            }else if(TT->nro==6){
                Join414(LW4,siete4,320,0);
            }else if(TT->nro==7){
                Join414(LW4,ocho4,320,0);
            }else if(TT->nro==8){
                Join414(LW4,nueve4,320,0);
            }else if(TT->nro==9){
                Join414(LW4,diez4,320,0);
            }else if(TT->nro==10){
                Join414(LW4,once4,320,0);
            }else if(TT->nro==11){
                Join414(LW4,doce4,320,0);
            }else if(TT->nro==12){
                Join414(LW4,trece4,320,0);
            }else if(TT->nro==13){
                Join414(LW4,catorce4,320,0);
            }else if(TT->nro==14){
                Join414(LW4,quince4,320,0);
            }else if(TT->nro==15){
                Join414(LW4,dieciseis4,320,0);
            }

        }else if(pos==14){//Join415(laWea,dos4,160,0);
            if(TT->nro==0){
                Join415(LW4,uno4,160,0);
            }else if(TT->nro==1){
                Join415(LW4,dos4,160,0);
            }else if(TT->nro==2){
                Join415(LW4,tres4,160,0);
            }else if(TT->nro==3){
                Join415(LW4,cuatro4,160,0);
            }else if(TT->nro==4){
                Join415(LW4,cinco4,160,0);
            }else if(TT->nro==5){
                Join415(LW4,seis4,160,0);
            }else if(TT->nro==6){
                Join415(LW4,siete4,160,0);
            }else if(TT->nro==7){
                Join415(LW4,ocho4,160,0);
            }else if(TT->nro==8){
                Join415(LW4,nueve4,160,0);
            }else if(TT->nro==9){
                Join415(LW4,diez4,160,0);
            }else if(TT->nro==10){
                Join415(LW4,once4,160,0);
            }else if(TT->nro==11){
                Join415(LW4,doce4,160,0);
            }else if(TT->nro==12){
                Join415(LW4,trece4,160,0);
            }else if(TT->nro==13){
                Join415(LW4,catorce4,160,0);
            }else if(TT->nro==14){
                Join415(LW4,quince4,160,0);
            }else if(TT->nro==15){
                Join415(LW4,dieciseis4,160,0);
            }
        }else if(pos==15){//Join416(laWea,uno4,0,0);
            if(TT->nro==0){
                Join416(LW4,uno4,0,0);
            }else if(TT->nro==1){
                Join416(LW4,dos4,0,0);
            }else if(TT->nro==2){
                Join416(LW4,tres4,0,0);
            }else if(TT->nro==3){
                Join416(LW4,cuatro4,0,0);
            }else if(TT->nro==4){
                Join416(LW4,cinco4,0,0);
            }else if(TT->nro==5){
                Join416(LW4,seis4,0,0);
            }else if(TT->nro==6){
                Join416(LW4,siete4,0,0);
            }else if(TT->nro==7){
                Join416(LW4,ocho4,0,0);
            }else if(TT->nro==8){
                Join416(LW4,nueve4,0,0);
            }else if(TT->nro==9){
                Join416(LW4,diez4,0,0);
            }else if(TT->nro==10){
                Join416(LW4,once4,0,0);
            }else if(TT->nro==11){
                Join416(LW4,doce4,0,0);
            }else if(TT->nro==12){
                Join416(LW4,trece4,0,0);
            }else if(TT->nro==13){
                Join416(LW4,catorce4,0,0);
            }else if(TT->nro==14){
                Join416(LW4,quince4,0,0);
            }else if(TT->nro==15){
                Join416(LW4,dieciseis4,0,0);
            }
        }

        pos+=1;
        TT=TT->sgte;

    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
int sobreescribirIMG4(Mat laWea){
     uno4 = imread("miniatura16.jpg",1);
     dos4 = imread("miniatura15.jpg",1);
     tres4 = imread("miniatura14.jpg",1);
     cuatro4 = imread("miniatura13.jpg",1);

     cinco4 = imread("miniatura8.jpg",1);
     seis4 = imread("miniatura7.jpg",1);
     siete4 = imread("miniatura6.jpg",1);
     ocho4 = imread("miniatura5.jpg",1);

     nueve4 = imread("miniatura12.jpg",1);
     diez4 = imread("miniatura11.jpg",1);
     once4 = imread("miniatura10.jpg",1);
     doce4 = imread("miniatura9.jpg",1);

     trece4 = imread("miniatura4.jpg",1);
     catorce4 = imread("miniatura3.jpg",1);
     quince4 = imread("miniatura2.jpg",1);
    dieciseis4 = imread("miniatura1.jpg",1);
    LW4=laWea;
    int gen=0;
    Poblacion M2=Muestra;
    int fin=0;
    while(M2->sgte->sgte!=NULL){
        M2=M2->sgte;
        M2=M2->sgte;
        fin+=1;
    }
    while(Muestra->sgte->sgte!=NULL){
        if(gen==fin){
            cout<<"FINALIZADO";
            waitKey(0);
        }
        cout<<"GENERACION \n";
        cout<<gen;

        if(Muestra->sgte!=NULL){
            mostrar4(Muestra->sgte->individuo);
            waitKey(4000);
        }

        if(Muestra->sgte->sgte!=NULL){
            mostrar4(Muestra->sgte->sgte->individuo);
            waitKey(4000);
        }
        mostrar4(Muestra->individuo);
        waitKey(4000);
        Muestra=Muestra->sgte;
        Muestra=Muestra->sgte;
        gen+=1;

    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cuatroporcuatro16(Mat laWea17){
    for(int y=360 ; y<=480; y+=120){
        for(int x=480; x<=640; x+=160){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 16);
            Mat miniatura = CropCuatroporcuatro(laWea17, x, y, 160, 120, nombre);
            Join4(laWea17,miniatura,300,50);
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