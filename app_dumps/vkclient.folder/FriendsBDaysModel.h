/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class StatContext;

__attribute__((visibility("hidden")))
@interface FriendsBDaysModel : LoadingModel {
	StatContext* _statContext;
}
@property(retain, nonatomic) StatContext* statContext;
+(id)indexFromSortedFriends:(id)sortedFriends statContext:(id)context;
-(id)withStatContext:(id)statContext;
-(void)cachedIndexForContext:(id)context withCompletion:(id)completion;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(void)dealloc;
@end

