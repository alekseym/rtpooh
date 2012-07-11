#include <iostream>
#include "bear.h"

const float g=9.8;

Bear::Bear()
{
  m = 5;
  h = 0;
  H = 0;
  v = 0;
  a = 0;
  
}


Bear::Bear(float nm, float nH){
	m=nm;
	H=nH;
	a=0;
	h=0;
	t=0;
	v = 0;
}

Bear::~Bear()
{

}


void Bear::flyup(){
	h+=a*0.1*0.1/2;
}

void Bear::flydown(){
	h+=a*0.1*0.1/2;
	if(h<0) h=0;
}

void Bear::eat(){
	m+=0.1;
}

void Bear::freeze(){
	if (h==H) eat();
}

void Bear::step(){
//	a=(getF()-m*g)/m          //функция getF() в классе двигателя, возвращает тягу
	t+=0.1;
	if (a>0) 
	   flyup();
	if (a==g) 
	   freeze();
	if (a<0) 
	   flydown();
}
	
float Bear::getHeight()
{
  return h;
}

float Bear::getMass()
{
  return m;
}

float Bear::getAcceleration()
{
  return a;
}

void Bear::setHollowHeight(float nH)
{ 
   h=nH;
}

float Bear::getHollowHeight()
{
  return H;
}

