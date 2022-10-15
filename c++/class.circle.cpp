#include<iostream>
//#include "msoftcon.h"
using namespace std;
class circle
{
    protected:
    int xCo,yCo;
    int radius;
    colour fillcolour;
    fstyle fillstyle;
    public:
    void draw();
    void setdata(int x,int y,int r,colour fc,fstyle fs)
        {
        xCo=x;
        yCo=y;
        radius=r;
        fillcolour=fc;
        fillstyle=fs;
        }
      
};
void circle::draw()
{
    set_colour(fillcolour);
    set_fill_style(fillstyle);
    draw_circle(xCo,yCo,radius);
    
}
int main()
{
    init_graphics();
    circle c1;
    circle c2;
    circle c3;
    
    c1.setdata(15,7,5,cBlue,X_FILL);
    c2.setdata(41, 12, 7, cRed, O_FILL);
    c3.setdata(65, 18, 4, cGreen, MEDIUM_FILL);
    c1.draw();
    c2.draw();
    c3.draw();
    set_cursor_pos(1,25);
    
    
}