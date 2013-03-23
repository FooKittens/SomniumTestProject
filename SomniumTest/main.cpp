#include "SomniumEngine.h"
#include <Windows.h>

using SomniumEngine::System::Engine;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
            char *cmd, int cmdline)
{
  if(!Engine::Initialize())
  {
    MessageBox(NULL, "Failed to initialize SomniumEngine!"
      "\nPlease see Engine.log for more information!", "ERROR",
      MB_OK | MB_ICONERROR);
  }

  Engine *engine = Engine::GetInstance();
  if(!engine->Run())
  {
    MessageBox(NULL, "SomniumEngine has exited with an error!"
      "\nPlease see Errors.log and Engine.log for more information!", "ERROR",
      MB_OK | MB_ICONERROR);
  }
  
  return 0;
} 