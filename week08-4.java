//week08-4-bubble-balloon-part1
//��mouse�j��y(���w�w�̼˺C�C�ܤj)
void setup(){
  size(400,400);
}
int x,y,s;
void draw(){
  background(255);
  ellipse(x,y-s/2, s*0.7 ,s);
  if(mousePressed)s++;
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
  s = 1;
}
