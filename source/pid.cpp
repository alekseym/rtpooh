

#include <stdio.h>
#include "pid.h"
#include "bear.h"


PID::PID(){
	h=0;
	tt=1000;
	ht=0;
	a=0;
	l=0;
}
PID::~PID(){
}
float PID::gettt(){
	return tt;
}
void PID::seth(float hh){
	h=hh;
}
void PID::setht(float bb){
	ht=bb;
}
float PID::geta(){
	return a;
}
float PID::getl(){
	return l;
}
void PID::calc(){
	Bear r;
	float k=10;
	tt=tt+(h-ht)*k;
	l=tt*0.01;
	a=(l-r.getMass()*9.8)/r.getMass();
	
}
