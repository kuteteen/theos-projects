/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKTopicComment, NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionAddBoardComment : ModelAction {
	BOOL _from_group;
	id _comments;
	NSNumber* _guid;
}
@property(retain, nonatomic) NSNumber* guid;
@property(retain, nonatomic) id comments;
@property(assign, nonatomic) BOOL from_group;
@property(retain, nonatomic) VKTopicComment* target;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(void)dealloc;
@end

