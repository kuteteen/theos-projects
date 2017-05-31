/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class FeedModelStatContext;
@protocol VKSourceStatus, VKSource;

__attribute__((visibility("hidden")))
@interface VKItemSource : VKRenderable {
	id<VKSource> _source;
	id<VKSourceStatus> _item;
	FeedModelStatContext* _statContext;
}
@property(retain, nonatomic) FeedModelStatContext* statContext;
@property(retain, nonatomic) id<VKSourceStatus> item;
@property(retain, nonatomic) id<VKSource> source;
+(id)item:(id)item source:(id)source statContext:(id)context;
-(void)dealloc;
@end

