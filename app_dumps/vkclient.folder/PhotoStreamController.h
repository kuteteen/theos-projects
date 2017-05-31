/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StreamCollectionController.h"
#import "ThumbnailViewDelegate.h"

@class NSString, PhotoStreamModel;

__attribute__((visibility("hidden")))
@interface PhotoStreamController : StreamCollectionController <ThumbnailViewDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) PhotoStreamModel* model;
+(id)cellClasses;
-(void)model:(id)model updated:(id)updated;
-(void)thumbnailView:(id)view selected:(id)selected;
-(id)configureCell:(id)cell atIndexPath:(id)indexPath withModelItem:(id)modelItem;
@end

