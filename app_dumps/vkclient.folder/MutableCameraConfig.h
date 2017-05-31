/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CameraConfig.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface MutableCameraConfig : CameraConfig {
}
@property(copy, nonatomic) NSArray* sessionPresetsFallback;
@property(copy, nonatomic) NSString* sessionPreset;
@property(assign, nonatomic) unsigned flashMode;
@property(assign, nonatomic) unsigned preferredPosition;
-(void)switchFlashMode;
-(void)switchPreferredPosition;
-(id)initWithConfig:(id)config;
@end

