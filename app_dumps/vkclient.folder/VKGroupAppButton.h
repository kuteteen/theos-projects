/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKGroupAppButton : VKRenderable {
	NSNumber* _app_id;
	NSString* _title;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSNumber* app_id;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

