/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSDate;

__attribute__((visibility("hidden")))
@interface VKOnlineStore : XXUnknownSuperclass {
	NSSet* _online;
	NSSet* _online_mobile;
	NSDate* _date;
}
@property(retain) NSDate* date;
@property(retain) NSSet* online_mobile;
@property(retain) NSSet* online;
-(void)applyEnumerator:(id)enumerator;
-(BOOL)fresh;
-(void)resetOnline:(id)online mobile:(id)mobile;
-(void)dealloc;
@end

