/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKGroupedItem.h"

@class VKWikiPage;

__attribute__((visibility("hidden")))
@interface VKProfileItemPage : VKGroupedItem {
	VKWikiPage* _page;
}
@property(retain, nonatomic) VKWikiPage* page;
+(id)page:(id)page;
-(Class)cellClass;
-(void)dealloc;
@end

