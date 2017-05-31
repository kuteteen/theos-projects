/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"
#import "VKRemoteAction.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VKRemoteActionOpenUrl : VKRenderable <VKRemoteAction> {
	NSURL* _url;
	int _target;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int target;
@property(retain, nonatomic) NSURL* url;
+(id)actionWithUrl:(id)url target:(int)target;
-(void).cxx_destruct;
-(void)runInContext:(id)context completion:(id)completion;
-(BOOL)process:(id)process context:(id)context;
-(id)initWithUrl:(id)url target:(int)target;
-(int)remoteActionType;
@end

