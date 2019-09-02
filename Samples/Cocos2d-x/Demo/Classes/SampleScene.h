﻿/**
 * Copyright(c) Live2D Inc. All rights reserved.
 *
 * Use of this source code is governed by the Live2D Open Software license
 * that can be found at https://www.live2d.com/eula/live2d-open-software-license-agreement_en.html.
 */

#ifndef __SAMPLE_SCENE_H__
#define __SAMPLE_SCENE_H__

#include "cocos2d.h"
#include <Rendering/OpenGL/CubismOffscreenSurface_OpenGLES2.hpp>

class LAppView;

class SampleScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    static SampleScene* getInstance();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init() override;

    virtual void update(float delta) override;

    virtual void onExit() override;

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void menuChangeCallback(cocos2d::Ref* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(SampleScene);

    // constructor
    SampleScene();

private:
    LAppView* _pView;

    cocos2d::MenuItemImage* _changeItem;
    cocos2d::MenuItemImage* _closeItem;
};

#endif // __SAMPLE_SCENE_H__
