//Declaracao do command
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>

class StandardCommand
{
	public:
		virtual void execute() = 0;
		virtual void desligue() = 0;
		virtual ~StandardCommand() {}		
};

#endif
