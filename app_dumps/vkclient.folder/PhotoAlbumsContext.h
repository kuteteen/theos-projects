/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModelContext.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface PhotoAlbumsContext : ListModelContext {
	NSArray* _albums;
	int _loadedAlbums;
}
@property(assign, nonatomic) int loadedAlbums;
@property(retain, nonatomic) NSArray* albums;
-(void)spawnCopy:(id)copy;
-(void)dealloc;
@end

