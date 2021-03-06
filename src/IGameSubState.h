#ifndef __IGAMESUBSTATE_H
#define __IGAMESUBSTATE_H

class CDrawArea;
class CGameGraphicsInterface;

class IGameSubState
{
public:
	inline virtual ~IGameSubState(){};
	virtual bool RunFrame() = 0;
	virtual void Draw(CDrawArea& aDirtyArea,CDrawArea& aDrawArea,CGameGraphicsInterface* aGGI) = 0;
	virtual void EnterState() = 0;
	virtual void ExitState() = 0;

}; 

#endif

