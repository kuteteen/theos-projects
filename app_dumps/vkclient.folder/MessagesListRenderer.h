/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MessagesListRenderer : XXUnknownSuperclass {
	XXStruct_X102JB incomingStrategy_;
	XXStruct_X102JB outgoingStrategy_;
	NSNumber* _owner;
	XXStruct_X102JB _incomingStrategy;
	XXStruct_X102JB _outgoingStrategy;
}
@property(readonly, assign, nonatomic) XXStruct_X102JB outgoingStrategy;
@property(readonly, assign, nonatomic) XXStruct_X102JB incomingStrategy;
@property(readonly, retain, nonatomic) NSNumber* owner;
-(void)prerenderr:(id)prerenderr;
-(id)sectionKeyForMessage:(id)message;
-(unsigned)miscSections;
-(void)dealloc;
-(id)initWithOwner:(id)owner;
@end

