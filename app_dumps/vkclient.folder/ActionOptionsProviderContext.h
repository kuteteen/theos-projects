/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ActionOptionsProviderContext.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKSession, ActionContext, NSString;

@protocol ActionOptionsProviderContext <NSObject>
-(id)session;
-(id)actionContext;
-(int)renderContext;
@end

__attribute__((visibility("hidden")))
@interface ActionOptionsProviderContext : XXUnknownSuperclass <ActionOptionsProviderContext> {
	ActionContext* _actionContext;
	VKSession* _session;
	int _renderContext;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int renderContext;
@property(readonly, assign, nonatomic) VKSession* session;
@property(readonly, assign, nonatomic) ActionContext* actionContext;
+(id)session:(id)session renderContext:(int)context;
+(id)session:(id)session;
+(id)actionContext:(id)context renderContext:(int)context2;
+(id)actionContext:(id)context;
-(void).cxx_destruct;
@end

