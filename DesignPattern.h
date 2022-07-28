#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace DesignPattern {
	class Singleton
	{
	private:
		static Singleton* instance;
		int data;
		Singleton()
		{
			data = 0;
		}

	public:
		static Singleton* getInstance();
		int getData();
		void setData(int data);
	
	};
	void PrintSingleton();
}