/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MultiIndexModel.h"

@class Index;

__attribute__((visibility("hidden")))
@interface StoriesBannedModel : MultiIndexModel {
	Index* _users;
	Index* _groups;
}
@property(retain, nonatomic) Index* groups;
@property(retain, nonatomic) Index* users;
-(void).cxx_destruct;
-(void)actionStoriesSourceBan:(id)ban :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)indexForMode:(unsigned)mode;
-(id)countKeyForMode:(unsigned)mode;
-(unsigned)modes;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
@end

