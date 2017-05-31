/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKStickerReferrerContext, VKMessage, BackgroundTaskWrapper, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface PendingMessage : XXUnknownSuperclass {
	BOOL _loadingScheduled;
	BOOL _loadingEnabled;
	BOOL _updateCounters;
	unsigned _messageNumber;
	int _state;
	BackgroundTaskWrapper* _task;
	NSArray* _attachments;
	VKMessage* _message;
	NSString* _significantBody;
	VKStickerReferrerContext* _stickerReferrerContext;
	NSString* _ref;
	NSString* _refSource;
}
@property(retain, nonatomic) NSString* refSource;
@property(retain, nonatomic) NSString* ref;
@property(retain, nonatomic) VKStickerReferrerContext* stickerReferrerContext;
@property(retain, nonatomic) NSString* significantBody;
@property(retain, nonatomic) VKMessage* message;
@property(retain, nonatomic) NSArray* attachments;
@property(assign, nonatomic) BOOL updateCounters;
@property(assign, nonatomic) BOOL loadingEnabled;
@property(assign, nonatomic) BOOL loadingScheduled;
@property(retain, nonatomic) BackgroundTaskWrapper* task;
@property(assign, nonatomic) int state;
@property(readonly, assign, nonatomic) unsigned messageNumber;
+(id)messageWithBody:(id)body sendeer:(id)sendeer attachments:(id)attachments;
+(void)initialize;
-(void)updateAttachments;
-(void)dealloc;
-(id)init;
@end

