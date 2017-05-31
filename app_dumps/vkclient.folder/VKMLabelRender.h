/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VKMLabelRender : XXUnknownSuperclass {
	float targetWidth;
	float maxHeight;
	CGSize size;
	NSString* _text;
	NSDictionary* _attributes;
	CTFrameRef _frame;
}
@property(readonly, retain, nonatomic) NSDictionary* attributes;
@property(retain, nonatomic) NSString* text;
@property(assign, nonatomic) CTFrameRef frame;
+(id)injectCTAlignment:(unsigned char)alignment forAttributes:(id)attributes;
+(id)renderForText:(id)text attributes:(id)attributes width:(float)width height:(float)height;
-(id)duplicateRender:(id)render;
-(void)dealloc;
@end

