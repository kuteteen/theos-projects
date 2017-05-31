/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"

@class VKDomain;

__attribute__((visibility("hidden")))
@interface VKDomainSelectionViewController : VKMLiveController {
	VKDomain* _selectedObject;
}
@property(retain, nonatomic) VKDomain* selectedObject;
-(void)didSelectObject:(id)object;
-(BOOL)VKMLiveSearchHandleCell:(id)cell select:(BOOL)select;
-(void)VKMLiveSearchWillDisplayCell:(id)vkmliveSearch indexPath:(id)path inTable:(id)table;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)applyCheckmarkToCell:(id)cell withDomain:(id)domain;
-(void)clearSelection;
-(void)configureClearButton;
-(Class)expectedClass;
-(id)makeCheckmarkView;
-(void)viewDidLoad;
-(void)dealloc;
@end

