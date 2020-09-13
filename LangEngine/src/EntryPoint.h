#pragma once

#include <memory>


int main(int argc, char *argv[])
{
	std::unique_ptr<LangEngine::Engine> engine;
	engine->Initialize();
	engine->Run();

	return 0;
}
