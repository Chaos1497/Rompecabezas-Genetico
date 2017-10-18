#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include <opencv2/highgui/highgui.hpp>
#include "cincoxcinco.cpp"
#include "cuatroxcuatro.cpp"
#include "tresxtres.cpp"
#include "dosxdos.cpp"
#include <iostream>

using namespace cv;
using namespace std;

/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------*/

int main(int argc, char ** argv){
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

    Mat laWea = imread("CuadroImagen1.jpg",IMREAD_COLOR);
    dospordos1(laWea);
    //tresportres1(laWea);
    //cuatroporcuatro1(laWea);
    //cincoporcinco1(laWea);
}