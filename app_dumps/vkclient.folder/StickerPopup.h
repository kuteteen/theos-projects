/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKMStickerPreviewImageView, StickersLoadingManager, UICollectionView, UIWindow, NSIndexPath, NSString, UILongPressGestureRecognizer;
@protocol StickerPopupDelegate;

__attribute__((visibility("hidden")))
@interface StickerPopup : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	BOOL _allowMoveAside;
	id<StickerPopupDelegate> _delegate;
	UICollectionView* _collectionView;
	StickersLoadingManager* _stickersLoadingManager;
	NSIndexPath* _previouslyHighlightedIndexPath;
	UIWindow* _popupWindow;
	VKMStickerPreviewImageView* _stickerPreviewImageView;
	UILongPressGestureRecognizer* _gestureRecognizer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<StickerPopupDelegate> delegate;
@property(assign, nonatomic) BOOL allowMoveAside;
@property(retain, nonatomic) UILongPressGestureRecognizer* gestureRecognizer;
@property(retain, nonatomic) VKMStickerPreviewImageView* stickerPreviewImageView;
@property(retain, nonatomic) UIWindow* popupWindow;
@property(retain, nonatomic) NSIndexPath* previouslyHighlightedIndexPath;
@property(retain, nonatomic) StickersLoadingManager* stickersLoadingManager;
@property(retain, nonatomic) UICollectionView* collectionView;
-(void)hidePopupWindow;
-(void)showPopupWindow;
-(void)updateStickerAtIndexPath:(id)indexPath;
-(void)popupStickerAtIndexPath:(id)indexPath;
-(void)setCollectionViewCell:(id)cell highlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)gestureRecognizerLongPressed:(id)pressed;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(id)initWithCollectionView:(id)collectionView stickersLoadingManager:(id)manager;
-(void)dealloc;
@end

