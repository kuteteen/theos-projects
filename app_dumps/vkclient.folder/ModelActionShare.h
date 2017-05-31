/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ModelActionShare : ModelAction {
	NSURL* _url;
	NSString* _text;
}
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSURL* url;
-(void)dealloc;
-(id)defaultTitle;
-(BOOL)actionShowsSuccessConfirmation;
-(void)runInContext:(id)context;
@end

