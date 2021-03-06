#pragma once
#include <string>
#include <unordered_map>
struct TGUID;
using namespace std;

class Component;
class RenderComponent;
class ModelComponent;

class Actor
{
protected:
	string name;
	string tag;
	TGUID *guid;
	unordered_map<string, Component*> components;
	RenderComponent* renderer;
	ModelComponent* model;
	bool toClean;

	
public:
	Actor();
	virtual void Start();
	virtual void Update();
	string GetName();
	Component* GetComponent(string componentName);
	RenderComponent* GetRenderer();
	ModelComponent* GetModel();
	virtual void OnCollision(Actor*);
	bool GetClean()
	{
		return toClean;
	};

	virtual void Cleanup()
	{

	};
	void ComponentCleanup();
	string GetTag()
	{
		return tag;
	};
};