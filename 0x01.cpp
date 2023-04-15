#include <iostream>
#include "tgaimage.h"
using namespace std;

const TGAColor grey = TGAColor(100,100,100,255);
int main(int argc, char** argv){
    TGAImage img(50,50, TGAImage::RGB);
    img.set(10,10,grey);
    img.write_tga_file("out.tga");

    return 0;
}