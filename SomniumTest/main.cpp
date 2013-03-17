#include "SomniumEngine.h"
#include <Windows.h>

using SomniumEngine::System::Engine;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
            char *cmd, int cmdline)
{
  Engine *engine = Engine::GetInstance();
  if(engine->InitializeSystem(SubSystemWindows) &&
     engine->InitializeSystem(SubSystemGraphics))
  {
    engine->Run();
  }
  else
  {
    MessageBoxW(NULL, L"SomniumEngine has exited with an error!"
      L"\nPlease see Errors.log and Engine.log for more information!", L"ERROR",
      MB_OK | MB_ICONERROR);
  }
  
  return 0;
} 