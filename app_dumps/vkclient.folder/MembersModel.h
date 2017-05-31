/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MultiIndexModel.h"

@class Index;

__attribute__((visibility("hidden")))
@interface MembersModel : MultiIndexModel {
	Index* _allMembers;
	Index* _onlyFriends;
}
@property(retain, nonatomic) Index* onlyFriends;
@property(retain, nonatomic) Index* allMembers;
-(void)resetToMode:(unsigned)mode;
-(id)countKeyForMode:(unsigned)mode;
-(id)indexForMode:(unsigned)mode;
-(unsigned)modes;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(BOOL)shouldLoad:(id)load;
-(id)spawnContext:(id)context;
-(id)countKey;
-(void)dealloc;
@end

