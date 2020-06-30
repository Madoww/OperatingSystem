#pragma once
#include "UserInterface.h"

class InternalApplication
{
public:
	virtual void OpenWindow() { if(appWindow == NULL)appWindow = UserInterface::instance().OpenWindow(); }
	//virtual void Initialize(); //Opens a window, load all data
	virtual void Draw() {}; //Draws all elements onto a window
	//virtual void Update(); //Updates applications status
protected:
	ApplicationWindow* appWindow;
	virtual ~InternalApplication() 
	{
		UserInterface::instance().CloseWindowWithID(appWindow->getWindowID());
	}
};