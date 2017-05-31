/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCollectionController.h"
#import "vkclient-Structs.h"

@class AudioPlaylistsInlineModel;

__attribute__((visibility("hidden")))
@interface AudioPlaylistsInlineController : VKMCollectionController {
}
@property(retain, nonatomic) AudioPlaylistsInlineModel* model;
-(void)model:(id)model updated:(id)updated;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(float)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(int)index;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(int)section;
-(id)VKMCollectionCreateLayout;
-(void)loadView;
@end

