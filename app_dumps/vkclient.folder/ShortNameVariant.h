/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"
#import "VKTitleable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ShortNameVariant : VKRenderable <VKTitleable> {
	NSString* _title;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* title;
-(BOOL)disclosure;
-(Class)rendererClass;
-(void)dealloc;
@end
