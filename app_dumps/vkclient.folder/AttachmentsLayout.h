/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class AttachmentsContainer, NSMutableArray, UIView, NSArray, UIFont, NSString;

__attribute__((visibility("hidden")))
@interface AttachmentsLayout : XXUnknownSuperclass {
	BOOL skipUpdate;
	AttachmentsContainer* _container;
	UIView* _view;
	NSMutableArray* _attachmentViews;
	NSArray* _extraViews;
	struct {
		CGSize size;
		NSString* backgroundImage;
		UIEdgeInsets borderInset;
		UIEdgeInsets viewInset;
		float cornerRadius;
		NSString* deleteImage;
		CGPoint deleteOffset;
		float titlePadding;
		float titleY;
		float titleH1;
		float titleH2;
		float titleH3;
		UIFont* font1;
		UIFont* font2;
		UIFont* font3;
		BOOL textShadow;
	} _style;
}
@property(retain, nonatomic) NSArray* extraViews;
@property(retain, nonatomic) NSMutableArray* attachmentViews;
@property(retain, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) XXStruct_9zIMjA style;
@property(readonly, retain, nonatomic) AttachmentsContainer* container;
-(CGSize)layoutSize;
-(void)animateAttachments:(id)attachments;
-(void)alignAttachments:(id)attachments;
-(int)indexForPoint:(CGPoint)point;
-(void)gestureLongPress:(id)press;
-(BOOL)checkCanAdd;
-(void)updateLayout;
-(void)resetLayout;
-(void)updateLayoutAnimated:(BOOL)animated delay:(double)delay animate:(id)animate completion:(id)completion;
-(void)change:(id)change animated:(BOOL)animated delay:(double)delay animate:(id)animate completion:(id)completion;
-(void)useExtraViews:(id)views;
-(void)notificationViewDelete:(id)aDelete;
-(void)notificationUpdated:(id)updated;
-(void)dealloc;
-(id)initWithContainer:(id)container style:(XXStruct_9zIMjA)style;
@end
