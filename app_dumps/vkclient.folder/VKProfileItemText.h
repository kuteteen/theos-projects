/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKGroupedItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKProfileItemText : VKGroupedItem {
	int _action;
	NSString* _ico;
	NSString* _data;
	int _connectionType;
}
@property(assign, nonatomic) int connectionType;
@property(retain, nonatomic) NSString* data;
@property(retain, nonatomic) NSString* ico;
@property(assign, nonatomic) int action;
+(id)ico:(id)ico data:(id)data action:(int)action;
-(Class)cellClass;
-(void)dealloc;
@end

