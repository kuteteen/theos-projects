/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SocialButtonsDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKPhoto, NSString;

__attribute__((visibility("hidden")))
@interface PhotoPostSocialButtonsDataSource : XXUnknownSuperclass <SocialButtonsDataSource> {
	VKPhoto* _photo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) VKPhoto* photo;
+(id)photo:(id)photo;
-(void).cxx_destruct;
-(void)actionShare:(id)share;
-(void)actionComment:(id)comment;
-(void)actionLike:(id)like;
-(BOOL)shared;
-(BOOL)liked;
-(int)numberOfShares;
-(BOOL)canShowViews;
-(int)numberOfViews;
-(int)numberOfComments;
-(int)numberOfLikes;
-(BOOL)canShare;
-(BOOL)canComment;
-(BOOL)canLike;
-(id)initWithPhoto:(id)photo;
@end

