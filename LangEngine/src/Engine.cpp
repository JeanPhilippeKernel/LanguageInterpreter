#include "Engine.h"
#include <iostream>

namespace LangEngine {

	void Engine::Initialize() {
	
	}

	void Engine::Run() {
		while(true) {
			std::cout << ">";
			std::cin.get();
		}
	}
}