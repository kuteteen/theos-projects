/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, StatsRef, NSURL;

__attribute__((visibility("hidden")))
@interface PostInteractionContext : XXUnknownSuperclass <NSCopying> {
	NSURL* _url;
	StatsRef* _ref;
	NSString* _ad_data;
}
@property(copy, nonatomic) NSString* ad_data;
@property(copy, nonatomic) StatsRef* ref;
@property(copy, nonatomic) NSURL* url;
+(id)ref:(id)ref;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end

