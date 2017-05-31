/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKAttachment.h"

@class VKPhoto, NSString;

__attribute__((visibility("hidden")))
@interface VKMarketCollection : VKDomain <VKAttachment> {
	NSString* _title;
	VKPhoto* _photo;
	unsigned _count;
	unsigned _updatedAt;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned updatedAt;
@property(assign, nonatomic) unsigned count;
@property(retain, nonatomic) VKPhoto* photo;
@property(copy, nonatomic) NSString* title;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
-(id)attachmentButtonTitle;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
@end

