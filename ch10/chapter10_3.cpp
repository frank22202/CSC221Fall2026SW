#include "Pixel.h"
#include "ImageFunctions.h"

using namespace std;

int main(int argc, const char * argv[])
{
    //Declare objects.
    int width, height;
    string filename;
    
    //Build image using 2D vector of Pixel
    vector< vector< Pixel > > box;
    
    cout << "enter width and height of image ";
    cin >> width >> height;
    
    createYellowBox(width, height);
    
    writeImage(box, filename);
    cout << "image written to " << system("pwd") << endl << filename << endl;
    return 0;
}
