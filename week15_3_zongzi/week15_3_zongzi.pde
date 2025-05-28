//week15-3-粽子
PImage zongzi;
void setup(){
  size(600,400);
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);//畫圖時 用正中心座標
} ///要把圖檔先拉到程式
float x,y;
void draw(){
  background(#C0ffee);
  image(zongzi,x,y,120,100);
  y++;
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
