/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RoundedProgressOverlayViewDelegate.h"
#import "vkclient-Structs.h"
#import "ThumbnailView.h"

@class UILabel, RoundedProgressOverlayView, UIView, UploadEditAttachment, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface VideoThumbnailView : ThumbnailView <RoundedProgressOverlayViewDelegate> {
	BOOL _messages;
	UILabel* _label;
	UILabel* _albumTitle;
	UILabel* _albumCount;
	UIView* _background;
	RoundedProgressOverlayView* _progressView;
	UploadEditAttachment* _uploadingAttachment;
	UIImageView* _videoPlayIcon;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL messages;
@property(retain, nonatomic) UIView* background;
@property(retain, nonatomic) UILabel* albumCount;
@property(retain, nonatomic) UILabel* albumTitle;
@property(retain, nonatomic) UILabel* label;
@property(retain, nonatomic) UIImageView* videoPlayIcon;
@property(retain, nonatomic) UploadEditAttachment* uploadingAttachment;
@property(retain, nonatomic) RoundedProgressOverlayView* progressView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)uploadStateChanged:(id)changed;
-(void)progressViewDidCancel:(id)progressView;
-(void)renderUploadingAttachment:(id)attachment;
-(void)renderThumbnail:(id)thumbnail;
-(void)reuse;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

