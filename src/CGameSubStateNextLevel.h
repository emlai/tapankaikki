#ifndef __CGAMESUBSTATENEXTLEVEL_H_
#define __CGAMESUBSTATENEXTLEVEL_H_

#include "IGameSubState.h"

class IGameSubStateController;

class CGameSubStateNextLevel : public IGameSubState 
{
public:
	CGameSubStateNextLevel(IGameSubStateController* aSubStateController);

public: // From IGUIState
	~CGameSubStateNextLevel();

	// return true if draw is needed
	bool RunFrame();
	void Draw(CDrawArea& aDirtyArea,CDrawArea& aDrawArea,CGameGraphicsInterface* aGGI);
	
	void EnterState();
	void ExitState();
private:
	IGameSubStateController* iStateController;
};

#endif

