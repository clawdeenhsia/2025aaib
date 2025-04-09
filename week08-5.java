
//week08-5-bubble-balloon-part2
//用mouse吹氣球(像泡泡依樣慢慢變大)
void setup(){
  size(400,400);
}
int x,y,s;
void draw(){
  background(255);
  ellipse(x,y-s/2, s*0.7 ,s);
  if(mousePressed)s++;
  else{
    if(y>s)y-=2;
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
  s = 1;
}
