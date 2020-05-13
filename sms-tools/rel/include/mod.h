#pragma once

#include <cstdint>

namespace mod {

class Mod
{
public:
	Mod();
	void init();
  
private:
	void runMain();
	
private:
	void (*mPFN_runMain_trampoline)() = nullptr;
};

}