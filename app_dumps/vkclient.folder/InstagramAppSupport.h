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
@interface InstagramAppSupport : XXUnknownSuperclass <ExternalAppSupport> {
	BOOL _isAvailable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)actionToOpenUrl:(id)openUrl;
-(BOOL)openMediaId:(id)anId;
-(id)urlForMediaId:(id)mediaId;
-(void)getMediaIdFromUrl:(id)url withCompletion:(id)completion;
-(id)init;
-(void)checkIfAvailable;
-(BOOL)isAvailable;
-(void)dealloc;
@end

