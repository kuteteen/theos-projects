/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMLiveController.h"

@class AudioSelection, AudioPlaylistsModel;

__attribute__((visibility("hidden")))
@interface AudioPlaylistsController : VKMLiveController {
	BOOL audioPlaylistLookup;
	BOOL _multi;
	AudioSelection* _audioSelection;
}
@property(retain, nonatomic) AudioPlaylistsModel* model;
@property(retain, nonatomic) AudioSelection* audioSelection;
@property(assign, nonatomic) BOOL multi;
-(void).cxx_destruct;
-(void)actionAdd;
-(void)actionShowMore:(id)more;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)VKMTableUpdatedIndex;
-(int)VKMControllerModalAutoClosePosition;
-(void)setupNavigationItemButtons:(BOOL)buttons;
-(id)setupMulti:(BOOL)multi;
-(id)setupAudioSelection:(id)selection;
@end

