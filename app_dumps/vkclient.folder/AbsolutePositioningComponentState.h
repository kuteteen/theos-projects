/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class Component5;

__attribute__((visibility("hidden")))
@interface AbsolutePositioningComponentState : XXUnknownSuperclass {
	Component5* _container;
	Component5* _component;
	CGPoint _position;
}
@property(readonly, assign, nonatomic) CGPoint position;
@property(readonly, assign, nonatomic) Component5* component;
@property(readonly, assign, nonatomic) Component5* container;
+(id)container:(id)container component:(id)component position:(CGPoint)position;
-(void).cxx_destruct;
-(id)initWithContainer:(id)container component:(id)component position:(CGPoint)position;
@end

