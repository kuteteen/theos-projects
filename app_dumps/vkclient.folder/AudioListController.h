/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"

@class AudioListModel, AudioSelection;

__attribute__((visibility("hidden")))
@interface AudioListController : VKMLiveController {
	BOOL _multi;
	AudioSelection* _audioSelection;
}
@property(retain, nonatomic) AudioListModel* model;
@property(retain, nonatomic) AudioSelection* audioSelection;
@property(assign, nonatomic) BOOL multi;
-(id)audioFromCell:(id)cell;
-(void)VKMLiveSearchWillDisplayCell:(id)vkmliveSearch indexPath:(id)path inTable:(id)table;
-(void)VKMLiveSearchHandleDeselectCell:(id)cell;
-(BOOL)VKMLiveSearchHandleCell:(id)cell select:(BOOL)select;
-(void)VKMLiveSearchWillEndSearch;
-(void)VKMLiveSearchWillBeginSearch;
-(void)updateSelection;
-(void)model:(id)model updated:(id)updated;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)VKMTablePerformDeselectOnViewWillAppear:(BOOL)vkmtablePerformDeselectOnView;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(int)VKMControllerModalAutoClosePosition;
-(void)handleAudioSelectionChanged:(id)changed;
-(void)twitchTitle;
-(void)updateDoneButton;
-(void)customizeTable:(id)table;
-(void)actionDone:(id)done;
-(void)viewDidLoad;
-(id)setupAudioSelection:(id)selection;
-(id)setupMulti:(BOOL)multi;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end

