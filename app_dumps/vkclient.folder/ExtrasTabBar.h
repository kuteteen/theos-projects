/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDelegate.h"
#import "vkclient-Structs.h"
#import "UICollectionViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UICollectionView, ExtrasTabBarItem, NSString, NSArray;
@protocol ExtrasTabBarDelegate;

__attribute__((visibility("hidden")))
@interface ExtrasTabBar : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate> {
	id<ExtrasTabBarDelegate> _delegate;
	NSArray* _items;
	ExtrasTabBarItem* _selectedItem;
	UICollectionView* _collectionView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ExtrasTabBarItem* selectedItem;
@property(retain, nonatomic) NSArray* items;
@property(assign, nonatomic) id<ExtrasTabBarDelegate> delegate;
@property(retain, nonatomic) UICollectionView* collectionView;
-(BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
-(void)setSelectedItem:(id)item animated:(BOOL)animated;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)scrollToIndexPath:(id)indexPath animated:(BOOL)animated;
-(void)scrollToItem:(id)item animated:(BOOL)animated;
-(void)layoutSubviews;
-(BOOL)shouldSelectItem:(id)item;
-(id)initWithFrame:(CGRect)frame shouldBlur:(BOOL)blur;
-(void)dealloc;
@end

