/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPanGestureRecognizer, VKAPModel, NSString;
@protocol VKAPContentViewControllerSizeDelegate;

__attribute__((visibility("hidden")))
@interface VKAPTabsContentViewController : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	CGPoint startPos;
	CGPoint minPos;
	CGPoint maxPos;
	BOOL opened;
	BOOL animate;
	float animationDuration;
	BOOL _saveOffset;
	VKAPModel* _model;
	id<VKAPContentViewControllerSizeDelegate> _sizeDelegate;
	UIPanGestureRecognizer* _panGesture;
	unsigned _state;
	CGPoint _closedCenter;
	CGPoint _openedCenter;
	CGPoint _lastScrollPosition;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) CGPoint openedCenter;
@property(assign, nonatomic) CGPoint closedCenter;
@property(assign, nonatomic) BOOL saveOffset;
@property(assign, nonatomic) __weak id<VKAPContentViewControllerSizeDelegate> sizeDelegate;
@property(retain, nonatomic) VKAPModel* model;
@property(assign, nonatomic) CGPoint lastScrollPosition;
@property(retain, nonatomic) UIPanGestureRecognizer* panGesture;
-(void).cxx_destruct;
-(void)hide:(id)hide show:(id)show;
-(void)showVKAPTab:(int)tab;
-(id)currentViewController;
-(void)setupTabsViewControllers;
-(void)viewDidLoad;
-(id)initWithModel:(id)model;
-(float)offsetDelta:(CGPoint)delta;
-(id)currentScrollView;
-(CGPoint)currentContentOffset;
-(float)trueContentOffset;
-(void)saveContentOffset:(float)offset;
-(void)shouldChangeCenter:(CGPoint)center;
-(void)setOpened:(BOOL)opened animated:(BOOL)animated;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)panGestureExecute:(id)execute;
@end

