/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "DetailModel.h"


__attribute__((visibility("hidden")))
@interface VideoDetailModel : DetailModel {
	BOOL _commentsMode;
	XXStruct_pwHToB _startPlaybackTime;
}
@property(assign, nonatomic) XXStruct_pwHToB startPlaybackTime;
@property(assign, nonatomic) BOOL commentsMode;
+(void)buildItemAndSource:(id)source detail:(id)detail;
-(void)fillActions:(id)actions refill:(id)refill;
-(void)handleEditVideo:(id)video :(id)arg2;
-(void)handleRepost:(id)repost :(id)arg2;
-(void)handleLike:(id)like :(id)arg2;
-(void)registerForEvents:(id)events;
-(BOOL)showLikesForItem:(id)item;
-(BOOL)canComment;
-(id)componentForObject:(id)object withContext:(id)context;
-(id)componentForVideo:(id)video;
-(id)parseItem:(id)item detail:(id)detail;
@end

