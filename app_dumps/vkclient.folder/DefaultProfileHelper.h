/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ProfileModelHelper.h"

@class NSString, DefaultProfileModel;
@protocol VKProfile;

__attribute__((visibility("hidden")))
@interface DefaultProfileHelper : XXUnknownSuperclass <ProfileModelHelper> {
	DefaultProfileModel* _model;
	id<VKProfile> _item;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<VKProfile> item;
@property(retain, nonatomic) DefaultProfileModel* model;
+(id)textAttributes;
+(id)titleAttributes;
+(id)withModel:(id)model item:(id)item;
-(id)addStatusAudio:(id)audio atSection:(id)section;
-(id)text:(id)text attributes:(id)attributes detector:(BOOL)detector;
-(id)text:(id)text attributes:(id)attributes;
-(id)text:(id)text detector:(BOOL)detector;
-(id)text:(id)text;
-(id)title:(id)title detector:(BOOL)detector;
-(id)title:(id)title;
-(id)createProfileSections;
-(id)generateInfoIndex;
-(void)dealloc;
@end

