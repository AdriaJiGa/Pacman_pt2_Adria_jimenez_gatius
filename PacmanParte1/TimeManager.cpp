#include "TimeManager.h"

TimeManager& TimeManager::getInstance()
{
	static TimeManager timeManager;
	return timeManager;
	
	// TODO: Insertar una instrucci�n "return" aqu�
}

void TimeManager::nextFrame()
{
	frameCount++;
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	deltaTime = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count() / (float)1000;
	time += deltaTime;
	start = std::chrono::high_resolution_clock::now();
}
