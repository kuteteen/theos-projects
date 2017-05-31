/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "VKAPTabViewControllerProtocol.h"
#import "AudioListController.h"

@class VKAPAudioAlbumModel, NSString;

__attribute__((visibility("hidden")))
@interface VKAPAudioAlbumViewController : AudioListController <VKAPTabViewControllerProtocol> {
	BOOL searchWorkaroundEnabled;
	id _expandParent;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAPAudioAlbumModel* model;
@property(copy, nonatomic) id expandParent;
-(void).cxx_destruct;
-(id)scrollView;
-(BOOL)VKMScrollViewDisablePTR;
-(int)VKMTableSearchMode;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(void)VKMNavigationBarUpdate;
-(void)viewWillAppear:(BOOL)view;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(id)vkm_containerController;
-(void)searchControllerDidChangedActive:(id)searchController;
-(void)searchControllerChangedActive:(id)active;
@end

