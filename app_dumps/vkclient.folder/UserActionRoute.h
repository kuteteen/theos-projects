/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Action.h"

@protocol VKTitleable;

__attribute__((visibility("hidden")))
@interface UserActionRoute : Action {
}
@property(retain, nonatomic) id<VKTitleable> target;
-(void)runInContext:(id)context;
-(id)title;
@end

