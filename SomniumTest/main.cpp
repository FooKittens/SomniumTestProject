

#include "SomniumEngine.h"
#include <Windows.h>

using SomniumEngine::System::Engine;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
            char *cmd, int cmdline)
{
  Engine *engine = Engine::GetInstance();
  engine->InitializeSystem(SubSystemWindows);
  engine->Run();

  return 0;
}