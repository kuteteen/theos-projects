/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FeedModelContext.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WallModelContext : FeedModelContext {
	NSMutableSet* _knownPostIds;
}
@property(retain, nonatomic) NSMutableSet* knownPostIds;
-(void)spawnCopy:(id)copy;
-(void)dealloc;
@end

