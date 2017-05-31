/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKImageFilter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKImageFilterGroup : XXUnknownSuperclass <VKImageFilter> {
	NSMutableArray* _filters;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)group;
+(id)groupWithFilters:(id)filters;
-(void).cxx_destruct;
-(id)infoString;
-(void)addFilter:(id)filter;
-(id)filters;
-(id)process:(id)process;
-(id)init;
-(id)initWithFilters:(id)filters;
@end

