## Credits
* **PistonMiner** for their work on the TTYD scripting disassembly, the initial code for the rel framework, and the elf2rel, gcipack, and rellink utilities. (GitHub repo for these tools [here](https://github.com/PistonMiner/ttyd-tools).)

## Overview
REL Loader for Super Mario Sunshine. Ported from the REL Loader for Paper Mario: The Thousand-Year Door.

## Prerequisites
To build this, you need to have devkitPPC installed. Instructions for doing so can be found [here](https://devkitpro.org/wiki/Getting_Started). You also need to place **elf2rel.exe** in the **bin** folder. This file can either be compiled manually, or downloaded from [here](https://github.com/PistonMiner/ttyd-tools/releases/download/v2.5/elf2rel.exe).

## Building
To build, you must first add **DEVKITPPC** and **SMSTOOLS** to your environment. **DEVKITPPC** should be set to the `devkitPPC` folder, and **SMSTOOLS** should be set to the `sms-tools` folder. Then, navigate to the root directory of the repository (the folder with the makefile in it) and run `make`. Any combination of rules can be applied to this.
`make us`
`make jp eu`
`make us eu`

