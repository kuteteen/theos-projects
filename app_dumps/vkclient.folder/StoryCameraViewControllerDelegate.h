/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol StoryCameraViewControllerDelegate <NSObject>
-(void)storyCameraViewController:(id)controller setShouldShowHoldToRecordTip:(BOOL)showHoldToRecordTip;
-(BOOL)shouldShowHoldToRecordTipForStoryCameraViewController:(id)storyCameraViewController;
-(void)storyCameraViewController:(id)controller didRecordAsset:(id)asset;
-(void)storyCameraViewController:(id)controller didCapturePhoto:(id)photo metadata:(id)metadata;
-(void)storyCameraViewControllerDidCancel:(id)storyCameraViewController;
@end

