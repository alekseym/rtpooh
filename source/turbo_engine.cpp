# include <stdio.h>
#include "turbo_engine.h"


TurboEngine::TurboEngine()
{
  k = 10;
}
TurboEngine::~TurboEngine()
{

}
void TurboEngine::setRounds(int r)
{
	rounds=r;
}


int TurboEngine::getRounds()
{
	return rounds;
}


float TurboEngine::getPower()
{
	float l;
	l=k*(float)rounds;
	return l;
}


