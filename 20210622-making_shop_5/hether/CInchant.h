#pragma once

#define MAXINCHAN 20

class CInchant
{
private:
	//강화 확률: 배열을 이용해서 만든다.
	int InchanPer[MAXINCHAN];
	void Initialize();
	void IncnahtTitle();

	tagPlayer PlayInchant(tagPlayer Player, tagItem* Item);

public:
	tagPlayer Management(tagPlayer Player, tagItem* Item);
};
