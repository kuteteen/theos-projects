/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class Index, NSString, NSArray, VKGiftsContext;

__attribute__((visibility("hidden")))
@interface VKGiftsCatalogSection : VKDomain {
	NSString* _title;
	NSString* _name;
	NSArray* _catalogGifts;
	Index* _index;
	VKGiftsContext* _context;
}
@property(retain, nonatomic) VKGiftsContext* context;
@property(retain, nonatomic) Index* index;
@property(retain, nonatomic) NSArray* catalogGifts;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* title;
-(Class)cellClass;
-(Class)giftItemClass;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end
