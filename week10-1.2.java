//week10-1-happy-bubble-part1
PImage toy1, toy2; //�ܼƫŧi
//int a,b;
void setup(){
  size(400,495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1);
  if(mousePressed) image(toy2,0,0);
}
