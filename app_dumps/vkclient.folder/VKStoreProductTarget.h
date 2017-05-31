/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VKStoreProductStickerReferrerContext, NSNumber, NSString, VKIdentity;

__attribute__((visibility("hidden")))
@interface VKStoreProductTarget : VKRenderable {
	VKIdentity* _targetIdentity;
	NSString* _stickerProductName;
	NSNumber* _someStickerId;
	VKStoreProductStickerReferrerContext* _referrerContext;
}
@property(retain, nonatomic) VKStoreProductStickerReferrerContext* referrerContext;
@property(retain, nonatomic) NSNumber* someStickerId;
@property(retain, nonatomic) NSString* stickerProductName;
@property(retain, nonatomic) VKIdentity* targetIdentity;
+(id)targetForSomeStickerId:(id)someStickerId;
+(id)targetForStickerProductName:(id)stickerProductName;
+(id)targetForIdentity:(id)identity;
-(void)dealloc;
@end

