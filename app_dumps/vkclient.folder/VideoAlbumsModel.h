/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class VideoAlbumContext;

__attribute__((visibility("hidden")))
@interface VideoAlbumsModel : ListModel {
	BOOL _needSystem;
	VideoAlbumContext* _albumsContext;
}
@property(assign, nonatomic) BOOL needSystem;
@property(retain, nonatomic) VideoAlbumContext* albumsContext;
-(void)handleAdd:(id)add :(id)arg2;
-(void)handleEdit:(id)edit :(id)arg2;
-(void)handleDelete:(id)aDelete :(id)arg2;
-(BOOL)isOwnerAlbum:(id)album;
-(void)registerForEvents:(id)events;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(id)countKey;
-(int)defaultPage;
-(void)dealloc;
@end

