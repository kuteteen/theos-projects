/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"

@class SearchModelUpdater, AudioDashboardModel, AudioPlaylistsInlineController, VKMImageButton;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface AudioDashboardController : VKMLiveController {
	BOOL suppressAccessoryView;
	AudioPlaylistsInlineController* _playlistsController;
	SearchModelUpdater* _searchUpdater;
	id<VKSource> _avatarOwnerSource;
	VKMImageButton* _avatarOwnerButton;
}
@property(retain, nonatomic) AudioDashboardModel* model;
@property(retain, nonatomic) VKMImageButton* avatarOwnerButton;
@property(retain, nonatomic) id<VKSource> avatarOwnerSource;
@property(retain, nonatomic) SearchModelUpdater* searchUpdater;
@property(retain, nonatomic) AudioPlaylistsInlineController* playlistsController;
-(void)actionAvatarOwnerButton:(id)button;
-(void)setupAvatarRightBarButtonItemWithSource:(id)source;
-(void)actionTeaserButton:(id)button;
-(void)actionAdd;
-(void)actionShowMore:(id)more;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(id)VKMControllerStatsRef;
-(int)VKMLiveAudioContext;
-(void)actionSearch:(id)search;
-(void)model:(id)model updated:(id)updated;
-(void)VKMControllerAppear;
-(void)viewDidLoad;
-(id)createPlaylistsController;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end

