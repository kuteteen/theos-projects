/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NDialogEvent.h"

@class VKMessage;

__attribute__((visibility("hidden")))
@interface NEventMessage : NDialogEvent {
	VKMessage* _message;
}
@property(readonly, retain, nonatomic) VKMessage* message;
+(id)eventWithMessage:(id)message inDialog:(id)dialog;
-(void).cxx_destruct;
-(id)eventText:(id)text;
-(id)eventSource:(id)source;
@end

