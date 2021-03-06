#pragma once

#include "boost/noncopyable.hpp"

// Memo:unique_ptrは前方宣言だけで生成できない
#include "Scene.h"

class TakoTakoBantyoApp;

class SceneManager : private boost::noncopyable
{
public:
	
	SceneManager();

	void changeScene(const SceneType type);

private:

	void update();
	void draw();
	void resize();



	friend class TakoTakoBantyoApp;

	SceneSP scene_;
};