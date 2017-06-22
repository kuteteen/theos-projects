/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ExternalAppSupport.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BoomAppSupport : XXUnknownSuperclass <ExternalAppSupport> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)downloadIdentity:(id)identity fromViewController:(id)viewController source:(id)source;
-(void)openBoomIfAvailableFromViewController:(id)viewController source:(id)source;
-(id)boomURL;
-(BOOL)canOpenBoom;
-(BOOL)isAvailable;
@end
