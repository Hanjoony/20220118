#pragma once
class Player
{
public:				// 퍼블릭 여러번 사용 가능
	int HP;
	int MP;
	int Gold;

	void Collect();
	void Attack();
	void Move();
	void Run();
};

