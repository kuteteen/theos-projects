/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIToolbar, UITextView, UIBarButtonItem, UIImage, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SendMessagePopupView : XXUnknownSuperclass <UITextViewDelegate> {
	BOOL _emptyMessageBodyAllowed;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _sendButtonItem;
	UITextView* _textView;
	UIImage* _attachmentImage;
	UIImageView* _backgroundImageView;
	UIToolbar* _headerToolBar;
	UIImageView* _attachmentImageView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL emptyMessageBodyAllowed;
@property(retain, nonatomic) UIImage* attachmentImage;
@property(readonly, assign, nonatomic) UIBarButtonItem* sendButtonItem;
@property(readonly, assign, nonatomic) UIBarButtonItem* cancelButtonItem;
@property(retain, nonatomic) UIImageView* attachmentImageView;
@property(retain, nonatomic) UITextView* textView;
@property(retain, nonatomic) UIToolbar* headerToolBar;
@property(retain, nonatomic) UIImageView* backgroundImageView;
-(void).cxx_destruct;
-(void)textViewDidChange:(id)textView;
-(void)updateSendButtonEnabledState;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

