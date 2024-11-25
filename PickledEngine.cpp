#include "olcConsoleGameEngine.h"

struct vec2d 
{
	float x, y;
};

class triangle
{
public:
	triangle()
	{
		vec2d coordA;
		vec2d coordB;
		vec2d coordC;

		coordA.x = 0.0f;
		coordA.y = 0.0f;

		coordB.x = 0.0f;
		coordB.y = 0.0f;

		coordC.x = 0.0f;
		coordC.y = 0.0f;
	}

public:
	bool rotate(float T)
	{

	}
};

class olcEngine3D : public olcConsoleGameEngine
{
public:
	olcEngine3D()
	{
		m_sAppName = L"Pickled Engine";
	}

private:
	triangle triangle1;

public:
	bool OnUserCreate() override
	{
		//triangle1.p = [0.0f, 0.0f, 1.0f, -2.0f, -1.0f, -2.0f];
		
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};

int main()
{
	olcEngine3D engine;
	if (engine.ConstructConsole(250, 250, 4, 4))
	{
		engine.Start();
	}
	return 0;
}