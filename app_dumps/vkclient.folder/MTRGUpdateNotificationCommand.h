/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGAsyncCommand.h"

@class NSString;

@interface MTRGUpdateNotificationCommand : MTRGAsyncCommand {
	NSString* _data;
	unsigned _slotId;
	NSString* _bannerId;
}
-(void).cxx_destruct;
-(id)setBannerNoNotificationToJsonDict:(id)jsonDict bannerId:(id)anId;
-(void)run;
-(id)initWithData:(id)data slotId:(unsigned)anId bannerId:(id)anId3;
@end

