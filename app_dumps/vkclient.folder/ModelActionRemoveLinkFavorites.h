/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKLink;

__attribute__((visibility("hidden")))
@interface ModelActionRemoveLinkFavorites : ModelAction {
}
@property(retain, nonatomic) VKLink* target;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(void)dealloc;
@end

