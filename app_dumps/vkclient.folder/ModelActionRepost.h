/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKIdentity, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionRepost : ModelAction {
	NSString* _message;
	NSNumber* _group;
	NSNumber* _reposts;
	NSNumber* _likes;
}
@property(retain, nonatomic) NSNumber* likes;
@property(retain, nonatomic) NSNumber* reposts;
@property(retain, nonatomic) NSNumber* group;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) VKIdentity* target;
+(id)repost:(id)repost messsage:(id)messsage group:(id)group;
+(int)domainType;
-(BOOL)hudSuccessEmptyVisible;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(void)dealloc;
@end
