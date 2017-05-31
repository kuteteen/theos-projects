/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PostEditContext.h"

@class VKComment, VKStickerReferrerContext, VKIdentity;

__attribute__((visibility("hidden")))
@interface CommentEditContext : PostEditContext {
	VKIdentity* _parentIdentity;
	VKStickerReferrerContext* _stickerReferrerContext;
}
@property(retain, nonatomic) VKStickerReferrerContext* stickerReferrerContext;
@property(retain, nonatomic) VKIdentity* parentIdentity;
@property(retain, nonatomic) VKComment* domain;
+(int)attachmentsLimit;
-(unsigned)textLengthMax;
-(unsigned)textLengthMin;
-(id)title;
-(id)buildPostOptions;
-(void)useDomain:(id)domain edit:(BOOL)edit;
-(id)uploadTarget;
-(BOOL)autoDetectLinks;
-(id)confirmAction:(id)action;
-(id)withParentIdentity:(id)parentIdentity;
-(void)dealloc;
@end

