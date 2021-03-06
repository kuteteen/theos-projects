/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "MOScrollPagingMediatorDelegate.h"
#import "VKMLiveController.h"
#import "UIToolbarDelegate.h"

@class StoreStockItemsModel, UISegmentedControl, MOScrollPagingMediator, NSString, UIToolbar;

__attribute__((visibility("hidden")))
@interface StoreController : VKMLiveController <UIToolbarDelegate, MOScrollPagingMediatorDelegate> {
	MOScrollPagingMediator* _scrollPagingMediator;
	UIToolbar* _toolbar;
	UISegmentedControl* _segmentedControl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) StoreStockItemsModel* model;
@property(retain, nonatomic) UISegmentedControl* segmentedControl;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) MOScrollPagingMediator* scrollPagingMediator;
-(void).cxx_destruct;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)actionSettings:(id)settings;
-(void)actionActions:(id)actions;
-(void)actionSectionChanged:(id)changed;
-(void)switchToSection:(int)section;
-(void)actionSelectedBanner:(id)banner;
-(BOOL)pagingMediatorShouldResetForScrollResize:(id)pagingMediator;
-(void)pagingMediator:(id)mediator renderPage:(int)page;
-(BOOL)VKMControllerModalOnly;
-(void)VKMTableUpdatedIndex;
-(int)positionForBar:(id)bar;
-(void)viewDidLoad;
-(void)notificationProductPurchased:(id)purchased;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

