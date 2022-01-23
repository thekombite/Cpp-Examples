#include <iostream>

using namespace std;

class Rectangle{
public:
int width;
int height;
   virtual void display(){
      cout << height << " " << width << endl;
   }
   Rectangle(int w, int h){
      
   }

};

class RectangleArea:public Rectangle{
public:
   void read_input(){
      int hei, wid;
      cin >> hei >> wid;
      height = hei;
      width = wid;
   }
   void display(){
      cout << height*width;
   }

   RectangleArea():Rectangle(width, height){
      height = 0;
      width = 0;
   };

};

/*
 * Create classes Rectangle and RectangleArea
 */


int main()
{
    RectangleArea r_area;
    

    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}