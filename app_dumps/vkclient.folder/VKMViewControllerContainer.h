/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "VKMController.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface VKMViewControllerContainer : VKMController {
	UIViewController* _currentViewController;
}
@property(retain, nonatomic) UIViewController* currentViewController;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)unsubscribeViewController:(id)controller;
-(void)subscribeViewController:(id)controller;
-(void)updateWithViewController:(id)viewController;
-(void)viewDidLoad;
-(void)unsetCurrentViewController:(id)controller;
-(void)setupCurrentViewController:(id)controller;
-(void)removeViewControllerFromHierarchy:(id)hierarchy;
-(void)addCurrentViewControllerToHierarchy:(id)hierarchy;
-(void)dealloc;
@end

