/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NotificationHandler.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NHandlerSound : XXUnknownSuperclass <NotificationHandler> {
	NSDate* _last;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDate* last;
-(void)clearImmediatly;
-(void)handle:(id)handle;
-(void)dealloc;
@end

