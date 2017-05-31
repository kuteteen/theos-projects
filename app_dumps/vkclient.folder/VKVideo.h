/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKChildDomain.h"
#import "VKImage.h"
#import "VKSourceStatus.h"
#import "vkclient-Structs.h"
#import "VKDomain.h"

@class NSDictionary, VKPrivacySetting, VKText, VKDoc, NSMutableDictionary, NSNumber, NSString, VKIdentity, VKAdData, NSArray;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKVideo : VKDomain <VKImage, VKSourceStatus, VKChildDomain> {
	BOOL _can_edit;
	BOOL _can_add;
	BOOL _no_comments;
	BOOL _is_private;
	BOOL _repeat;
	BOOL _content_restricted;
	BOOL _canPlay;
	BOOL _processing;
	BOOL _converting;
	BOOL _added;
	BOOL _upcoming;
	BOOL _no_autoplay;
	BOOL _video_player_fallback;
	BOOL _live;
	VKIdentity* _parentIden;
	NSMutableDictionary* _variants;
	NSString* _title;
	int _duration;
	VKText* _descr;
	unsigned _date;
	int _views;
	VKPrivacySetting* _privacy_view;
	VKPrivacySetting* _privacy_comment;
	NSDictionary* _files;
	NSString* _player;
	NSString* _content_restricted_message;
	int _videoType;
	NSNumber* _can_repost;
	NSNumber* _can_comment;
	NSArray* _knownUserAlbums;
	id<VKSource> _source;
	int _width;
	int _height;
	NSString* _platform;
	int _platformType;
	NSMutableDictionary* _firstFrameVariants;
	VKDoc* _gifDocument;
	VKAdData* _adData;
	XXStruct_86WktA _comments;
	XXStruct_uR0cxB _likes;
	XXStruct_86WktA _reposts;
}
@property(readonly, assign, nonatomic) float ratio;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAdData* adData;
@property(assign, nonatomic, getter=isLive) BOOL live;
@property(retain, nonatomic) VKDoc* gifDocument;
@property(readonly, assign, nonatomic, getter=isGif) BOOL gif;
@property(retain, nonatomic) NSMutableDictionary* firstFrameVariants;
@property(assign, nonatomic) BOOL video_player_fallback;
@property(assign, nonatomic) BOOL no_autoplay;
@property(assign, nonatomic) BOOL upcoming;
@property(assign, nonatomic) int platformType;
@property(retain, nonatomic) NSString* platform;
@property(assign, nonatomic) int height;
@property(assign, nonatomic) int width;
@property(retain, nonatomic) id<VKSource> source;
@property(retain, nonatomic) NSArray* knownUserAlbums;
@property(retain, nonatomic) NSNumber* can_comment;
@property(retain, nonatomic) NSNumber* can_repost;
@property(assign, nonatomic) BOOL added;
@property(assign, nonatomic) int videoType;
@property(assign, nonatomic) BOOL converting;
@property(assign, nonatomic) BOOL processing;
@property(assign, nonatomic) BOOL canPlay;
@property(retain, nonatomic) NSString* content_restricted_message;
@property(assign, nonatomic) BOOL content_restricted;
@property(retain, nonatomic) NSString* player;
@property(retain, nonatomic) NSDictionary* files;
@property(assign, nonatomic) BOOL repeat;
@property(assign, nonatomic) BOOL is_private;
@property(assign, nonatomic) BOOL no_comments;
@property(assign, nonatomic) BOOL can_add;
@property(assign, nonatomic) BOOL can_edit;
@property(retain, nonatomic) VKPrivacySetting* privacy_comment;
@property(retain, nonatomic) VKPrivacySetting* privacy_view;
@property(assign, nonatomic) XXStruct_86WktA reposts;
@property(assign, nonatomic) XXStruct_uR0cxB likes;
@property(assign, nonatomic) XXStruct_86WktA comments;
@property(assign, nonatomic) int views;
@property(assign, nonatomic) unsigned date;
@property(retain, nonatomic) VKText* descr;
@property(assign, nonatomic) int duration;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSMutableDictionary* variants;
@property(retain, nonatomic) VKIdentity* parentIden;
+(id)videoFromDoc:(id)doc;
+(id)emptyVideoForUploadTo:(id)to;
+(void)initialize;
-(void)offsetComments:(int)comments;
-(void)updateReposts:(int)reposts user:(BOOL)user;
-(void)updateLikes:(id)likes user:(BOOL)user;
-(float)expectedAspectRatio;
-(id)messagesFilterForSize:(CGSize)size isFirst:(BOOL)first isLast:(BOOL)last;
-(int)statusMask;
-(id)statusForSource:(id)source;
-(id)imageURL;
-(id)URLForPreferedQuality:(int)preferedQuality;
-(unsigned)numberOfQualities;
-(int)qualityForPreferredQuality:(int)preferredQuality;
-(id)thumbnailUrl;
-(id)variantForSizeType:(int)sizeType checkFirstFrameVariantsFirst:(BOOL)first;
-(id)messagesPlaceholder;
-(XXStruct_UOIMaD)messagesRenderType;
-(BOOL)forceZoom;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height useFirstFrameVariantsIfHas:(BOOL)has;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height;
-(id)messagesVariant;
-(id)fullVariant;
-(id)thumbnailVariant;
-(BOOL)canPlayInline;
-(BOOL)process:(id)process context:(id)context;
-(void)domainOnEditCreate;
-(void)domainOnEditCopy:(id)copy;
-(Class)cellClass;
-(void)dealloc;
@end

