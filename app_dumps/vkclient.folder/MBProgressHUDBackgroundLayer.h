/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MBProgressHUD;

__attribute__((visibility("hidden")))
@interface MBProgressHUDBackgroundLayer : XXUnknownSuperclass {
	BOOL _allowBackgroundAlpha;
	MBProgressHUD* _parent;
}
@property(assign, nonatomic) BOOL allowBackgroundAlpha;
@property(assign, nonatomic) MBProgressHUD* parent;
-(void)drawInContext:(CGContextRef)context;
@end

