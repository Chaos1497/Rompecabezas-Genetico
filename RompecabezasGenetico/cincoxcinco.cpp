#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include "Individuos_estructura.h"
#include "Genetic.h"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int tiempo5=2000;
int continuar5=1;
int disminuir5=1; //cuando se desea no mostrar una generacion
int salto_generaciones5=0;
void revisar5(int cont){

    int decision;
    cout<<"\n 1.Acelerar \n 3.Acelerar sin preguntar \n 2.Pausar \n 4.Continuar sin preguntar \n 5.Detener \n 6.Saltar n generaciones \n Ingrese su eleccion:";
    cin>>decision;
    if(decision==1){
        tiempo5-=500;
    }else if(decision==2){
        while(decision!=1){
            cout<<"\n Reanudar? 1:SI 2:NO \n";
            cin>>decision;
        }
    }else if(decision==3){
        tiempo5-=1000;
        continuar5=0;

    }else if(decision==4){
        continuar5=0;
    }
    else if(decision==5){
        while(true) {
            cin >> decision;
        }
    }
    else if(decision==6){
        int generaciones_saltar=0;
        cout<<"\n¿Cuantas generaciones desea saltarse? \n";
        cin>>generaciones_saltar;
        disminuir5=1;
        salto_generaciones5=3*generaciones_saltar;
    }
}
using namespace cv;
using namespace std;
Mat uno5,dos5,tres5,cuatro5,cinco5,seis5,siete5,ocho5,nueve5,diez5,once5,doce5,trece5,catorce5,quince5,dieciseis5,diecisiete5,dieciocho5,diecinueve5,veinte5,veintiuno5,veintidos5,veintitres5,veinticuatro5,veinticinco5,LW5;

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
Mat CropCincoporcinco(Mat image, int x, int y, int width, int height, char *name){
    Mat _roi(image, Rect(x, y, width, height));
    Mat cropped_img;
    _roi.copyTo(cropped_img);
    imwrite(name, cropped_img);
    imshow("Original",image);
    return cropped_img;
}

void Join5(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita.jpg",m_image);
}
void Join52(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita2.jpg",m_image);
}
void Join53(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita3.jpg",m_image);
}
void Join54(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita4.jpg",m_image);
}
void Join55(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita5.jpg",m_image);
}
void Join56(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita6.jpg",m_image);
}
void Join57(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita7.jpg",m_image);
}
void Join58(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita8.jpg",m_image);
}
void Join59(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita9.jpg",m_image);
}
void Join510(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita10.jpg",m_image);
}
void Join511(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita11.jpg",m_image);
}
void Join512(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita12.jpg",m_image);
}
void Join513(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita13.jpg",m_image);
}
void Join514(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita14.jpg",m_image);
}
void Join515(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita15.jpg",m_image);
}
void Join516(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita16.jpg",m_image);
}
void Join517(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita17.jpg",m_image);
}
void Join518(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita18.jpg",m_image);
}
void Join519(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita19.jpg",m_image);
}
void Join520(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita20.jpg",m_image);
}
void Join521(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita21.jpg",m_image);
}
void Join522(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita22.jpg",m_image);
}
void Join523(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita23.jpg",m_image);
}
void Join524(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imwrite("Escrita24.jpg",m_image);
}
void Join525(Mat& m_image, Mat& s_image, int x_pos, int y_pos){
    s_image.copyTo(m_image(Rect(x_pos, y_pos, s_image.cols, s_image.rows)));
    imshow("Completa25",m_image);
    imwrite("Escrita25.jpg",m_image);
    waitKey(tiempo5);

}

void mostrar5(Tlista TT){
    int pos=0;
    while(TT!=NULL){
        if(pos==0){
            if(TT->nro==0){
                Join5(LW5,uno5,512,384);
            }else if(TT->nro==1){
                Join5(LW5,dos5,512,384);
            }else if(TT->nro==2){
                Join5(LW5,tres5,512,384);
            }else if(TT->nro==3){
                Join5(LW5,cuatro5,512,384);
            }else if(TT->nro==4){
                Join5(LW5,cinco5,512,384);
            }else if(TT->nro==5){
                Join5(LW5,seis5,512,384);
            }else if(TT->nro==6){
                Join5(LW5,siete5,512,384);
            }else if(TT->nro==7){
                Join5(LW5,ocho5,512,384);
            }else if(TT->nro==8){
                Join5(LW5,nueve5,512,384);
            }else if(TT->nro==9){
                Join5(LW5,diez5,512,384);
            }else if(TT->nro==10){
                Join5(LW5,once5,512,384);
            }else if(TT->nro==11){
                Join5(LW5,doce5,512,384);
            }else if(TT->nro==12){
                Join5(LW5,trece5,512,384);
            }else if(TT->nro==13){
                Join5(LW5,catorce5,512,384);
            }else if(TT->nro==14){
                Join5(LW5,quince5,512,384);
            }else if(TT->nro==15){
                Join5(LW5,dieciseis5,512,384);
            }else if(TT->nro==16){
                Join5(LW5,diecisiete5,512,384);
            }else if(TT->nro==17){
                Join5(LW5,dieciocho5,512,384);
            }else if(TT->nro==18){
                Join5(LW5,diecinueve5,512,384);
            }else if(TT->nro==19){
                Join5(LW5,veinte5,512,384);
            }else if(TT->nro==20){
                Join5(LW5,veintiuno5,512,384);
            }else if(TT->nro==21){
                Join5(LW5,veintidos5,512,384);
            }else if(TT->nro==22){
                Join5(LW5,veintitres5,512,384);
            }else if(TT->nro==23){
                Join5(LW5,veinticuatro5,512,384);
            }else if(TT->nro==24){
                Join5(LW5,veinticinco5,512,384);
            }
        }else if(pos==1){ //Join52(LW5,quince4,385,384);
            if(TT->nro==0){
                Join52(LW5,uno5,385,384);
            }else if(TT->nro==1){
                Join52(LW5,dos5,385,384);
            }else if(TT->nro==2){
                Join52(LW5,tres5,385,384);
            }else if(TT->nro==3){
                Join52(LW5,cuatro5,385,384);
            }else if(TT->nro==4){
                Join52(LW5,cinco5,385,384);
            }else if(TT->nro==5){
                Join52(LW5,seis5,385,384);
            }else if(TT->nro==6){
                Join52(LW5,siete5,385,384);
            }else if(TT->nro==7){
                Join52(LW5,ocho5,385,384);
            }else if(TT->nro==8){
                Join52(LW5,nueve5,385,384);
            }else if(TT->nro==9){
                Join52(LW5,diez5,385,384);
            }else if(TT->nro==10){
                Join52(LW5,once5,385,384);
            }else if(TT->nro==11){
                Join52(LW5,doce5,385,384);
            }else if(TT->nro==12){
                Join52(LW5,trece5,385,384);
            }else if(TT->nro==13){
                Join52(LW5,catorce5,385,384);
            }else if(TT->nro==14){
                Join52(LW5,quince5,385,384);
            }else if(TT->nro==15){
                Join52(LW5,dieciseis5,385,384);
            }else if(TT->nro==16){
                Join52(LW5,diecisiete5,385,384);
            }else if(TT->nro==17){
                Join52(LW5,dieciocho5,385,384);
            }else if(TT->nro==18){
                Join52(LW5,diecinueve5,385,384);
            }else if(TT->nro==19){
                Join52(LW5,veinte5,385,384);
            }else if(TT->nro==20){
                Join52(LW5,veintiuno5,385,384);
            }else if(TT->nro==21){
                Join52(LW5,veintidos5,385,384);
            }else if(TT->nro==22){
                Join52(LW5,veintitres5,385,384);
            }else if(TT->nro==23){
                Join52(LW5,veinticuatro5,385,384);
            }else if(TT->nro==24){
                Join52(LW5,veinticinco5,385,384);
            }

        }else if(pos==2){//Join53(LW5,catorce4,257,384);
            if(TT->nro==0){
                Join53(LW5,uno5,257,384);
            }else if(TT->nro==1){
                Join53(LW5,dos5,257,384);
            }else if(TT->nro==2){
                Join53(LW5,tres5,257,384);
            }else if(TT->nro==3){
                Join53(LW5,cuatro5,257,384);
            }else if(TT->nro==4){
                Join53(LW5,cinco5,257,384);
            }else if(TT->nro==5){
                Join53(LW5,seis5,257,384);
            }else if(TT->nro==6){
                Join53(LW5,siete5,257,384);
            }else if(TT->nro==7){
                Join53(LW5,ocho5,257,384);
            }else if(TT->nro==8){
                Join53(LW5,nueve5,257,384);
            }else if(TT->nro==9){
                Join53(LW5,diez5,257,384);
            }else if(TT->nro==10){
                Join53(LW5,once5,257,384);
            }else if(TT->nro==11){
                Join53(LW5,doce5,257,384);
            }else if(TT->nro==12){
                Join53(LW5,trece5,257,384);
            }else if(TT->nro==13){
                Join53(LW5,catorce5,257,384);
            }else if(TT->nro==14){
                Join53(LW5,quince5,257,384);
            }else if(TT->nro==15){
                Join53(LW5,dieciseis5,257,384);
            }else if(TT->nro==16){
                Join53(LW5,diecisiete5,257,384);
            }else if(TT->nro==17){
                Join53(LW5,dieciocho5,257,384);
            }else if(TT->nro==18){
                Join53(LW5,diecinueve5,257,384);
            }else if(TT->nro==19){
                Join53(LW5,veinte5,257,384);
            }else if(TT->nro==20){
                Join53(LW5,veintiuno5,257,384);
            }else if(TT->nro==21){
                Join53(LW5,veintidos5,257,384);
            }else if(TT->nro==22){
                Join53(LW5,veintitres5,257,384);
            }else if(TT->nro==23){
                Join53(LW5,veinticuatro5,257,384);
            }else if(TT->nro==24){
                Join53(LW5,veinticinco5,257,384);
            }
        }else if(pos==3){//Join54(LW5,trece4,0,384);
            if(TT->nro==0){
                Join54(LW5,uno5,129,384);
            }else if(TT->nro==1){
                Join54(LW5,dos5,129,384);
            }else if(TT->nro==2){
                Join54(LW5,tres5,129,384);
            }else if(TT->nro==3){
                Join54(LW5,cuatro5,129,384);
            }else if(TT->nro==4){
                Join54(LW5,cinco5,129,384);
            }else if(TT->nro==5){
                Join54(LW5,seis5,129,384);
            }else if(TT->nro==6){
                Join54(LW5,siete5,129,384);
            }else if(TT->nro==7){
                Join54(LW5,ocho5,129,384);
            }else if(TT->nro==8){
                Join54(LW5,nueve5,129,384);
            }else if(TT->nro==9){
                Join54(LW5,diez5,129,384);
            }else if(TT->nro==10){
                Join54(LW5,once5,129,384);
            }else if(TT->nro==11){
                Join54(LW5,doce5,129,384);
            }else if(TT->nro==12){
                Join54(LW5,trece5,129,384);
            }else if(TT->nro==13){
                Join54(LW5,catorce5,129,384);
            }else if(TT->nro==14){
                Join54(LW5,quince5,129,384);
            }else if(TT->nro==15){
                Join54(LW5,dieciseis5,129,384);
            }else if(TT->nro==16){
                Join54(LW5,diecisiete5,129,384);
            }else if(TT->nro==17){
                Join54(LW5,dieciocho5,129,384);
            }else if(TT->nro==18){
                Join54(LW5,diecinueve5,129,384);
            }else if(TT->nro==19){
                Join54(LW5,veinte5,129,384);
            }else if(TT->nro==20){
                Join54(LW5,veintiuno5,129,384);
            }else if(TT->nro==21){
                Join54(LW5,veintidos5,129,384);
            }else if(TT->nro==22){
                Join54(LW5,veintitres5,129,384);
            }else if(TT->nro==23){
                Join54(LW5,veinticuatro5,129,384);
            }else if(TT->nro==24){
                Join54(LW5,veinticinco5,129,384);
            }
        }else if(pos==4){//Join55(imag,cinco4,0,384);
            if(TT->nro==0){
                Join55(LW5,uno5,0,384);
            }else if(TT->nro==1){
                Join55(LW5,dos5,0,384);
            }else if(TT->nro==2){
                Join55(LW5,tres5,0,384);
            }else if(TT->nro==3){
                Join55(LW5,cuatro5,0,384);
            }else if(TT->nro==4){
                Join55(LW5,cinco5,0,384);
            }else if(TT->nro==5){
                Join55(LW5,seis5,0,384);
            }else if(TT->nro==6){
                Join55(LW5,siete5,0,384);
            }else if(TT->nro==7){
                Join55(LW5,ocho5,0,384);
            }else if(TT->nro==8){
                Join55(LW5,nueve5,0,384);
            }else if(TT->nro==9){
                Join55(LW5,diez5,0,384);
            }else if(TT->nro==10){
                Join55(LW5,once5,0,384);
            }else if(TT->nro==11){
                Join55(LW5,doce5,0,384);
            }else if(TT->nro==12){
                Join55(LW5,trece5,0,384);
            }else if(TT->nro==13){
                Join55(LW5,catorce5,0,384);
            }else if(TT->nro==14){
                Join55(LW5,quince5,0,384);
            }else if(TT->nro==15){
                Join55(LW5,dieciseis5,0,384);
            }else if(TT->nro==16){
                Join55(LW5,diecisiete5,0,384);
            }else if(TT->nro==17){
                Join55(LW5,dieciocho5,0,384);
            }else if(TT->nro==18){
                Join55(LW5,diecinueve5,0,384);
            }else if(TT->nro==19){
                Join55(LW5,veinte5,0,384);
            }else if(TT->nro==20){
                Join55(LW5,veintiuno5,0,384);
            }else if(TT->nro==21){
                Join55(LW5,veintidos5,0,384);
            }else if(TT->nro==22){
                Join55(LW5,veintitres5,0,384);
            }else if(TT->nro==23){
                Join55(LW5,veinticuatro5,0,384);
            }else if(TT->nro==24){
                Join55(LW5,veinticinco5,0,384);
            }
        }else if(pos==5){ //Join56(imag,seis4,512,288);
            if(TT->nro==0){
                Join56(LW5,uno5,512,288);
            }else if(TT->nro==1){
                Join56(LW5,dos5,512,288);
            }else if(TT->nro==2){
                Join56(LW5,tres5,512,288);
            }else if(TT->nro==3){
                Join56(LW5,cuatro5,512,288);
            }else if(TT->nro==4){
                Join56(LW5,cinco5,512,288);
            }else if(TT->nro==5){
                Join56(LW5,seis5,512,288);
            }else if(TT->nro==6){
                Join56(LW5,siete5,512,288);
            }else if(TT->nro==7){
                Join56(LW5,ocho5,512,288);
            }else if(TT->nro==8){
                Join56(LW5,nueve5,512,288);
            }else if(TT->nro==9){
                Join56(LW5,diez5,512,288);
            }else if(TT->nro==10){
                Join56(LW5,once5,512,288);
            }else if(TT->nro==11){
                Join56(LW5,doce5,512,288);
            }else if(TT->nro==12){
                Join56(LW5,trece5,512,288);
            }else if(TT->nro==13){
                Join56(LW5,catorce5,512,288);
            }else if(TT->nro==14){
                Join56(LW5,quince5,512,288);
            }else if(TT->nro==15){
                Join56(LW5,dieciseis5,512,288);
            }else if(TT->nro==16){
                Join56(LW5,diecisiete5,512,288);
            }else if(TT->nro==17){
                Join56(LW5,dieciocho5,512,288);
            }else if(TT->nro==18){
                Join56(LW5,diecinueve5,512,288);
            }else if(TT->nro==19){
                Join56(LW5,veinte5,512,288);
            }else if(TT->nro==20){
                Join56(LW5,veintiuno5,512,288);
            }else if(TT->nro==21){
                Join56(LW5,veintidos5,512,288);
            }else if(TT->nro==22){
                Join56(LW5,veintitres5,512,288);
            }else if(TT->nro==23){
                Join56(LW5,veinticuatro5,512,288);
            }else if(TT->nro==24){
                Join56(LW5,veinticinco5,512,288);
            }

        }else if(pos==6){//Join57(imag,siete4,385,288);
            if(TT->nro==0){
                Join57(LW5,uno5,385,288);
            }else if(TT->nro==1){
                Join57(LW5,dos5,385,288);
            }else if(TT->nro==2){
                Join57(LW5,tres5,385,288);
            }else if(TT->nro==3){
                Join57(LW5,cuatro5,385,288);
            }else if(TT->nro==4){
                Join57(LW5,cinco5,385,288);
            }else if(TT->nro==5){
                Join57(LW5,seis5,385,288);
            }else if(TT->nro==6){
                Join57(LW5,siete5,385,288);
            }else if(TT->nro==7){
                Join57(LW5,ocho5,385,288);
            }else if(TT->nro==8){
                Join57(LW5,nueve5,385,288);
            }else if(TT->nro==9){
                Join57(LW5,diez5,385,288);
            }else if(TT->nro==10){
                Join57(LW5,once5,385,288);
            }else if(TT->nro==11){
                Join57(LW5,doce5,385,288);
            }else if(TT->nro==12){
                Join57(LW5,trece5,385,288);
            }else if(TT->nro==13){
                Join57(LW5,catorce5,385,288);
            }else if(TT->nro==14){
                Join57(LW5,quince5,385,288);
            }else if(TT->nro==15){
                Join57(LW5,dieciseis5,385,288);
            }else if(TT->nro==16){
                Join57(LW5,diecisiete5,385,288);
            }else if(TT->nro==17){
                Join57(LW5,dieciocho5,385,288);
            }else if(TT->nro==18){
                Join57(LW5,diecinueve5,385,288);
            }else if(TT->nro==19){
                Join57(LW5,veinte5,385,288);
            }else if(TT->nro==20){
                Join57(LW5,veintiuno5,385,288);
            }else if(TT->nro==21){
                Join57(LW5,veintidos5,385,288);
            }else if(TT->nro==22){
                Join57(LW5,veintitres5,385,288);
            }else if(TT->nro==23){
                Join57(LW5,veinticuatro5,385,288);
            }else if(TT->nro==24){
                Join57(LW5,veinticinco5,385,288);
            }
        }else if(pos==7){//Join58(imag,ocho4,257,288);
            if(TT->nro==0){
                Join58(LW5,uno5,257,288);
            }else if(TT->nro==1){
                Join58(LW5,dos5,257,288);
            }else if(TT->nro==2){
                Join58(LW5,tres5,257,288);
            }else if(TT->nro==3){
                Join58(LW5,cuatro5,257,288);
            }else if(TT->nro==4){
                Join58(LW5,cinco5,257,288);
            }else if(TT->nro==5){
                Join58(LW5,seis5,257,288);
            }else if(TT->nro==6){
                Join58(LW5,siete5,257,288);
            }else if(TT->nro==7){
                Join58(LW5,ocho5,257,288);
            }else if(TT->nro==8){
                Join58(LW5,nueve5,257,288);
            }else if(TT->nro==9){
                Join58(LW5,diez5,257,288);
            }else if(TT->nro==10){
                Join58(LW5,once5,257,288);
            }else if(TT->nro==11){
                Join58(LW5,doce5,257,288);
            }else if(TT->nro==12){
                Join58(LW5,trece5,257,288);
            }else if(TT->nro==13){
                Join58(LW5,catorce5,257,288);
            }else if(TT->nro==14){
                Join58(LW5,quince5,257,288);
            }else if(TT->nro==15){
                Join58(LW5,dieciseis5,257,288);
            }else if(TT->nro==16){
                Join58(LW5,diecisiete5,257,288);
            }else if(TT->nro==17){
                Join58(LW5,dieciocho5,257,288);
            }else if(TT->nro==18){
                Join58(LW5,diecinueve5,257,288);
            }else if(TT->nro==19){
                Join58(LW5,veinte5,257,288);
            }else if(TT->nro==20){
                Join58(LW5,veintiuno5,257,288);
            }else if(TT->nro==21){
                Join58(LW5,veintidos5,257,288);
            }else if(TT->nro==22){
                Join58(LW5,veintitres5,257,288);
            }else if(TT->nro==23){
                Join58(LW5,veinticuatro5,257,288);
            }else if(TT->nro==24){
                Join58(LW5,veinticinco5,257,288);
            }
        }else if(pos==8){//Join59(imag,nueve4,129,240);
            if(TT->nro==0){
                Join59(LW5,uno5,129,288);
            }else if(TT->nro==1){
                Join59(LW5,dos5,129,288);
            }else if(TT->nro==2){
                Join59(LW5,tres5,129,288);
            }else if(TT->nro==3){
                Join59(LW5,cuatro5,129,288);
            }else if(TT->nro==4){
                Join59(LW5,cinco5,129,288);
            }else if(TT->nro==5){
                Join59(LW5,seis5,129,288);
            }else if(TT->nro==6){
                Join59(LW5,siete5,129,288);
            }else if(TT->nro==7){
                Join59(LW5,ocho5,129,288);
            }else if(TT->nro==8){
                Join59(LW5,nueve5,129,288);
            }else if(TT->nro==9){
                Join59(LW5,diez5,129,288);
            }else if(TT->nro==10){
                Join59(LW5,once5,129,288);
            }else if(TT->nro==11){
                Join59(LW5,doce5,129,288);
            }else if(TT->nro==12){
                Join59(LW5,trece5,129,288);
            }else if(TT->nro==13){
                Join59(LW5,catorce5,129,288);
            }else if(TT->nro==14){
                Join59(LW5,quince5,129,288);
            }else if(TT->nro==15){
                Join59(LW5,dieciseis5,129,288);
            }else if(TT->nro==16){
                Join59(LW5,diecisiete5,129,288);
            }else if(TT->nro==17){
                Join59(LW5,dieciocho5,129,288);
            }else if(TT->nro==18){
                Join59(LW5,diecinueve5,129,288);
            }else if(TT->nro==19){
                Join59(LW5,veinte5,129,288);
            }else if(TT->nro==20){
                Join59(LW5,veintiuno5,129,288);
            }else if(TT->nro==21){
                Join59(LW5,veintidos5,129,288);
            }else if(TT->nro==22){
                Join59(LW5,veintitres5,129,288);
            }else if(TT->nro==23){
                Join59(LW5,veinticuatro5,129,288);
            }else if(TT->nro==24){
                Join59(LW5,veinticinco5,129,288);
            }
        }else if(pos==9){ //Join510(imag,diez4,0,288);
            if(TT->nro==0){
                Join510(LW5,uno5,0,288);
            }else if(TT->nro==1){
                Join510(LW5,dos5,0,288);
            }else if(TT->nro==2){
                Join510(LW5,tres5,0,288);
            }else if(TT->nro==3){
                Join510(LW5,cuatro5,0,288);
            }else if(TT->nro==4){
                Join510(LW5,cinco5,0,288);
            }else if(TT->nro==5){
                Join510(LW5,seis5,0,288);
            }else if(TT->nro==6){
                Join510(LW5,siete5,0,288);
            }else if(TT->nro==7){
                Join510(LW5,ocho5,0,288);
            }else if(TT->nro==8){
                Join510(LW5,nueve5,0,288);
            }else if(TT->nro==9){
                Join510(LW5,diez5,0,288);
            }else if(TT->nro==10){
                Join510(LW5,once5,0,288);
            }else if(TT->nro==11){
                Join510(LW5,doce5,0,288);
            }else if(TT->nro==12){
                Join510(LW5,trece5,0,288);
            }else if(TT->nro==13){
                Join510(LW5,catorce5,0,288);
            }else if(TT->nro==14){
                Join510(LW5,quince5,0,288);
            }else if(TT->nro==15){
                Join510(LW5,dieciseis5,0,288);
            }else if(TT->nro==16){
                Join510(LW5,diecisiete5,0,288);
            }else if(TT->nro==17){
                Join510(LW5,dieciocho5,0,288);
            }else if(TT->nro==18){
                Join510(LW5,diecinueve5,0,288);
            }else if(TT->nro==19){
                Join510(LW5,veinte5,0,288);
            }else if(TT->nro==20){
                Join510(LW5,veintiuno5,0,288);
            }else if(TT->nro==21){
                Join510(LW5,veintidos5,0,288);
            }else if(TT->nro==22){
                Join510(LW5,veintitres5,0,288);
            }else if(TT->nro==23){
                Join510(LW5,veinticuatro5,0,288);
            }else if(TT->nro==24){
                Join510(LW5,veinticinco5,0,288);
            }

        }else if(pos==10){//Join511(imag,once4,512,192);
            if(TT->nro==0){
                Join511(LW5,uno5,512,192);
            }else if(TT->nro==1){
                Join511(LW5,dos5,512,192);
            }else if(TT->nro==2){
                Join511(LW5,tres5,512,192);
            }else if(TT->nro==3){
                Join511(LW5,cuatro5,512,192);
            }else if(TT->nro==4){
                Join511(LW5,cinco5,512,192);
            }else if(TT->nro==5){
                Join511(LW5,seis5,512,192);
            }else if(TT->nro==6){
                Join511(LW5,siete5,512,192);
            }else if(TT->nro==7){
                Join511(LW5,ocho5,512,192);
            }else if(TT->nro==8){
                Join511(LW5,nueve5,512,192);
            }else if(TT->nro==9){
                Join511(LW5,diez5,512,192);
            }else if(TT->nro==10){
                Join511(LW5,once5,512,192);
            }else if(TT->nro==11){
                Join511(LW5,doce5,512,192);
            }else if(TT->nro==12){
                Join511(LW5,trece5,512,192);
            }else if(TT->nro==13){
                Join511(LW5,catorce5,512,192);
            }else if(TT->nro==14){
                Join511(LW5,quince5,512,192);
            }else if(TT->nro==15){
                Join511(LW5,dieciseis5,512,192);
            }else if(TT->nro==16){
                Join511(LW5,diecisiete5,512,192);
            }else if(TT->nro==17){
                Join511(LW5,dieciocho5,512,192);
            }else if(TT->nro==18){
                Join511(LW5,diecinueve5,512,192);
            }else if(TT->nro==19){
                Join511(LW5,veinte5,512,192);
            }else if(TT->nro==20){
                Join511(LW5,veintiuno5,512,192);
            }else if(TT->nro==21){
                Join511(LW5,veintidos5,512,192);
            }else if(TT->nro==22){
                Join511(LW5,veintitres5,512,192);
            }else if(TT->nro==23){
                Join511(LW5,veinticuatro5,512,192);
            }else if(TT->nro==24){
                Join511(LW5,veinticinco5,512,192);
            }
        }else if(pos==11){//Join512(imag,doce4,385,192);
            if(TT->nro==0){
                Join512(LW5,uno5,385,192);
            }else if(TT->nro==1){
                Join512(LW5,dos5,385,192);
            }else if(TT->nro==2){
                Join512(LW5,tres5,385,192);
            }else if(TT->nro==3){
                Join512(LW5,cuatro5,385,192);
            }else if(TT->nro==4){
                Join512(LW5,cinco5,385,192);
            }else if(TT->nro==5){
                Join512(LW5,seis5,385,192);
            }else if(TT->nro==6){
                Join512(LW5,siete5,385,192);
            }else if(TT->nro==7){
                Join512(LW5,ocho5,385,192);
            }else if(TT->nro==8){
                Join512(LW5,nueve5,385,192);
            }else if(TT->nro==9){
                Join512(LW5,diez5,385,192);
            }else if(TT->nro==10){
                Join512(LW5,once5,385,192);
            }else if(TT->nro==11){
                Join512(LW5,doce5,385,192);
            }else if(TT->nro==12){
                Join512(LW5,trece5,385,192);
            }else if(TT->nro==13){
                Join512(LW5,catorce5,385,192);
            }else if(TT->nro==14){
                Join512(LW5,quince5,385,192);
            }else if(TT->nro==15){
                Join512(LW5,dieciseis5,385,192);
            }else if(TT->nro==16){
                Join512(LW5,diecisiete5,385,192);
            }else if(TT->nro==17){
                Join512(LW5,dieciocho5,385,192);
            }else if(TT->nro==18){
                Join512(LW5,diecinueve5,385,192);
            }else if(TT->nro==19){
                Join512(LW5,veinte5,385,192);
            }else if(TT->nro==20){
                Join512(LW5,veintiuno5,385,192);
            }else if(TT->nro==21){
                Join512(LW5,veintidos5,385,192);
            }else if(TT->nro==22){
                Join512(LW5,veintitres5,385,192);
            }else if(TT->nro==23){
                Join512(LW5,veinticuatro5,385,192);
            }else if(TT->nro==24){
                Join512(LW5,veinticinco5,385,192);
            }
        }else if(pos==12){//Join513(imag,cuatro4,257,192);
            if(TT->nro==0){
                Join513(LW5,uno5,257,192);
            }else if(TT->nro==1){
                Join513(LW5,dos5,257,192);
            }else if(TT->nro==2){
                Join513(LW5,tres5,257,192);
            }else if(TT->nro==3){
                Join513(LW5,cuatro5,257,192);
            }else if(TT->nro==4){
                Join513(LW5,cinco5,257,192);
            }else if(TT->nro==5){
                Join513(LW5,seis5,257,192);
            }else if(TT->nro==6){
                Join513(LW5,siete5,257,192);
            }else if(TT->nro==7){
                Join513(LW5,ocho5,257,192);
            }else if(TT->nro==8){
                Join513(LW5,nueve5,257,192);
            }else if(TT->nro==9){
                Join513(LW5,diez5,257,192);
            }else if(TT->nro==10){
                Join513(LW5,once5,257,192);
            }else if(TT->nro==11){
                Join513(LW5,doce5,257,192);
            }else if(TT->nro==12){
                Join513(LW5,trece5,257,192);
            }else if(TT->nro==13){
                Join513(LW5,catorce5,257,192);
            }else if(TT->nro==14){
                Join513(LW5,quince5,257,192);
            }else if(TT->nro==15){
                Join513(LW5,dieciseis5,257,192);
            }else if(TT->nro==16){
                Join513(LW5,diecisiete5,257,192);
            }else if(TT->nro==17){
                Join513(LW5,dieciocho5,257,192);
            }else if(TT->nro==18){
                Join513(LW5,diecinueve5,257,192);
            }else if(TT->nro==19){
                Join513(LW5,veinte5,257,192);
            }else if(TT->nro==20){
                Join513(LW5,veintiuno5,257,192);
            }else if(TT->nro==21){
                Join513(LW5,veintidos5,257,192);
            }else if(TT->nro==22){
                Join513(LW5,veintitres5,257,192);
            }else if(TT->nro==23){
                Join513(LW5,veinticuatro5,257,192);
            }else if(TT->nro==24){
                Join513(LW5,veinticinco5,257,192);
            }
        }else if(pos==13){ //Join514(imag,tres4,129,192);
            if(TT->nro==0){
                Join514(LW5,uno5,129,192);
            }else if(TT->nro==1){
                Join514(LW5,dos5,129,192);
            }else if(TT->nro==2){
                Join514(LW5,tres5,129,192);
            }else if(TT->nro==3){
                Join514(LW5,cuatro5,129,192);
            }else if(TT->nro==4){
                Join514(LW5,cinco5,129,192);
            }else if(TT->nro==5){
                Join514(LW5,seis5,129,192);
            }else if(TT->nro==6){
                Join514(LW5,siete5,129,192);
            }else if(TT->nro==7){
                Join514(LW5,ocho5,129,192);
            }else if(TT->nro==8){
                Join514(LW5,nueve5,129,192);
            }else if(TT->nro==9){
                Join514(LW5,diez5,129,192);
            }else if(TT->nro==10){
                Join514(LW5,once5,129,192);
            }else if(TT->nro==11){
                Join514(LW5,doce5,129,192);
            }else if(TT->nro==12){
                Join514(LW5,trece5,129,192);
            }else if(TT->nro==13){
                Join514(LW5,catorce5,129,192);
            }else if(TT->nro==14){
                Join514(LW5,quince5,129,192);
            }else if(TT->nro==15){
                Join514(LW5,dieciseis5,129,192);
            }else if(TT->nro==16){
                Join514(LW5,diecisiete5,129,192);
            }else if(TT->nro==17){
                Join514(LW5,dieciocho5,129,192);
            }else if(TT->nro==18){
                Join514(LW5,diecinueve5,129,192);
            }else if(TT->nro==19){
                Join514(LW5,veinte5,129,192);
            }else if(TT->nro==20){
                Join514(LW5,veintiuno5,129,192);
            }else if(TT->nro==21){
                Join514(LW5,veintidos5,129,192);
            }else if(TT->nro==22){
                Join514(LW5,veintitres5,129,192);
            }else if(TT->nro==23){
                Join514(LW5,veinticuatro5,129,192);
            }else if(TT->nro==24){
                Join514(LW5,veinticinco5,129,192);
            }

        }else if(pos==14){//Join515(imag,dos4,0,192);
            if(TT->nro==0){
                Join515(LW5,uno5,0,192);
            }else if(TT->nro==1){
                Join515(LW5,dos5,0,192);
            }else if(TT->nro==2){
                Join515(LW5,tres5,0,192);
            }else if(TT->nro==3){
                Join515(LW5,cuatro5,0,192);
            }else if(TT->nro==4){
                Join515(LW5,cinco5,0,192);
            }else if(TT->nro==5){
                Join515(LW5,seis5,0,192);
            }else if(TT->nro==6){
                Join515(LW5,siete5,0,192);
            }else if(TT->nro==7){
                Join515(LW5,ocho5,0,192);
            }else if(TT->nro==8){
                Join515(LW5,nueve5,0,192);
            }else if(TT->nro==9){
                Join515(LW5,diez5,0,192);
            }else if(TT->nro==10){
                Join515(LW5,once5,0,192);
            }else if(TT->nro==11){
                Join515(LW5,doce5,0,192);
            }else if(TT->nro==12){
                Join515(LW5,trece5,0,192);
            }else if(TT->nro==13){
                Join515(LW5,catorce5,0,192);
            }else if(TT->nro==14){
                Join515(LW5,quince5,0,192);
            }else if(TT->nro==15){
                Join515(LW5,dieciseis5,0,192);
            }else if(TT->nro==16){
                Join515(LW5,diecisiete5,0,192);
            }else if(TT->nro==17){
                Join515(LW5,dieciocho5,0,192);
            }else if(TT->nro==18){
                Join515(LW5,diecinueve5,0,192);
            }else if(TT->nro==19){
                Join515(LW5,veinte5,0,192);
            }else if(TT->nro==20){
                Join515(LW5,veintiuno5,0,192);
            }else if(TT->nro==21){
                Join515(LW5,veintidos5,0,192);
            }else if(TT->nro==22){
                Join515(LW5,veintitres5,0,192);
            }else if(TT->nro==23){
                Join515(LW5,veinticuatro5,0,192);
            }else if(TT->nro==24){
                Join515(LW5,veinticinco5,0,192);
            }
        }else if(pos==15){//Join516(imag,uno4,512,96);
            if(TT->nro==0){
                Join516(LW5,uno5,512,96);
            }else if(TT->nro==1){
                Join516(LW5,dos5,512,96);
            }else if(TT->nro==2){
                Join516(LW5,tres5,512,96);
            }else if(TT->nro==3){
                Join516(LW5,cuatro5,512,96);
            }else if(TT->nro==4){
                Join516(LW5,cinco5,512,96);
            }else if(TT->nro==5){
                Join516(LW5,seis5,512,96);
            }else if(TT->nro==6){
                Join516(LW5,siete5,512,96);
            }else if(TT->nro==7){
                Join516(LW5,ocho5,512,96);
            }else if(TT->nro==8){
                Join516(LW5,nueve5,512,96);
            }else if(TT->nro==9){
                Join516(LW5,diez5,512,96);
            }else if(TT->nro==10){
                Join516(LW5,once5,512,96);
            }else if(TT->nro==11){
                Join516(LW5,doce5,512,96);
            }else if(TT->nro==12){
                Join516(LW5,trece5,512,96);
            }else if(TT->nro==13){
                Join516(LW5,catorce5,512,96);
            }else if(TT->nro==14){
                Join516(LW5,quince5,512,96);
            }else if(TT->nro==15){
                Join516(LW5,dieciseis5,512,96);
            }else if(TT->nro==16){
                Join516(LW5,diecisiete5,512,96);
            }else if(TT->nro==17){
                Join516(LW5,dieciocho5,512,96);
            }else if(TT->nro==18){
                Join516(LW5,diecinueve5,512,96);
            }else if(TT->nro==19){
                Join516(LW5,veinte5,512,96);
            }else if(TT->nro==20){
                Join516(LW5,veintiuno5,512,96);
            }else if(TT->nro==21){
                Join516(LW5,veintidos5,512,96);
            }else if(TT->nro==22){
                Join516(LW5,veintitres5,512,96);
            }else if(TT->nro==23){
                Join516(LW5,veinticuatro5,512,96);
            }else if(TT->nro==24){
                Join516(LW5,veinticinco5,512,96);
            }
        }else if(pos==16){//Join516(imag,uno4,385,96);
            if(TT->nro==0){
                Join517(LW5,uno5,385,96);
            }else if(TT->nro==1){
                Join517(LW5,dos5,385,96);
            }else if(TT->nro==2){
                Join517(LW5,tres5,385,96);
            }else if(TT->nro==3){
                Join517(LW5,cuatro5,385,96);
            }else if(TT->nro==4){
                Join517(LW5,cinco5,385,96);
            }else if(TT->nro==5){
                Join517(LW5,seis5,385,96);
            }else if(TT->nro==6){
                Join517(LW5,siete5,385,96);
            }else if(TT->nro==7){
                Join517(LW5,ocho5,385,96);
            }else if(TT->nro==8){
                Join517(LW5,nueve5,385,96);
            }else if(TT->nro==9){
                Join517(LW5,diez5,385,96);
            }else if(TT->nro==10){
                Join517(LW5,once5,385,96);
            }else if(TT->nro==11){
                Join517(LW5,doce5,385,96);
            }else if(TT->nro==12){
                Join517(LW5,trece5,385,96);
            }else if(TT->nro==13){
                Join517(LW5,catorce5,385,96);
            }else if(TT->nro==14){
                Join517(LW5,quince5,385,96);
            }else if(TT->nro==15){
                Join517(LW5,dieciseis5,385,96);
            }else if(TT->nro==16){
                Join517(LW5,diecisiete5,385,96);
            }else if(TT->nro==17){
                Join517(LW5,dieciocho5,385,96);
            }else if(TT->nro==18){
                Join517(LW5,diecinueve5,385,96);
            }else if(TT->nro==19){
                Join517(LW5,veinte5,385,96);
            }else if(TT->nro==20){
                Join517(LW5,veintiuno5,385,96);
            }else if(TT->nro==21){
                Join517(LW5,veintidos5,385,96);
            }else if(TT->nro==22){
                Join517(LW5,veintitres5,385,96);
            }else if(TT->nro==23){
                Join517(LW5,veinticuatro5,385,96);
            }else if(TT->nro==24){
                Join517(LW5,veinticinco5,385,96);
            }
        }else if(pos==17){//Join516(imag,uno4,257,96);
            if(TT->nro==0){
                Join518(LW5,uno5,257,96);
            }else if(TT->nro==1){
                Join518(LW5,dos5,257,96);
            }else if(TT->nro==2){
                Join518(LW5,tres5,257,96);
            }else if(TT->nro==3){
                Join518(LW5,cuatro5,257,96);
            }else if(TT->nro==4){
                Join518(LW5,cinco5,257,96);
            }else if(TT->nro==5){
                Join518(LW5,seis5,257,96);
            }else if(TT->nro==6){
                Join518(LW5,siete5,257,96);
            }else if(TT->nro==7){
                Join518(LW5,ocho5,257,96);
            }else if(TT->nro==8){
                Join518(LW5,nueve5,257,96);
            }else if(TT->nro==9){
                Join518(LW5,diez5,257,96);
            }else if(TT->nro==10){
                Join518(LW5,once5,257,96);
            }else if(TT->nro==11){
                Join518(LW5,doce5,257,96);
            }else if(TT->nro==12){
                Join518(LW5,trece5,257,96);
            }else if(TT->nro==13){
                Join518(LW5,catorce5,257,96);
            }else if(TT->nro==14){
                Join518(LW5,quince5,257,96);
            }else if(TT->nro==15){
                Join518(LW5,dieciseis5,257,96);
            }else if(TT->nro==16){
                Join518(LW5,diecisiete5,257,96);
            }else if(TT->nro==17){
                Join518(LW5,dieciocho5,257,96);
            }else if(TT->nro==18){
                Join518(LW5,diecinueve5,257,96);
            }else if(TT->nro==19){
                Join518(LW5,veinte5,257,96);
            }else if(TT->nro==20){
                Join518(LW5,veintiuno5,257,96);
            }else if(TT->nro==21){
                Join518(LW5,veintidos5,257,96);
            }else if(TT->nro==22){
                Join518(LW5,veintitres5,257,96);
            }else if(TT->nro==23){
                Join518(LW5,veinticuatro5,257,96);
            }else if(TT->nro==24){
                Join518(LW5,veinticinco5,257,96);
            }
        }else if(pos==18){//Join516(imag,uno4,129,96);
            if(TT->nro==0){
                Join519(LW5,uno5,129,96);
            }else if(TT->nro==1){
                Join519(LW5,dos5,129,96);
            }else if(TT->nro==2){
                Join519(LW5,tres5,129,96);
            }else if(TT->nro==3){
                Join519(LW5,cuatro5,129,96);
            }else if(TT->nro==4){
                Join519(LW5,cinco5,129,96);
            }else if(TT->nro==5){
                Join519(LW5,seis5,129,96);
            }else if(TT->nro==6){
                Join519(LW5,siete5,129,96);
            }else if(TT->nro==7){
                Join519(LW5,ocho5,129,96);
            }else if(TT->nro==8){
                Join519(LW5,nueve5,129,96);
            }else if(TT->nro==9){
                Join519(LW5,diez5,129,96);
            }else if(TT->nro==10){
                Join519(LW5,once5,129,96);
            }else if(TT->nro==11){
                Join519(LW5,doce5,129,96);
            }else if(TT->nro==12){
                Join519(LW5,trece5,129,96);
            }else if(TT->nro==13){
                Join519(LW5,catorce5,129,96);
            }else if(TT->nro==14){
                Join519(LW5,quince5,129,96);
            }else if(TT->nro==15){
                Join519(LW5,dieciseis5,129,96);
            }else if(TT->nro==16){
                Join519(LW5,diecisiete5,129,96);
            }else if(TT->nro==17){
                Join519(LW5,dieciocho5,129,96);
            }else if(TT->nro==18){
                Join519(LW5,diecinueve5,129,96);
            }else if(TT->nro==19){
                Join519(LW5,veinte5,129,96);
            }else if(TT->nro==20){
                Join519(LW5,veintiuno5,129,96);
            }else if(TT->nro==21){
                Join519(LW5,veintidos5,129,96);
            }else if(TT->nro==22){
                Join519(LW5,veintitres5,129,96);
            }else if(TT->nro==23){
                Join519(LW5,veinticuatro5,129,96);
            }else if(TT->nro==24){
                Join519(LW5,veinticinco5,129,96);
            }
        }else if(pos==19){//Join516(imag,uno4,0,96);
            if(TT->nro==0){
                Join520(LW5,uno5,0,96);
            }else if(TT->nro==1){
                Join520(LW5,dos5,0,96);
            }else if(TT->nro==2){
                Join520(LW5,tres5,0,96);
            }else if(TT->nro==3){
                Join520(LW5,cuatro5,0,96);
            }else if(TT->nro==4){
                Join520(LW5,cinco5,0,96);
            }else if(TT->nro==5){
                Join520(LW5,seis5,0,96);
            }else if(TT->nro==6){
                Join520(LW5,siete5,0,96);
            }else if(TT->nro==7){
                Join520(LW5,ocho5,0,96);
            }else if(TT->nro==8){
                Join520(LW5,nueve5,0,96);
            }else if(TT->nro==9){
                Join520(LW5,diez5,0,96);
            }else if(TT->nro==10){
                Join520(LW5,once5,0,96);
            }else if(TT->nro==11){
                Join520(LW5,doce5,0,96);
            }else if(TT->nro==12){
                Join520(LW5,trece5,0,96);
            }else if(TT->nro==13){
                Join520(LW5,catorce5,0,96);
            }else if(TT->nro==14){
                Join520(LW5,quince5,0,96);
            }else if(TT->nro==15){
                Join520(LW5,dieciseis5,0,96);
            }else if(TT->nro==16){
                Join520(LW5,diecisiete5,0,96);
            }else if(TT->nro==17){
                Join520(LW5,dieciocho5,0,96);
            }else if(TT->nro==18){
                Join520(LW5,diecinueve5,0,96);
            }else if(TT->nro==19){
                Join520(LW5,veinte5,0,96);
            }else if(TT->nro==20){
                Join520(LW5,veintiuno5,0,96);
            }else if(TT->nro==21){
                Join520(LW5,veintidos5,0,96);
            }else if(TT->nro==22){
                Join520(LW5,veintitres5,0,96);
            }else if(TT->nro==23){
                Join520(LW5,veinticuatro5,0,96);
            }else if(TT->nro==24){
                Join520(LW5,veinticinco5,0,96);
            }
        }else if(pos==20){//Join516(imag,uno4,512,0);
            if(TT->nro==0){
                Join521(LW5,uno5,512,0);
            }else if(TT->nro==1){
                Join521(LW5,dos5,512,0);
            }else if(TT->nro==2){
                Join521(LW5,tres5,512,0);
            }else if(TT->nro==3){
                Join521(LW5,cuatro5,512,0);
            }else if(TT->nro==4){
                Join521(LW5,cinco5,512,0);
            }else if(TT->nro==5){
                Join521(LW5,seis5,512,0);
            }else if(TT->nro==6){
                Join521(LW5,siete5,512,0);
            }else if(TT->nro==7){
                Join521(LW5,ocho5,512,0);
            }else if(TT->nro==8){
                Join521(LW5,nueve5,512,0);
            }else if(TT->nro==9){
                Join521(LW5,diez5,512,0);
            }else if(TT->nro==10){
                Join521(LW5,once5,512,0);
            }else if(TT->nro==11){
                Join521(LW5,doce5,512,0);
            }else if(TT->nro==12){
                Join521(LW5,trece5,512,0);
            }else if(TT->nro==13){
                Join521(LW5,catorce5,512,0);
            }else if(TT->nro==14){
                Join521(LW5,quince5,512,0);
            }else if(TT->nro==15){
                Join521(LW5,dieciseis5,512,0);
            }else if(TT->nro==16){
                Join521(LW5,diecisiete5,512,0);
            }else if(TT->nro==17){
                Join521(LW5,dieciocho5,512,0);
            }else if(TT->nro==18){
                Join521(LW5,diecinueve5,512,0);
            }else if(TT->nro==19){
                Join521(LW5,veinte5,512,0);
            }else if(TT->nro==20){
                Join521(LW5,veintiuno5,512,0);
            }else if(TT->nro==21){
                Join521(LW5,veintidos5,512,0);
            }else if(TT->nro==22){
                Join521(LW5,veintitres5,512,0);
            }else if(TT->nro==23){
                Join521(LW5,veinticuatro5,512,0);
            }else if(TT->nro==24){
                Join521(LW5,veinticinco5,512,0);
            }
        }else if(pos==21){//Join516(imag,uno4,385,0);
            if(TT->nro==0){
                Join522(LW5,uno5,385,0);
            }else if(TT->nro==1){
                Join522(LW5,dos5,385,0);
            }else if(TT->nro==2){
                Join522(LW5,tres5,385,0);
            }else if(TT->nro==3){
                Join522(LW5,cuatro5,385,0);
            }else if(TT->nro==4){
                Join522(LW5,cinco5,385,0);
            }else if(TT->nro==5){
                Join522(LW5,seis5,385,0);
            }else if(TT->nro==6){
                Join522(LW5,siete5,385,0);
            }else if(TT->nro==7){
                Join522(LW5,ocho5,385,0);
            }else if(TT->nro==8){
                Join522(LW5,nueve5,385,0);
            }else if(TT->nro==9){
                Join522(LW5,diez5,385,0);
            }else if(TT->nro==10){
                Join522(LW5,once5,385,0);
            }else if(TT->nro==11){
                Join522(LW5,doce5,385,0);
            }else if(TT->nro==12){
                Join522(LW5,trece5,385,0);
            }else if(TT->nro==13){
                Join522(LW5,catorce5,385,0);
            }else if(TT->nro==14){
                Join522(LW5,quince5,385,0);
            }else if(TT->nro==15){
                Join522(LW5,dieciseis5,385,0);
            }else if(TT->nro==16){
                Join522(LW5,diecisiete5,385,0);
            }else if(TT->nro==17){
                Join522(LW5,dieciocho5,385,0);
            }else if(TT->nro==18){
                Join522(LW5,diecinueve5,385,0);
            }else if(TT->nro==19){
                Join522(LW5,veinte5,385,0);
            }else if(TT->nro==20){
                Join522(LW5,veintiuno5,385,0);
            }else if(TT->nro==21){
                Join522(LW5,veintidos5,385,0);
            }else if(TT->nro==22){
                Join522(LW5,veintitres5,385,0);
            }else if(TT->nro==23){
                Join522(LW5,veinticuatro5,385,0);
            }else if(TT->nro==24){
                Join522(LW5,veinticinco5,385,0);
            }
        }else if(pos==22){//Join516(imag,uno4,257,0);
            if(TT->nro==0){
                Join523(LW5,uno5,257,0);
            }else if(TT->nro==1){
                Join523(LW5,dos5,257,0);
            }else if(TT->nro==2){
                Join523(LW5,tres5,257,0);
            }else if(TT->nro==3){
                Join523(LW5,cuatro5,257,0);
            }else if(TT->nro==4){
                Join523(LW5,cinco5,257,0);
            }else if(TT->nro==5){
                Join523(LW5,seis5,257,0);
            }else if(TT->nro==6){
                Join523(LW5,siete5,257,0);
            }else if(TT->nro==7){
                Join523(LW5,ocho5,257,0);
            }else if(TT->nro==8){
                Join523(LW5,nueve5,257,0);
            }else if(TT->nro==9){
                Join523(LW5,diez5,257,0);
            }else if(TT->nro==10){
                Join523(LW5,once5,257,0);
            }else if(TT->nro==11){
                Join523(LW5,doce5,257,0);
            }else if(TT->nro==12){
                Join523(LW5,trece5,257,0);
            }else if(TT->nro==13){
                Join523(LW5,catorce5,257,0);
            }else if(TT->nro==14){
                Join523(LW5,quince5,257,0);
            }else if(TT->nro==15){
                Join523(LW5,dieciseis5,257,0);
            }else if(TT->nro==16){
                Join523(LW5,diecisiete5,257,0);
            }else if(TT->nro==17){
                Join523(LW5,dieciocho5,257,0);
            }else if(TT->nro==18){
                Join523(LW5,diecinueve5,257,0);
            }else if(TT->nro==19){
                Join523(LW5,veinte5,257,0);
            }else if(TT->nro==20){
                Join523(LW5,veintiuno5,257,0);
            }else if(TT->nro==21){
                Join523(LW5,veintidos5,257,0);
            }else if(TT->nro==22){
                Join523(LW5,veintitres5,257,0);
            }else if(TT->nro==23){
                Join523(LW5,veinticuatro5,257,0);
            }else if(TT->nro==24){
                Join523(LW5,veinticinco5,257,0);
            }
        }else if(pos==23){//Join516(imag,uno4,129,0);
            if(TT->nro==0){
                Join524(LW5,uno5,129,0);
            }else if(TT->nro==1){
                Join524(LW5,dos5,129,0);
            }else if(TT->nro==2){
                Join524(LW5,tres5,129,0);
            }else if(TT->nro==3){
                Join524(LW5,cuatro5,129,0);
            }else if(TT->nro==4){
                Join524(LW5,cinco5,129,0);
            }else if(TT->nro==5){
                Join524(LW5,seis5,129,0);
            }else if(TT->nro==6){
                Join524(LW5,siete5,129,0);
            }else if(TT->nro==7){
                Join524(LW5,ocho5,129,0);
            }else if(TT->nro==8){
                Join524(LW5,nueve5,129,0);
            }else if(TT->nro==9){
                Join524(LW5,diez5,129,0);
            }else if(TT->nro==10){
                Join524(LW5,once5,129,0);
            }else if(TT->nro==11){
                Join524(LW5,doce5,129,0);
            }else if(TT->nro==12){
                Join524(LW5,trece5,129,0);
            }else if(TT->nro==13){
                Join524(LW5,catorce5,129,0);
            }else if(TT->nro==14){
                Join524(LW5,quince5,129,0);
            }else if(TT->nro==15){
                Join524(LW5,dieciseis5,129,0);
            }else if(TT->nro==16){
                Join524(LW5,diecisiete5,129,0);
            }else if(TT->nro==17){
                Join524(LW5,dieciocho5,129,0);
            }else if(TT->nro==18){
                Join524(LW5,diecinueve5,129,0);
            }else if(TT->nro==19){
                Join524(LW5,veinte5,129,0);
            }else if(TT->nro==20){
                Join524(LW5,veintiuno5,129,0);
            }else if(TT->nro==21){
                Join524(LW5,veintidos5,129,0);
            }else if(TT->nro==22){
                Join524(LW5,veintitres5,129,0);
            }else if(TT->nro==23){
                Join524(LW5,veinticuatro5,129,0);
            }else if(TT->nro==24){
                Join524(LW5,veinticinco5,129,0);
            }
        }else if(pos==24){//Join516(imag,uno4,0,0);
            if(TT->nro==0){
                Join525(LW5,uno5,0,0);
            }else if(TT->nro==1){
                Join525(LW5,dos5,0,0);
            }else if(TT->nro==2){
                Join525(LW5,tres5,0,0);
            }else if(TT->nro==3){
                Join525(LW5,cuatro5,0,0);
            }else if(TT->nro==4){
                Join525(LW5,cinco5,0,0);
            }else if(TT->nro==5){
                Join525(LW5,seis5,0,0);
            }else if(TT->nro==6){
                Join525(LW5,siete5,0,0);
            }else if(TT->nro==7){
                Join525(LW5,ocho5,0,0);
            }else if(TT->nro==8){
                Join525(LW5,nueve5,0,0);
            }else if(TT->nro==9){
                Join525(LW5,diez5,0,0);
            }else if(TT->nro==10){
                Join525(LW5,once5,0,0);
            }else if(TT->nro==11){
                Join525(LW5,doce5,0,0);
            }else if(TT->nro==12){
                Join525(LW5,trece5,0,0);
            }else if(TT->nro==13){
                Join525(LW5,catorce5,0,0);
            }else if(TT->nro==14){
                Join525(LW5,quince5,0,0);
            }else if(TT->nro==15){
                Join525(LW5,dieciseis5,0,0);
            }else if(TT->nro==16){
                Join525(LW5,diecisiete5,0,0);
            }else if(TT->nro==17){
                Join525(LW5,dieciocho5,0,0);
            }else if(TT->nro==18){
                Join525(LW5,diecinueve5,0,0);
            }else if(TT->nro==19){
                Join525(LW5,veinte5,0,0);
            }else if(TT->nro==20){
                Join525(LW5,veintiuno5,0,0);
            }else if(TT->nro==21){
                Join525(LW5,veintidos5,0,0);
            }else if(TT->nro==22){
                Join525(LW5,veintitres5,0,0);
            }else if(TT->nro==23){
                Join525(LW5,veinticuatro5,0,0);
            }else if(TT->nro==24){
                Join525(LW5,veinticinco5,0,0);
            }
        }
        pos+=1;
        TT=TT->sgte;
    }
}


/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
int sobreescribirIMG5(Mat imag) {
    uno5 = imread("miniatura25.jpg", 1);
    dos5 = imread("miniatura24.jpg", 1);
    tres5 = imread("miniatura23.jpg", 1);
    cuatro5 = imread("miniatura22.jpg", 1);
    cinco5 = imread("miniatura21.jpg", 1);
    seis5 = imread("miniatura20.jpg", 1);
    siete5 = imread("miniatura19.jpg", 1);
    ocho5 = imread("miniatura18.jpg", 1);
    nueve5 = imread("miniatura17.jpg", 1);
    diez5 = imread("miniatura16.jpg", 1);
    once5 = imread("miniatura15.jpg", 1);
    doce5 = imread("miniatura14.jpg", 1);
    trece5 = imread("miniatura13.jpg", 1);
    catorce5 = imread("miniatura12.jpg", 1);
    quince5 = imread("miniatura11.jpg", 1);
    dieciseis5 = imread("miniatura10.jpg", 1);
    diecisiete5 = imread("miniatura9.jpg", 1);
    dieciocho5 = imread("miniatura8.jpg", 1);
    diecinueve5 = imread("miniatura7.jpg", 1);
    veinte5 = imread("miniatura6.jpg", 1);
    veintiuno5 = imread("miniatura5.jpg", 1);
    veintidos5 = imread("miniatura4.jpg", 1);
    veintitres5 = imread("miniatura3.jpg", 1);
    veinticuatro5 = imread("miniatura2.jpg", 1);
    veinticinco5 = imread("miniatura1.jpg", 1);
    LW5 = imag;

    int gen = 1;
    Poblacion M2 = Muestra;
    int fin = 0;
    while (M2 != NULL) {
        fin += 1;
        M2 = M2->sgte;
    }
    int cont = 0; //condicion para detenerse en el ultimo individuo con un wait infinito
    int cont2 = 0; //sirve para mostrar el numero de generacion
    while (Muestra != NULL) {
        if (continuar5 != 0) {
            revisar5(cont);
        }

        cout << "\n GENERACION :";
        if (cont2 == 3) {
            cont2 = 0;
            gen += 1;
        }
        cont2 += 1;
        cont += 1;
        cout << gen;
        cout << "\n";
        if (salto_generaciones5 == 0) {
            mostrar5(Muestra->individuo);
            disminuir5 = 0;
        }
        if (disminuir5 == 1) {
            salto_generaciones5 -= 1;
        }
        waitKey(tiempo5);
        reportarLista(Muestra->individuo);
        Muestra = Muestra->sgte;
        if (cont == fin) {
            cout << "FINALIZADO\n";
            waitKey(0);
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco25(Mat imag26){
    for(int y=384 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 25);
            Mat miniatura = CropCincoporcinco(imag26, x, y, 128, 96, nombre);
            Join5(imag26,miniatura,300,50);
            sobreescribirIMG5(imag26);
        }
    }
}
void cincoporcinco24(Mat imag25){
    for(int y=384 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 24);
            Mat miniatura = CropCincoporcinco(imag25, x, y, 128, 96, nombre);
            cincoporcinco25(imag25);
        }
    }
}
void cincoporcinco23(Mat imag24){
    for(int y=384 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 23);
            Mat miniatura = CropCincoporcinco(imag24, x, y, 128, 96, nombre);
            cincoporcinco24(imag24);
        }
    }
}
void cincoporcinco22(Mat imag23){
    for(int y=384 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 22);
            Mat miniatura = CropCincoporcinco(imag23, x, y, 128, 96, nombre);
            cincoporcinco23(imag23);
        }
    }
}
void cincoporcinco21(Mat imag22){
    for(int y=384 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 21);
            Mat miniatura = CropCincoporcinco(imag22, x, y, 128, 96, nombre);
            cincoporcinco22(imag22);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco20(Mat imag21){
    for(int y=288 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 20);
            Mat miniatura = CropCincoporcinco(imag21, x, y, 128, 96, nombre);
            cincoporcinco21(imag21);
        }
    }
}
void cincoporcinco19(Mat imag20){
    for(int y=288 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 19);
            Mat miniatura = CropCincoporcinco(imag20, x, y, 128, 96, nombre);
            cincoporcinco20(imag20);
        }
    }
}
void cincoporcinco18(Mat imag19){
    for(int y=288 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 18);
            Mat miniatura = CropCincoporcinco(imag19, x, y, 128, 96, nombre);
            cincoporcinco19(imag19);
        }
    }
}
void cincoporcinco17(Mat imag18){
    for(int y=288 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 17);
            Mat miniatura = CropCincoporcinco(imag18, x, y, 128, 96, nombre);
            cincoporcinco18(imag18);
        }
    }
}
void cincoporcinco16(Mat imag17){
    for(int y=288 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 16);
            Mat miniatura = CropCincoporcinco(imag17, x, y, 128, 96, nombre);
            cincoporcinco17(imag17);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco15(Mat imag16){
    for(int y=192 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 15);
            Mat miniatura = CropCincoporcinco(imag16, x, y, 128, 96, nombre);
            cincoporcinco16(imag16);
        }
    }
}
void cincoporcinco14(Mat imag15){
    for(int y=192 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 14);
            Mat miniatura = CropCincoporcinco(imag15, x, y, 128, 96, nombre);
            cincoporcinco15(imag15);
        }
    }
}
void cincoporcinco13(Mat imag14){
    for(int y=192 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 13);
            Mat miniatura = CropCincoporcinco(imag14, x, y, 128, 96, nombre);
            cincoporcinco14(imag14);
        }
    }
}
void cincoporcinco12(Mat imag13){
    for(int y=192 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 12);
            Mat miniatura = CropCincoporcinco(imag13, x, y, 128, 96, nombre);
            cincoporcinco13(imag13);
        }
    }
}
void cincoporcinco11(Mat imag12){
    for(int y=192 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 11);
            Mat miniatura = CropCincoporcinco(imag12, x, y, 128, 96, nombre);
            cincoporcinco12(imag12);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco10(Mat imag11){
    for(int y=96 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 10);
            Mat miniatura = CropCincoporcinco(imag11, x, y, 128, 96, nombre);
            cincoporcinco11(imag11);
        }
    }
}
void cincoporcinco9(Mat imag10){
    for(int y=96 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 9);
            Mat miniatura = CropCincoporcinco(imag10, x, y, 128, 96, nombre);
            cincoporcinco10(imag10);
        }
    }
}
void cincoporcinco8(Mat imag9){
    for(int y=96 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 8);
            Mat miniatura = CropCincoporcinco(imag9, x, y, 128, 96, nombre);
            cincoporcinco9(imag9);
        }
    }
}
void cincoporcinco7(Mat imag8){
    for(int y=96 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 7);
            Mat miniatura = CropCincoporcinco(imag8, x, y, 128, 96, nombre);
            cincoporcinco8(imag8);
        }
    }
}
void cincoporcinco6(Mat imag7){
    for(int y=96 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 6);
            Mat miniatura = CropCincoporcinco(imag7, x, y, 128, 96, nombre);
            cincoporcinco7(imag7);
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
void cincoporcinco5(Mat imag6){
    for(int y=0 ; y<=480; y+=96){
        for(int x=512; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 5);
            Mat miniatura = CropCincoporcinco(imag6, x, y, 128, 96, nombre);
            cincoporcinco6(imag6);
        }
    }
}
void cincoporcinco4(Mat imag5){
    for(int y=0 ; y<=480; y+=96){
        for(int x=385; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 4);
            Mat miniatura = CropCincoporcinco(imag5, x, y, 128, 96, nombre);
            cincoporcinco5(imag5);
        }
    }
}
void cincoporcinco3(Mat imag4){
    for(int y=0 ; y<=480; y+=96){
        for(int x=257; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 3);
            Mat miniatura = CropCincoporcinco(imag4, x, y, 128, 96, nombre);
            cincoporcinco4(imag4);
        }
    }
}
void cincoporcinco2(Mat imag3){
    for(int y=0 ; y<=480; y+=96){
        for(int x=129; x<=640; x+=128) {
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 2);
            Mat miniatura = CropCincoporcinco(imag3, x, y, 128, 96, nombre);
            cincoporcinco3(imag3);
        }
    }
}
void cincoporcinco1(Mat imag2){
    for(int y=0 ; y<=480; y+=96){
        for(int x=0; x<=640; x+=128){
            char nombre[50];
            sprintf(nombre, "miniatura%d.jpg", 1);
            Mat miniatura = CropCincoporcinco(imag2, x, y, 128, 96, nombre);
            cincoporcinco2(imag2);
        }
    }
}