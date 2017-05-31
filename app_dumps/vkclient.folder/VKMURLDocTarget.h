/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMBrowserTarget.h"

@class VKDoc;

__attribute__((visibility("hidden")))
@interface VKMURLDocTarget : VKMBrowserTarget {
	VKDoc* _document;
}
@property(readonly, retain, nonatomic) VKDoc* document;
+(id)withDoc:(id)doc;
-(void)fillShareActions:(id)actions;
-(BOOL)canShare;
-(void)reload;
-(id)targetURL;
-(id)title;
-(void)stop;
-(void)load;
-(id)description;
-(void)dealloc;
@end

