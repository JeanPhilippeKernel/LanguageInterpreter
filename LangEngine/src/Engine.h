#pragma once

namespace LangEngine {
	
	class Engine {
	public:
		Engine() = default;
		virtual ~Engine() =  default;

		void Initialize();
		void Run();

	protected:
		bool m_is_running;
	};


	Engine* CreateEngine();
}