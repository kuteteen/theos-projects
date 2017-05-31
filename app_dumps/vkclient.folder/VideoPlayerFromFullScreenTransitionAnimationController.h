/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIViewControllerAnimatedTransitioning.h"
#import "vkclient-Structs.h"
#import "UIViewControllerInteractiveTransitioning.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKMScrollViewController, UIView, NSString;
@protocol UIViewControllerContextTransitioning, VKVideoPlayerHolder, VideoPlayerFromFullScreenTransitionVideoViewDestination;

__attribute__((visibility("hidden")))
@interface VideoPlayerFromFullScreenTransitionAnimationController : XXUnknownSuperclass <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
	BOOL _interactive;
	BOOL _isDirectionUp;
	BOOL _useFallbackAnimation;
	BOOL _finishTransitionAsSoonAsStarted;
	BOOL _cancelTransitionAsSoonAsStarted;
	float _percentComplete;
	UIView* _backdrop;
	UIView* _initialVideoViewSuperview;
	int _initialVideoViewSubviewIndex;
	id<VKVideoPlayerHolder, VideoPlayerFromFullScreenTransitionVideoViewDestination> _videoViewDestination;
	id<UIViewControllerContextTransitioning> _interactiveTransitionContext;
	VKMScrollViewController* _destinationScrollViewController;
	id _transitionCompletionBlock;
	double _transitionDuration;
	CGRect _initialVideoViewFrame;
	CGRect _initialVideoViewFrameInContainerViewCoordinateSystem;
}
@property(readonly, assign, nonatomic) BOOL wantsInteractiveStart;
@property(readonly, assign, nonatomic) int completionCurve;
@property(readonly, assign, nonatomic) float completionSpeed;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isDirectionUp;
@property(readonly, assign, nonatomic) BOOL interactive;
@property(copy, nonatomic) id transitionCompletionBlock;
@property(assign, nonatomic) BOOL cancelTransitionAsSoonAsStarted;
@property(assign, nonatomic) BOOL finishTransitionAsSoonAsStarted;
@property(assign, nonatomic) __weak VKMScrollViewController* destinationScrollViewController;
@property(retain, nonatomic) id<UIViewControllerContextTransitioning> interactiveTransitionContext;
@property(assign, nonatomic) __weak id<VKVideoPlayerHolder, VideoPlayerFromFullScreenTransitionVideoViewDestination> videoViewDestination;
@property(assign, nonatomic) CGRect initialVideoViewFrameInContainerViewCoordinateSystem;
@property(assign, nonatomic) CGRect initialVideoViewFrame;
@property(assign, nonatomic) int initialVideoViewSubviewIndex;
@property(assign, nonatomic) __weak UIView* initialVideoViewSuperview;
@property(retain, nonatomic) UIView* backdrop;
@property(assign, nonatomic) BOOL useFallbackAnimation;
@property(assign, nonatomic) float percentComplete;
@property(assign, nonatomic) double transitionDuration;
-(void).cxx_destruct;
-(id)viewForAnimatingForContext:(id)context;
-(id)toViewControllerForContext:(id)context;
-(id)fromViewControllerForContext:(id)context;
-(id)findVideoViewDestinationForVideo:(id)video inView:(id)view;
-(void)performTransitionWithContext:(id)context completion:(id)completion;
-(void)setupWithTransitionContext:(id)transitionContext;
-(void)finishInteractiveTransitionWithCompletion:(id)completion;
-(void)cancelInteractiveTransitionWithCompletion:(id)completion;
-(void)updateInteractiveTransition:(float)transition;
-(void)startInteractiveTransition:(id)transition;
-(void)animateTransition:(id)transition;
-(double)transitionDuration:(id)duration;
-(id)initWithIsInteractive:(BOOL)isInteractive destinationScrollViewController:(id)controller;
-(id)init;
@end

