#include <iostream>
#include "bear.h"

const float g=9.8;

Bear::Bear(float nm, float nh, float nv0){
	m=nm;
	h=nh;
	v0=nv0;
	v=nv0;
	a=0;
	t=0;
};

Bear::~Bear(){};

float Bear::getHeight(){return h;};

float Bear::getMass(){return m;};

float Bear::getAcceleration(){return a;};

void Bear::setHeight(float nh){h=nh;};

void Bear::setSpeed0(float nv0){v0=nv0;};

float Bear::getSpeed(){return v;};

void Bear::move(float dt){
	bool f=1;
	if (h!=0){
		if (f){
			v-=g*t;
			h+=v0*t-(g*t*t)/2;
			if (v<0){
				v=v*(-1);
				f=0;
			};
		}
		else {
			v+=g*t;
			h-=(g*t*t)/2;
			if (h<0) {
				h=0;
				v=0;
			};
		};
	};
	t+=dt;
};

