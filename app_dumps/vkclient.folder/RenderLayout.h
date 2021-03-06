/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface RenderLayout : XXUnknownSuperclass {
	CGPoint target;
	CGSize limit;
	float padding;
	CGRect* frames;
	unsigned count;
	CGSize size;
	id* extras;
}
-(void)update;
-(void)enlarge:(unsigned)enlarge extra:(float)extra;
-(void)remove:(unsigned)remove;
-(void)move:(unsigned)move d:(float)d;
-(float)bottom:(unsigned)bottom;
-(BOOL)visible:(unsigned)visible;
-(void)add:(unsigned)add minusWidth:(float)width;
-(void)add:(unsigned)add width:(float)width;
-(void)at:(unsigned)at inset:(UIEdgeInsets)inset;
-(void)WARNBGadd:(unsigned)gadd label:(id)label font:(id)font lheight:(float)lheight fill:(BOOL)fill;
-(void)add:(unsigned)add height:(float)height offset:(float)offset;
-(void)add:(unsigned)add height:(float)height raw:(BOOL)raw;
-(void)add:(unsigned)add height:(float)height;
-(void)add:(unsigned)add size:(CGSize)size;
-(void)adjustX:(float)x;
-(void)adjust:(float)adjust;
-(void)fixed:(unsigned)fixed size:(CGSize)size;
-(void)fixed:(unsigned)fixed frame:(CGRect*)frame;
-(void)skip:(unsigned)skip;
-(void)dealloc;
-(id)initWithCount:(unsigned)count;
@end

