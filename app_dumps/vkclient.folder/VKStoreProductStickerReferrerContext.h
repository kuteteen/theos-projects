/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStoreProductStickerReferrerContext : XXUnknownSuperclass {
	int _source;
	NSString* _keyword;
}
@property(copy, nonatomic) NSString* keyword;
@property(assign, nonatomic) int source;
+(id)contextLink;
+(id)contextMessage;
+(id)contextSuggestionWithKeyword:(id)keyword;
+(id)contextKeyboard;
+(id)contextStore;
-(id)stringRepresentation;
-(void)dealloc;
@end

