/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, VKPPModel, VKPPService, VKPPFiltersTableView, UIToolbar, UIView, VKPPBadge, NSMutableArray, VKPPSelector, NSString;

@interface VKPPToolbar : XXUnknownSuperclass <UITableViewDelegate> {
	VKPPService* _service;
	VKPPSelector* _selector;
	VKPPModel* _model;
	NSMutableArray* _buttons;
	UILabel* _label;
	VKPPBadge* _badge;
	UIView* _hostView;
	UIToolbar* _bg;
	VKPPFiltersTableView* _filters;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) VKPPSelector* selector;
@property(readonly, retain, nonatomic) VKPPService* service;
@property(retain, nonatomic) VKPPFiltersTableView* filters;
@property(readonly, retain, nonatomic) UIToolbar* bg;
@property(readonly, retain, nonatomic) UIView* hostView;
@property(retain, nonatomic) VKPPBadge* badge;
@property(retain, nonatomic) UILabel* label;
@property(retain, nonatomic) NSMutableArray* buttons;
@property(retain, nonatomic) VKPPModel* model;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)layoutIfNeededAnimated:(BOOL)animated;
-(void)layoutToolbarInSuperView;
-(BOOL)showFilters;
-(void)actionButton:(id)button;
-(void)notificationToggleFilters:(id)filters;
-(void)notificationSelectLimit:(id)limit;
-(void)notificationAssetSelected:(id)selected;
-(void)notificationTarget:(id)target;
-(void)notificationEdit:(id)edit;
-(void)notificationMode:(id)mode;
-(void)notificationGroup:(id)group;
-(void)updateButtonsVisibilityForMode:(int)mode isVideo:(BOOL)video;
-(void)updateSelection:(BOOL)selection;
-(void)updateDoneButton;
-(void)updateForTarget:(BOOL)target;
-(void)updateForMode;
-(id)button:(int)button;
-(void)attachModel:(id)model;
-(void)dealloc;
-(id)initWithService:(id)service selector:(id)selector barStyle:(int)style;
@end

