#include <LangEngine.h>
#include <EntryPoint.h>

class Sandbox : public LangEngine::Engine {
public:
	Sandbox() = default;
};



LangEngine::Engine* LangEngine::CreateEngine() {
	return new Sandbox();
}

