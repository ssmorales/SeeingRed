#include "Bitmap/bitmap.h"
#include <iostream>
#include <vector>

using namespace std;

//argc - number of arguments in command
//argv - each argument word, stored in an array
int main(int argc, char* argv[])
{
  Bitmap image;
  image.open(argv[1]);
  vector<vector<Pixel> > imagePixels;
  int numrows = 0;
  int numcollumns = 0;
  Pixel color;
  if ( argc <= 1 || argc >= 3 )
  {
    cout << "Please spcify one image file!" << endl;
  }
  bool validBmp = image.isImage();
  if ( validBmp == true )
  {
    
  
  
  imagePixels = image.toPixelMatrix();
    for ( int row = 0; row < imagePixels.size(); row++)
    {
      numrows = numrows + 1;
  
    for ( int collumn = 0; collumn < imagePixels[row].size(); collumn++)
      {
      
        color = imagePixels[row][collumn];   
        color.green = 0;
        color.blue = 0;
        imagePixels[row][collumn] = color;
        //image.fromPixelMatrix( imagePixels );
       // image.save("redness.bmp");
      }
     }
    }
    else
    {
      cout << "Image file must be a bitmap with 24-bit color depth." << endl;
    }
   image.fromPixelMatrix( imagePixels );
   image.save("redness.bmp");
  cout << argv[1] << " is " <<  imagePixels.size() << " pixels high and " << imagePixels[0].size() << " Pixels wide." << endl;

  return 0;
}
