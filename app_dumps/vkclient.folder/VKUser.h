/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "MBContactPickerModelProtocol.h"
#import "VKSource.h"

@class UIImage, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKUser : VKDomain <VKSource, MBContactPickerModelProtocol> {
	BOOL _online;
	BOOL _online_mobile;
	BOOL _verified;
	BOOL _is_friend;
	BOOL _can_write_private_message;
	NSNumber* _uid;
	NSString* _first_name;
	NSString* _last_name;
	NSString* _screen_name;
	NSString* _photo;
	int _sex;
	int _deactivated;
	NSString* _first_name_acc;
	NSString* _last_name_acc;
	NSString* _first_name_gen;
	NSString* _last_name_gen;
	NSString* _fullname;
}
@property(readonly, assign, nonatomic) UIImage* contactImage;
@property(readonly, copy, nonatomic) NSString* subtitle;
@property(assign, nonatomic) float renderWidth;
@property(readonly, assign, nonatomic) int type;
@property(readonly, retain, nonatomic) NSString* name;
@property(readonly, retain, nonatomic) NSNumber* source_id;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* last_name_gen;
@property(retain, nonatomic) NSString* first_name_gen;
@property(retain, nonatomic) NSString* last_name_acc;
@property(retain, nonatomic) NSString* first_name_acc;
@property(assign, nonatomic) BOOL can_write_private_message;
@property(assign, nonatomic) BOOL is_friend;
@property(assign, nonatomic) BOOL verified;
@property(assign, nonatomic) BOOL online_mobile;
@property(assign, nonatomic) BOOL online;
@property(assign, nonatomic) int deactivated;
@property(assign, nonatomic) int sex;
@property(retain, nonatomic) NSString* photo;
@property(retain, nonatomic) NSString* screen_name;
@property(retain, nonatomic) NSString* last_name;
@property(retain, nonatomic) NSString* first_name;
@property(retain, nonatomic) NSNumber* uid;
@property(retain, nonatomic) NSString* fullname;
+(id)predicate:(id)predicate;
+(id)linkIcon;
-(void).cxx_destruct;
-(id)shortName;
-(BOOL)userDataEqual:(id)equal;
-(BOOL)disclosure;
-(id)title;
-(id)linkText;
-(BOOL)process:(id)process context:(id)context;
-(Class)cellClass;
-(id)iden;
@end

