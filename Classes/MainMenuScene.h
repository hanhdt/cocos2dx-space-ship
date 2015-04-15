#ifndef __MAINMENU_SCENE_H__
#define __MAINMENU_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class MainMenu : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainMenu);

    void goToGameScene(cocos2d::Ref *pSender);

private:
//    cocos2d::PhysicsWorld * sceneWorld;
//    void SetPhysicsWorld( cocos2d::PhysicsWorld *world) { sceneWorld = world; };
};

#endif // __MAINMENU_SCENE_H__
