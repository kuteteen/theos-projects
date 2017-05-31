/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TrackingBoundsView.h"
#import "vkclient-Structs.h"
#import "VKVideoPlayerHolder.h"
#import "VKThumbnailView.h"
#import "VideoPlayerToFullScreenTransitionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VideoPlayerFromFullScreenTransitionVideoViewDestination.h"
#import "ViewControllerAppearanceStateHandler.h"

@class VKVideoPlayer, FinishedVideoActionsOverlayView, VKImageVariant, FeedVideoIndicatorView, UIImage, VKVideo, NSString, NSTimer, KVOObserver, VideoPlayerErrorOverlayView, UIImageView, NSURL;
@protocol FeedVideoViewDelegate;

__attribute__((visibility("hidden")))
@interface FeedVideoView : XXUnknownSuperclass <VKThumbnailView, TrackingBoundsView, ViewControllerAppearanceStateHandler, VKVideoPlayerHolder, VideoPlayerToFullScreenTransitionDelegate, VideoPlayerFromFullScreenTransitionVideoViewDestination> {
	BOOL _manuallyPausedVideo;
	BOOL _didTransitionToFullScreen;
	BOOL _fullScreenTransitionInProgress;
	BOOL _wasPlayingBeforeApplicationResignedActive;
	VKVideoPlayer* _videoPlayer;
	VKVideo* _domain;
	int _renderedSize;
	float _trackingBoundsPercentsVisible;
	int _viewControllerVisibility;
	id<FeedVideoViewDelegate> _delegate;
	NSURL* _currentURL;
	FeedVideoIndicatorView* _indicatorView;
	UIImageView* _playImageView;
	FinishedVideoActionsOverlayView* _finishedVideoActionsOverlayView;
	VideoPlayerErrorOverlayView* _errorOverlayView;
	VKImageVariant* _previewImage;
	KVOObserver* _playerObserver;
	NSTimer* _trackingBoundsUpdateThrottleTimer;
}
@property(readonly, assign, nonatomic) UIImage* image;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FeedVideoViewDelegate> delegate;
@property(assign, nonatomic) int viewControllerVisibility;
@property(assign, nonatomic) float trackingBoundsPercentsVisible;
@property(assign, nonatomic) int renderedSize;
@property(retain, nonatomic) VKVideo* domain;
@property(assign, nonatomic) BOOL wasPlayingBeforeApplicationResignedActive;
@property(retain, nonatomic) NSTimer* trackingBoundsUpdateThrottleTimer;
@property(retain, nonatomic) KVOObserver* playerObserver;
@property(assign, nonatomic) BOOL fullScreenTransitionInProgress;
@property(assign, nonatomic) BOOL didTransitionToFullScreen;
@property(assign, nonatomic) BOOL manuallyPausedVideo;
@property(retain, nonatomic) VKImageVariant* previewImage;
@property(retain, nonatomic) VideoPlayerErrorOverlayView* errorOverlayView;
@property(retain, nonatomic) FinishedVideoActionsOverlayView* finishedVideoActionsOverlayView;
@property(retain, nonatomic) UIImageView* playImageView;
@property(retain, nonatomic) FeedVideoIndicatorView* indicatorView;
@property(retain, nonatomic) VKVideoPlayer* videoPlayer;
@property(retain, nonatomic) NSURL* currentURL;
-(void).cxx_destruct;
-(void)parentViewControllerViewDidAppear;
-(void)parentViewControllerViewDidDisappear;
-(void)parentViewControllerViewWillDisappear;
-(void)updateForParentViewControllerVisibility:(int)parentViewControllerVisibility;
-(void)checkIfNeedToPlayForTrackingBoundsPercentsVisible:(float)trackingBoundsPercentsVisible previousPercentsVisible:(float)visible throttle:(BOOL)throttle;
-(void)handleAudioSessionInterruptionNotification:(id)notification;
-(void)handleAudioSessionRouteChangeNotification:(id)notification;
-(void)handleApplicationDidBecomeActiveNotification:(id)handleApplication;
-(void)handleApplicationWillResignActiveNotification:(id)handleApplication;
-(void)handleErrorOverlayTryAgainButtonTap:(id)tap;
-(void)handleFinishedVideoActionsOverlayViewButtonTap:(id)tap;
-(void)handleTap:(id)tap;
-(void)didEndTransitionFromFullScreenWithVideoPlayer:(id)videoPlayer;
-(void)didCancelTransitionFromFullScreenWithVideoPlayer:(id)videoPlayer;
-(void)willEndTransitionFromFullScreenWithVideoPlayer:(id)videoPlayer;
-(void)willBeginTransitionFromFullScreenWithVideoPlayer:(id)videoPlayer;
-(void)performExtraChangesAlongTransitionAnimatinFromFullScreenWithVideoPlayer:(id)videoPlayer;
-(CGRect)animationDestinationFrameInView:(id)view;
-(BOOL)isValidForFromFullScreenTransitionWithVideo:(id)video;
-(void)didEndTransitionToFullScreen;
-(void)willBeginTransitionToFullScreen;
-(void)attachVideoPlayer:(id)player;
-(void)deattachCurrentVideoPlayer;
-(void)setupPlayerWithVideo:(id)video videoURL:(id)url preview:(id)preview;
-(void)ensureHasVideoPlayerSetupIt:(BOOL)it;
-(void)handleVideoPlayerCurrentTimeChanged:(double)changed;
-(void)handleVideoPlayerStateChange:(id)change prevState:(id)state;
-(void)updateForVideoPlayerState;
-(void)resetView;
-(void)attach:(id)attach previewVariant:(id)variant;
-(void)setPlayImageViewHiddenIfNotGif:(BOOL)gif;
-(void)tearDownVideoPlayerKVOObserver;
-(void)setupVideoPlayerKVOObserver;
-(int)previewAspectMode;
-(void)layoutSubviews;
-(void)prepareToReload;
-(void)reuse;
-(void)initializeSubviews;
-(void)initialize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

