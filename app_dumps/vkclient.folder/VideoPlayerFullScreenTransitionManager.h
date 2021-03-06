/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIViewControllerTransitioningDelegate.h"

@class VKMScrollViewController, NSString, UIPanGestureRecognizer, UIViewController, VideoPlayerFromFullScreenTransitionAnimationController;
@protocol VKVideoPlayerHolder, PanGestureDrivenDismissableTransitionViewController, VideoPlayerToFullScreenTransitionDelegate;

__attribute__((visibility("hidden")))
@interface VideoPlayerFullScreenTransitionManager : XXUnknownSuperclass <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
	id<VKVideoPlayerHolder, VideoPlayerToFullScreenTransitionDelegate> _playerProvider;
	UIViewController<PanGestureDrivenDismissableTransitionViewController>* _panGestureDismissableViewController;
	UIPanGestureRecognizer* _dismissTransitionPanGestureRecognizer;
	VideoPlayerFromFullScreenTransitionAnimationController* _dismissTransitionAnimationController;
	VKMScrollViewController* _initiallyPresentingScrollViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak VKMScrollViewController* initiallyPresentingScrollViewController;
@property(retain, nonatomic) VideoPlayerFromFullScreenTransitionAnimationController* dismissTransitionAnimationController;
@property(retain, nonatomic) UIPanGestureRecognizer* dismissTransitionPanGestureRecognizer;
@property(assign, nonatomic) __weak UIViewController<PanGestureDrivenDismissableTransitionViewController>* panGestureDismissableViewController;
@property(assign, nonatomic) __weak id<VKVideoPlayerHolder, VideoPlayerToFullScreenTransitionDelegate> playerProvider;
-(void).cxx_destruct;
-(void)cleanUpDismissTransitionPanGestureRecognizer;
-(void)cleanUpAfterInteractiveDismissTransitionCompletedFinished:(BOOL)finished;
-(void)finishInteractiveDismissTransition;
-(void)cancelInteractiveDismissTransition;
-(void)beginInteractiveDismissTransition;
-(float)dismissInteractiveTransitionProgressFromPanGestureRecognizer:(id)panGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)handleDismissTransitionPanGesture:(id)gesture;
-(void)setupViewControllerForDismissTransitionIfPossible:(id)dismissTransitionIfPossible;
-(id)interactionControllerForDismissal:(id)dismissal;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
-(void)dealloc;
-(id)initWithPlayerProvider:(id)playerProvider navDelegate:(id)delegate;
@end

