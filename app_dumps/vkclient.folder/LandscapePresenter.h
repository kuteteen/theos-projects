/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIViewController;
@protocol LandscapePresenterDelegate;

__attribute__((visibility("hidden")))
@interface LandscapePresenter : XXUnknownSuperclass {
	BOOL rotationLock;
	BOOL _working;
	BOOL _rotating;
	id<LandscapePresenterDelegate> _delegate;
	UIViewController* _weakController;
	int _specificInterfaceOrientation;
	UIView* _transitionView;
}
@property(assign, nonatomic) int specificInterfaceOrientation;
@property(assign, nonatomic) BOOL rotating;
@property(assign, nonatomic) BOOL working;
@property(assign, nonatomic) UIViewController* weakController;
@property(assign, nonatomic) id<LandscapePresenterDelegate> delegate;
@property(retain, nonatomic) UIView* transitionView;
+(BOOL)isPresentedIn:(id)anIn;
+(id)backTitleForController:(id)controller;
-(void)landscapeNavigation:(id)navigation willPopAnimated:(BOOL)animated;
-(void)landscapeNavigation:(id)navigation willPush:(id)push animated:(BOOL)animated;
-(void)clearNow;
-(void)updateOrientation;
-(void)notificationRotated:(id)rotated;
-(id)originalNavigation;
-(void)unlockSpecificInterfaceOrientation;
-(void)lockSpecificInterfaceOrientation:(int)orientation;
-(void)dealloc;
-(void)foreground:(id)foreground;
-(void)background:(id)background;
-(id)init;
@end

