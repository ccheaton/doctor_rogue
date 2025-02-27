//
//  AppDelegate.h
//  Doctor Rogue
//


#import <UIKit/UIKit.h>
#import "cocos2d.h"
#import "GameStartGenerator.h"
#import "GameState.h"

// Added only for iOS 6 support
@interface MyNavigationController : UINavigationController <CCDirectorDelegate>
@end

@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (readonly) CCDirectorIOS *director;
@property (strong, nonatomic) GameStartGenerator *generator;
@property (strong, nonatomic) GameState *gameState;

@end
