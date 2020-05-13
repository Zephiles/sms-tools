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
#elif defined SMS_JP0
	uint32_t runMainAddress = 0x800F999C;
#elif defined SMS_JP1
	uint32_t runMainAddress = 0x80285DF4;
#elif defined SMS_EU
	uint32_t runMainAddress = 0x8029DEA8;
#else
#error Unknown version used.
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