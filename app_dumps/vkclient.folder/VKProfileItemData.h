/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKGroupedItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKProfileItemData : VKGroupedItem {
	NSString* _title;
	NSString* _data;
}
@property(retain, nonatomic) NSString* data;
@property(retain, nonatomic) NSString* title;
+(id)title:(id)title data:(id)data;
-(Class)cellClass;
-(void)dealloc;
@end

