/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKChildDomain.h"
#import "VKDomain.h"

@class VKShopProduct, VKPhoto, VKRating, VKIdentity, NSString, VKLinkButton;

__attribute__((visibility("hidden")))
@interface VKLink : VKDomain <VKChildDomain> {
	BOOL _external;
	NSString* _id;
	NSString* _url;
	NSString* _title;
	NSString* _descr;
	NSString* _caption;
	NSString* _image_src;
	NSString* _image_big;
	VKPhoto* _photo;
	NSString* _preview_page;
	NSString* _preview_url;
	VKIdentity* _parentIden;
	VKRating* _rating;
	VKShopProduct* _product;
	VKLinkButton* _button;
}
@property(assign, nonatomic, getter=isExternal) BOOL external;
@property(retain, nonatomic) VKLinkButton* button;
@property(retain, nonatomic) VKShopProduct* product;
@property(retain, nonatomic) VKRating* rating;
@property(retain, nonatomic) VKIdentity* parentIden;
@property(retain, nonatomic) NSString* preview_url;
@property(retain, nonatomic) NSString* preview_page;
@property(retain, nonatomic) VKPhoto* photo;
@property(retain, nonatomic) NSString* image_big;
@property(retain, nonatomic) NSString* image_src;
@property(retain, nonatomic) NSString* caption;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* id;
+(id)linkWithURL:(id)url;
-(BOOL)process:(id)process context:(id)context;
-(Class)cellClass;
-(void)dealloc;
@end

