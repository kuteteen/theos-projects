/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CameraManagerDelegate <NSObject>
@optional
-(void)cameraManager:(id)manager didFinishRecordingToOutputFileAtURL:(id)url error:(id)error;
-(void)cameraManager:(id)manager didStarRecordingToOutputFileAtURL:(id)url;
-(void)cameraManager:(id)manager didFailCapturePhotoWithError:(id)error;
-(void)cameraManager:(id)manager didProcessCapturedPhoto:(id)photo metadata:(id)metadata;
-(void)cameraManagerDidCapturePhoto:(id)cameraManager;
-(void)cameraManagerWillCapturePhoto:(id)cameraManager;
@end

