/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "IGLResource.h"

@protocol IGLTexture;

@interface IGLRenderTarget : IGLResource {
	CGSize size;
	unsigned gl_framebuffer;
	id<IGLTexture> _targetTexture;
}
@property(retain, nonatomic) id<IGLTexture> targetTexture;
-(void)activate;
-(void)loadWithSize:(CGSize)size;
-(void)unload;
-(void)dealloc;
@end

