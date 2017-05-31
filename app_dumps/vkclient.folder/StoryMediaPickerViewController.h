/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDataSource.h"
#import "PHPhotoLibraryChangeObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UICollectionView, EmptyStateView, StoryEditorNavigationBar, NSString, PHFetchResult;
@protocol StoryMediaPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface StoryMediaPickerViewController : XXUnknownSuperclass <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, PHPhotoLibraryChangeObserver> {
	id<StoryMediaPickerViewControllerDelegate> _delegate;
	StoryEditorNavigationBar* _customNavigationBar;
	UICollectionView* _collectionView;
	PHFetchResult* _fetchResult;
	EmptyStateView* _emptyStateView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) StoryEditorNavigationBar* customNavigationBar;
@property(assign, nonatomic) __weak id<StoryMediaPickerViewControllerDelegate> delegate;
@property(retain, nonatomic) EmptyStateView* emptyStateView;
@property(retain, nonatomic) PHFetchResult* fetchResult;
@property(retain, nonatomic) UICollectionView* collectionView;
+(id)fetchOptionsForLast24HoursFetch;
+(id)lastAsset;
-(void).cxx_destruct;
-(void)photoLibraryDidChange:(id)photoLibrary;
-(unsigned)supportedInterfaceOrientations;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(int)section;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)handleCancelButtonTap;
-(void)reloadAssets;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

