/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "Component5StateListener.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class Component5, NSString;
@protocol VKMNavDelegate;

__attribute__((visibility("hidden")))
@interface Component5HostView : XXUnknownSuperclass <Component5StateListener> {
	Component5* _component;
	id<VKMNavDelegate> _navDelegate;
	CGPoint _componentOrigin;
	UIEdgeInsets _componentInsets;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) UIEdgeInsets componentInsets;
@property(assign, nonatomic) CGPoint componentOrigin;
@property(assign, nonatomic) id<VKMNavDelegate> navDelegate;
@property(retain, nonatomic) Component5* component;
+(id)nodeForComponent:(id)component withSizeConstraints:(XXStruct_JC2WWA)sizeConstraints;
-(void).cxx_destruct;
-(void)component:(id)component didUpdateState:(id)state toState:(id)state3 animated:(BOOL)animated;
-(void)setComponent:(id)component withNode:(id)node;
-(void)setFrame:(CGRect)frame;
-(void)updateComponent;
-(void)dealloc;
@end

