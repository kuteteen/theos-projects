/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VKIdentity, NSArray;

__attribute__((visibility("hidden")))
@interface VKLikesPreview : VKRenderable {
	BOOL _user_likes;
	BOOL _user_reposted;
	VKIdentity* _identity;
	NSArray* _likesUsers;
	int _likes_count;
	int _reposts_count;
}
@property(assign, nonatomic) int reposts_count;
@property(assign, nonatomic) BOOL user_reposted;
@property(assign, nonatomic) int likes_count;
@property(assign, nonatomic) BOOL user_likes;
@property(retain, nonatomic) NSArray* likesUsers;
@property(retain, nonatomic) VKIdentity* identity;
+(id)identity:(id)identity likes:(id)likes user:(id)user;
-(id)displayNameForFirstName:(id)firstName lastName:(id)name abbreviation:(BOOL)abbreviation;
-(id)previewText;
-(void)dealloc;
@end

