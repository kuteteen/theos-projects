/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CameraCaptureButton : XXUnknownSuperclass {
	BOOL _inVideoRecordingMode;
	CAShapeLayer* _outerCircleShapeLayer;
	CAShapeLayer* _innerCircleShapeLayer;
}
@property(readonly, assign, nonatomic, getter=isInVideoRecordingMode) BOOL inVideoRecordingMode;
@property(retain, nonatomic) CAShapeLayer* innerCircleShapeLayer;
@property(retain, nonatomic) CAShapeLayer* outerCircleShapeLayer;
-(void).cxx_destruct;
-(CGSize)outerCircleSize;
-(void)resetToPhotoStateAnimated:(BOOL)photoStateAnimated;
-(void)animateToVideoRecordingState;
-(void)setHighlighted:(BOOL)highlighted;
-(id)innerCircleFillColorVideoRecordingState;
-(id)innerCircleFillColorNormalState;
-(CGRect)innerCircleFrameForNormalState;
-(CGRect)outerCircleFrameForNormalState;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

