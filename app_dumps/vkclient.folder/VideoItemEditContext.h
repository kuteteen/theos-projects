/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSwitchEditItemContext.h"
#import "ItemEditContext.h"

@class VKVideo, NSString;

__attribute__((visibility("hidden")))
@interface VideoItemEditContext : ItemEditContext <VKSwitchEditItemContext> {
	BOOL _comments_disabled;
	id _handler;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) BOOL comments_disabled;
@property(retain, nonatomic) VKVideo* domain;
-(id)commentsDisabledTitle;
-(void)setCommentsDisabled:(BOOL)disabled;
-(BOOL)commentsDisabled;
-(int)descrMax;
-(int)descrMin;
-(int)titleMax;
-(int)titleMin;
-(id)descrPlaceholder;
-(id)titlePlaceholder;
-(id)editTitle;
-(Class)editControllerClass;
-(BOOL)editPrivacy;
-(void)useDomain:(id)domain edit:(BOOL)edit;
-(id)confirmAction:(id)action;
-(void)dealloc;
@end

