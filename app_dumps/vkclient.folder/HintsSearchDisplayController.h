/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "VKMLiveSearchController.h"

@class HintsSearchModel, UIView, VKMenuHintsLinkItem, NSDataDetector;

__attribute__((visibility("hidden")))
@interface HintsSearchDisplayController : VKMLiveSearchController {
	NSDataDetector* _detector;
	VKMenuHintsLinkItem* _link;
	UIView* _transitionalBackgroundView;
}
@property(retain, nonatomic) HintsSearchModel* model;
@property(retain, nonatomic) UIView* transitionalBackgroundView;
@property(retain, nonatomic) VKMenuHintsLinkItem* link;
@property(retain, nonatomic) NSDataDetector* detector;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)dealloc;
-(id)initWithSearchBar:(id)searchBar contentsController:(id)controller;
@end

