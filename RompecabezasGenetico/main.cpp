#include <stdio.h>
#include "cv.h"
#include "highgui.h"
#include <opencv2/highgui/highgui.hpp>
#include <gtk/gtk.h>
#include "cincoxcinco.cpp"
#include "cuatroxcuatro.cpp"
#include "tresxtres.cpp"
#include "dosxdos.cpp"
#include "Genetic.h"
#include <iostream>

using namespace cv;
using namespace std;

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

    Mat img = imread("CuadroImagen1.jpg",IMREAD_COLOR);
    //call5x5(img);
    //call4x4(img);
    //call3x3(img);
    call2x2(img);

}

/*int main (int argc, char *argv[]){
    GtkWidget *button = NULL;
    GtkWidget *win = NULL;
    GtkWidget *vbox = NULL;

    g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
    gtk_init (&argc, &argv);
    g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

    win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_container_set_border_width (GTK_CONTAINER (win), 100);
    gtk_window_set_title (GTK_WINDOW (win), "Rompecabezas genético");
    gtk_window_set_position (GTK_WINDOW (win), GTK_WIN_POS_CENTER);
    gtk_widget_realize (win);
    g_signal_connect (win, "destroy", gtk_main_quit, NULL);

    vbox = gtk_vbox_new (TRUE, 6);
    gtk_container_add (GTK_CONTAINER (win), vbox);

    button = gtk_button_new_from_stock (GTK_STOCK_CLOSE);
    g_signal_connect (button, "clicked", gtk_main_quit, NULL);
    gtk_box_pack_start (GTK_BOX (vbox), button, TRUE, TRUE, 0);

    button = gtk_button_new_from_stock ("Stop");
    g_signal_connect(button, "clicked", G_CALLBACK(main2(argc, argv)), button);
    gtk_box_pack_start(GTK_BOX(vbox), button, 0,0,0);

    button = gtk_button_new_from_stock ("Pause");
    g_signal_connect(button, "clicked", G_CALLBACK(Pausar), button);
    gtk_box_pack_start(GTK_BOX(vbox), button, 0,0,0);

    button = gtk_button_new_from_stock ("Pass");
    g_signal_connect(button, "clicked", G_CALLBACK(Adelantar), button);
    gtk_box_pack_start(GTK_BOX(vbox), button, 0,0,0);

    gtk_widget_show_all (win);
    gtk_main ();
    return 0;
}*/