/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKPPAlbumsListDelegate.h"

@class VKPPThumbsCollectionView, VKPPModel, VKPPSinglePhotoViewController, NSString, VKPPNoAccessView;

@interface VKPPGroupController : XXUnknownSuperclass <UIImagePickerControllerDelegate, UINavigationControllerDelegate, VKPPAlbumsListDelegate> {
	BOOL _fullScreen;
	VKPPModel* _model;
	VKPPSinglePhotoViewController* _singlePhotoVC;
	VKPPThumbsCollectionView* _thumbnailsTable;
	VKPPNoAccessView* _noAccessView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL fullScreen;
@property(retain, nonatomic) VKPPThumbsCollectionView* thumbnailsTable;
@property(retain, nonatomic) VKPPSinglePhotoViewController* singlePhotoVC;
@property(readonly, retain, nonatomic) VKPPModel* model;
@property(retain, nonatomic) VKPPNoAccessView* noAccessView;
-(id)titleView;
-(void)updateTitleView;
-(void)VKAPAlbumsListDidSelectAlbumWithAssetCollection:(id)vkapalbumsList;
-(void)openAlbumsPicker;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(BOOL)prefersStatusBarHidden;
-(void)requestAssetsLibraryAccess;
-(void)actionSettingsButton:(id)button;
-(void)updateNoAccessView;
-(void)switchToMode:(int)mode animated:(BOOL)animated;
-(void)notificationChangeMode:(id)mode;
-(void)notificationGroup:(id)group;
-(id)titleString;
-(void)actionCamera;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)handleComplete:(BOOL)complete;
-(void)handleComplete;
-(void)toolbarPressedButton:(int)button;
-(void)toolbarPressedButtonNotification:(id)notification;
-(void)dealloc;
-(id)initWithModel:(id)model;
@end

