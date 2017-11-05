#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include <opencv2/highgui/highgui.hpp>
#include <thread>
#include "cincoxcinco.cpp"
#include "cuatroxcuatro.cpp"
#include "tresxtres.cpp"
#include "dosxdos.cpp"

using namespace cv;
using namespace std;
int tiempo=2000;
Mat img;

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

void call5x5(Mat imagen){
    iniciar(5);
    cincoporcinco1(imagen);
}
void call4x4(Mat imagen){
    iniciar(4);
    cuatroporcuatro1(imagen);
}
void call3x3(Mat imagen){
    iniciar(3);
    tresportres1(imagen);
}
void call2x2(Mat imagen){
    iniciar(2);
    dospordos1(imagen);
}

int main(int argc, char ** argv[]){
    CvCapture *pCapture = 0;
    IplImage *pVideoFrame = 0;

    int i=1;
    char filename[50];
// Inicializar video de captura
    pCapture = cvCaptureFromCAM(CV_CAP_ANY);
    if(!pCapture){
        fprintf(stderr, "Ocurrio una falla al momento de iniciar la captura de video.\n");
        return -1;
    }
// Captura dos cuadros de imagen y escribelos como archivos
    pVideoFrame = cvQueryFrame(pCapture);
    if(!pVideoFrame){
        fprintf(stderr, "Ocurrio una falla al obtener un cuadro de imagen\n");
    }
// Guarda el cuadro de imagen del video capturado como un archivo imagen
    sprintf(filename, "CuadroImagen%d.jpg", i);
    if(!cvSaveImage(filename, pVideoFrame,0)){
        fprintf(stderr, "Ocurrio un error al momento de guardar el archivo %s\n", filename);
    }
// Termina la captura de video y libera recursos
    cvReleaseCapture(&pCapture);

    img = imread("CuadroImagen1.jpg",IMREAD_COLOR);
    int decision;
    while(true){
        cout<<"Seleccione en cuanto desea partir la imagen: \n 2. 2X2 \n 3. 3X3 \n 4. 4X4 \n 5. 5X5 \n";
        cin>>decision;
         if(decision==2){
            call2x2(img);
        }else if(decision==3){

             call3x3(img);

        }else if(decision==4){

             call4x4(img);

        }else if(decision==5){

             call5x5(img);
        }
        break;
    }
}