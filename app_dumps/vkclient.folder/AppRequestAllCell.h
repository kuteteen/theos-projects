/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"
#import "vkclient-Structs.h"

@class VKAPIAppRequestsAll;

__attribute__((visibility("hidden")))
@interface AppRequestAllCell : VKMCell {
}
@property(readonly, retain, nonatomic) VKAPIAppRequestsAll* domain;
+(void)prerender:(id)prerender;
+(CGSize)cellSize;
-(BOOL)selected;
-(void)attach:(id)attach expectedReuse:(double)reuse;
@end

