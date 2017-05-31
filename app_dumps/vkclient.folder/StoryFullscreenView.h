/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class StoryHighlightableSourceView, EmptyStateView, StoryVideoPlayerView, UIView, UIButton, StoryFullscreenPhotoImageView, KVOObserver, UIVisualEffectView, StoryFullscreenProgressView, VideoPlayerErrorOverlayView, UIImageView, StoryFullscreenFooterView;
@protocol AnimatingIndicator;

__attribute__((visibility("hidden")))
@interface StoryFullscreenView : XXUnknownSuperclass {
	StoryFullscreenProgressView* _progressView;
	StoryHighlightableSourceView* _sourceView;
	StoryFullscreenFooterView* _footerView;
	UIImageView* _topScrimImageView;
	UIImageView* _bottomScrimImageView;
	UIImageView* _storyPreviewLowResImageView;
	UIVisualEffectView* _storyPreviewLowResBlurView;
	UIView* _storyContentView;
	UIView<AnimatingIndicator>* _loadingProgressView;
	StoryFullscreenPhotoImageView* _photoStoryImageView;
	StoryVideoPlayerView* _videoStoryView;
	VideoPlayerErrorOverlayView* _videoErrorOverlay;
	EmptyStateView* _emptyStateView;
	UIButton* _backAreaButton;
	KVOObserver* _playerKVOObserver;
}
@property(readonly, assign, nonatomic) UIButton* backAreaButton;
@property(readonly, assign, nonatomic) EmptyStateView* emptyStateView;
@property(readonly, assign, nonatomic) VideoPlayerErrorOverlayView* videoErrorOverlay;
@property(readonly, assign, nonatomic) StoryVideoPlayerView* videoStoryView;
@property(readonly, assign, nonatomic) StoryFullscreenPhotoImageView* photoStoryImageView;
@property(readonly, assign, nonatomic) UIView<AnimatingIndicator>* loadingProgressView;
@property(readonly, assign, nonatomic) UIView* storyContentView;
@property(readonly, assign, nonatomic) UIVisualEffectView* storyPreviewLowResBlurView;
@property(readonly, assign, nonatomic) UIImageView* storyPreviewLowResImageView;
@property(readonly, assign, nonatomic) UIImageView* bottomScrimImageView;
@property(readonly, assign, nonatomic) UIImageView* topScrimImageView;
@property(readonly, assign, nonatomic) StoryHighlightableSourceView* sourceView;
@property(readonly, assign, nonatomic) StoryFullscreenProgressView* progressView;
@property(retain, nonatomic) KVOObserver* playerKVOObserver;
@property(retain, nonatomic) StoryFullscreenFooterView* footerView;
-(void).cxx_destruct;
-(void)setEmptyStateImage:(id)image bodyText:(id)text;
-(void)stopLoadingAnimation;
-(void)startLoadingAnimation;
-(void)startLoadingAnimationThrottle:(BOOL)throttle;
-(void)prepareForReuse;
-(id)createProgressView;
-(void)initializeSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

