/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKPost, VKAttachments, VKIdentity, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ModelActionAddPost : ModelAction {
	BOOL _from_group;
	BOOL _ssigned;
	BOOL _friends_only;
	BOOL _facebook;
	BOOL _twitter;
	NSString* _message;
	VKAttachments* _attachments;
	id _place;
	NSNumber* _guid;
	NSNumber* _publish_date;
	int _publishOrigin;
	NSString* _successMessage;
	VKPost* _result;
}
@property(retain, nonatomic) VKPost* result;
@property(retain, nonatomic) NSString* successMessage;
@property(assign, nonatomic) int publishOrigin;
@property(retain, nonatomic) NSNumber* publish_date;
@property(retain, nonatomic) NSNumber* guid;
@property(assign, nonatomic) BOOL twitter;
@property(assign, nonatomic) BOOL facebook;
@property(assign, nonatomic) BOOL friends_only;
@property(assign, nonatomic) BOOL ssigned;
@property(assign, nonatomic) BOOL from_group;
@property(retain, nonatomic) id place;
@property(retain, nonatomic) VKAttachments* attachments;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) VKIdentity* target;
+(id)fakeEditAction:(id)action;
+(int)domainType;
-(id)actionSuccessMessage:(id)message;
-(int)actionResultForFailedRequestResult:(id)failedRequestResult;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(BOOL)isEditAction;
-(BOOL)isPublishAction;
-(id)title;
-(void)dealloc;
@end

