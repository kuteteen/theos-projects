/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NotificationEvent.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NEventAPNS : NotificationEvent {
	NSDictionary* _payload;
}
@property(retain, nonatomic) NSDictionary* payload;
+(id)eventForPayload:(id)payload;
-(void)dealloc;
@end

