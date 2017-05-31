/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class VKPhoto, VKUser, NSString;

__attribute__((visibility("hidden")))
@interface VKRecommendedFriend : VKDomain {
	BOOL _friend;
	VKUser* _user;
	NSString* _descr;
	VKPhoto* _photo;
}
@property(assign, nonatomic, getter=isFriend) BOOL friend;
@property(retain, nonatomic) VKPhoto* photo;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) VKUser* user;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

