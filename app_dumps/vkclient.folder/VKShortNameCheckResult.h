/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface VKShortNameCheckResult : VKDomain {
	NSNumber* _status;
	NSString* _reason;
	NSArray* _suggestions;
}
@property(copy, nonatomic) NSArray* suggestions;
@property(copy, nonatomic) NSString* reason;
@property(retain, nonatomic) NSNumber* status;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

