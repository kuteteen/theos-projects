/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "VKThumbnailable.h"

@class NSMutableDictionary;

@protocol VKImage <VKThumbnailable>
@property(readonly, assign, nonatomic) float ratio;
@property(readonly, retain, nonatomic) NSMutableDictionary* variants;
-(id)messagesPlaceholder;
-(XXStruct_UOIMaD)messagesRenderType;
-(BOOL)forceZoom;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height;
-(id)messagesVariant;
-(id)fullVariant;
-(id)thumbnailVariant;
@optional
-(int)fullVariantType;
-(id)messagesFilterForSize:(CGSize)size isFirst:(BOOL)first isLast:(BOOL)last;
@end

