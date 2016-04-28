//Globals
#include "global.hpp"
#ifndef GLOBAL
#define GLOBAL
string file_name = "surf_results_400_with_filter.csv";
int conf = 2000;
//string face_cascade_name = "lbpcascade_frontalface.xml";
string face_cascade_name = "haarcascade_frontalface_alt.xml";
string eye_cascade_name = "haarcascade_eye.xml";
CascadeClassifier face_cascade;
CascadeClassifier eye_cascade;
Ptr<SURF> surf = SURF::create(400);
cvSVM SVM;
#endif
