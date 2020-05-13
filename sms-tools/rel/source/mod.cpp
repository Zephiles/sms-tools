#include "mod.h"
#include "patch.h"

namespace mod {

Mod *gMod = nullptr;

void main()
{
	Mod *mod = new Mod();
	mod->init();
}

Mod::Mod()
{
	
}

void Mod::init()
{
	gMod = this;
	
#ifdef SMS_US
	uint32_t runMainAddress = 0x802A5F98;
#endif
	
	// Hook an arbitrary address in the game loop that runs exactly once per frame
	mPFN_runMain_trampoline = patch::hookFunction(
		reinterpret_cast<void (*)()>(runMainAddress), []()
	{
		gMod->runMain();
	});
}

void Mod::runMain() // This function runs exactly once per frame
{
	// Place code here
	
	// Call the original function to return to the game loop
	mPFN_runMain_trampoline();
}

}