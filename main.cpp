#include "Bitmap/bitmap.h"
#include <iostream>
#include <vector>

using namespace std;

//argc - number of arguments in command
//argv - each argument word, stored in an array
int main(int argc, char* argv[])
{
  Bitmap image;
  image.open("kendall.bmp");
  cout << argc << endl;
  cout << argv[0] << endl;
  vector<vector<Pixel> > imagePixels;
  int numrows = 0;
  int numcollumns = 0;
  Pixel color;
  if ( argc <= 1 )
  {
    cout << "Please spcify one image file!" << endl;
  }
  bool validBmp = image.isImage();
  if ( validBmp == true )
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
  imagePixels = image.toPixelMatrix();
  for ( int row = 0; row < imagePixels.size(); row++)
  {
    numrows = numrows + 1;
  
  for ( int collumn = 0; collumn < imagePixels[row].size(); collumn++)
    {
      
      
      color.green = 0;
      color.blue = 0;

    }
   }
   image.fromPixelMatrix( imagePixels );
   image.save("redness.bmp");
  cout << imagePixels.size() << endl;
  cout << imagePixels[0].size() << endl;
  return 0;
}
