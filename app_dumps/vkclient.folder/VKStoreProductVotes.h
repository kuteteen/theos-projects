/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKStoreProduct.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VKStoreProductVotes : VKStoreProduct {
	NSNumber* _votes;
}
@property(retain, nonatomic) NSNumber* votes;
-(id)storeDescription;
-(void)writeData:(id)data;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

