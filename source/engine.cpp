# include <stdio.h>
#include "engine.h"

Engine::Engine()
{

}
Engine::~Engine()
{
}
void Engine::setPower(float p)
{
	power=p;
}
float Engine::getPower()
{
	return power;
}
