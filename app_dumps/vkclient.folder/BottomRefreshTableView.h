/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIRefreshControl;

__attribute__((visibility("hidden")))
@interface BottomRefreshTableView : XXUnknownSuperclass {
	UIRefreshControl* _bottomRefreshControl;
}
@property(retain, nonatomic) UIRefreshControl* bottomRefreshControl;
-(float)_rubberBandOffsetForOffset:(float)offset maxOffset:(float)offset2 minOffset:(float)offset3 range:(float)range outside:(BOOL*)outside;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end

