/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchControllerDelegate.h"
#import "VKMSearchControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "VKMScrollViewController.h"
#import "UITableViewDataSource.h"
#import "vkclient-Structs.h"

@class VKSearchController, UIColor, ReusableViewsPool, VKMSearchController, UITableView, NSString, VKMTableViewSearchHeaderView;

__attribute__((visibility("hidden")))
@interface VKMTableController : VKMScrollViewController <UITableViewDataSource, UITableViewDelegate, VKMSearchControllerDelegate, UISearchControllerDelegate> {
	UITableView* _tableView;
	UIColor* _separatorColor;
	VKMSearchController* _search;
	VKSearchController* _search80;
	ReusableViewsPool* _reusableViewsPool;
	VKMTableViewSearchHeaderView* _searchHeader;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) ReusableViewsPool* reusableViewsPool;
@property(retain, nonatomic) VKSearchController* search80;
@property(retain, nonatomic) VKMSearchController* search;
@property(retain, nonatomic) UIColor* separatorColor;
@property(retain, nonatomic) VKMTableViewSearchHeaderView* searchHeader;
@property(retain, nonatomic) UITableView* tableView;
-(void)didDismissSearchController:(id)controller;
-(void)willDismissSearchController:(id)controller;
-(void)didPresentSearchController:(id)controller;
-(void)willPresentSearchController:(id)controller;
-(void)presentSearchController:(id)controller;
-(void)redrawSectionFooters;
-(void)redrawSectionHeaders;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)currentIndex;
-(void)VKMTablePerformDeselectOnViewWillAppear:(BOOL)vkmtablePerformDeselectOnView;
-(float)VKMTableCellSeparatorInsetForIndexPath:(id)indexPath;
-(void)model:(id)model updated:(id)updated;
-(void)scrollTable:(float)table;
-(void)actionSearchScopeChanged:(id)changed;
-(void)searchControllerDidChangedActive:(id)searchController;
-(void)searchControllerChangedActive:(id)active;
-(int)VKMControllerStatusBarStyle;
-(void)VKMSearchCustomizeResultsTableView:(id)view;
-(void)VKMTableUpdatedIndex;
-(void)VKMTableSetupSearch;
-(id)VKMTableCreateSearchController80;
-(id)VKMTableCreateSearchController:(id)controller;
-(id)VKMTableCreateSearchBar;
-(int)VKMTableSearchMode;
-(void)VKMTableDiscovered:(id)discovered cell:(id)cell;
-(void)VKMScrollViewSetFooter:(id)footer;
-(void)VKMScrollViewUpdateTeaserViewInsets;
-(id)VKMScrollView;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)__setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(Class)VKMTableViewClass;
-(int)VKMTableStyle;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

