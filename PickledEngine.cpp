#include "olcConsoleGameEngine.h"

class olcEngine3D : public olcConsoleGameEngine
{
public:
	olcEngine3D()
	{
		m_sAppName = L"Pickled Engine";
	}
public:
	bool OnUserCreate() override
	{
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