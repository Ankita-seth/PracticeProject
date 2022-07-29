#include "DesignPattern.h"
using namespace DesignPattern;

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton* Singleton::instance = nullptr;


DesignPattern::Singleton* DesignPattern::Singleton::getInstance()
{
	if (!instance)
	instance = new Singleton();
	return instance;
}

int DesignPattern::Singleton::getData()
{
	return this->data;
}

void DesignPattern::Singleton::setData(int data)
{
	this->data = data;
}

void DesignPattern::PrintSingleton()
{
	Singleton* s = Singleton::getInstance();
	cout << s->getData() << endl;
	s->setData(rand());
	cout << s->getData() << endl;	
}
