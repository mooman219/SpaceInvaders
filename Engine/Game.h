#pragma once
#include <vector>
#include <queue>

#if _DX_
#include <d3d11.h>
#endif

using namespace std;

class Actor;
class Input;

class Game
{
	Input* _input;
	vector<Actor*> allActors;
	vector<Actor*> renderActor;
	queue<int> removeIndexs;

#if _DX_

#endif

public:
	Game();
	void Start(Input* input);

	void Update();

	void Render();

	void AddActor(Actor* act);
};