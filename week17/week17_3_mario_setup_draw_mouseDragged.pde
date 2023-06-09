PImage mario,princess;
void setup()
{
   size(600,600); 
   mario = loadImage("mario.jpg");
   princess = loadImage("peach.png");
}
void draw()
{
    background(255);
    image(mario,0,0,300,300);
    image(princess,x,y);
}
float x = 300,y = 0;
void mouseDragged()
{
   x +=(mouseX-pmouseX);
   y +=(mouseY-pmouseY);
}
