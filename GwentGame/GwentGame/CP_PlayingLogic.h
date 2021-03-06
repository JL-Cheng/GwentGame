//实现卡牌操作的相关逻辑

#pragma once
#ifndef CP_PLAYINGLOGIC_H
#define CP_PLAYINGLOGIC_H
#include"CP_Card.h"
#include"CP_AllCards.h"
#include"CardsUI.h"

class PlayingLogic
{
public:
	PlayingLogic(QList<CardsUI*> &aim_stack);
	~PlayingLogic() {}

	//对于卡牌进行操作（关键函数）
	//参数：card：打出的卡牌
	//返回值：卡牌发动技能之后的牌组信息
	QList<CardsUI*> operateCard(Card &card,int card_number);
	
private:
	QList<CardsUI*> cardStack;//用于储存卡牌的状态，将GamePlayingBackground中的卡牌状态进行更新

	AllCards allCards;

	//所有卡牌的技能函数
	void skill1(int number);
	void skill2(int number);
	void skill3(int number);
	void skill4(int number);
	void skill6(int number);
	void skill8(int number);
	void skill14(int number);
	void skill19(int number);
	void skill21(int number);
	void skill29(int number);

};

#endif // !CP_PLAYINGLOGIC_H
