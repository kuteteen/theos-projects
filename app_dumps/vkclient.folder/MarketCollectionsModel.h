/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class VKGroup;

__attribute__((visibility("hidden")))
@interface MarketCollectionsModel : ListModel {
	VKGroup* _group;
}
@property(retain, nonatomic) VKGroup* group;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(void)dealloc;
@end

