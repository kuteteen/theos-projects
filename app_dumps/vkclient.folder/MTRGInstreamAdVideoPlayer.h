/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "MTRGInstreamAdPlayer.h"
#import "MTRGVideoViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MTRGVideoData, UIView, NSString, MTRGVideoView, UIActivityIndicatorView, NSURL;
@protocol MTRGInstreamAdPlayerDelegate;

@interface MTRGInstreamAdVideoPlayer : XXUnknownSuperclass <MTRGVideoViewDelegate, MTRGInstreamAdPlayer> {
	MTRGVideoView* _videoView;
	id<MTRGInstreamAdPlayerDelegate> _delegate;
	MTRGVideoData* _activeVideoData;
	NSURL* _activeVideoUrl;
	double _activeVideoDuration;
	UIActivityIndicatorView* _indicatorView;
	float _volume;
}
@property(assign, nonatomic) float volume;
@property(readonly, assign, nonatomic) UIView* adPlayerView;
@property(assign, nonatomic) __weak id<MTRGInstreamAdPlayerDelegate> adPlayerDelegate;
@property(readonly, assign, nonatomic) double adVideoTimeElapsed;
@property(readonly, assign, nonatomic) double adVideoDuration;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onAirPlayActiveChangedWithUrl:(id)url airPlayVideoActive:(BOOL)active videoView:(id)view;
-(void)onResumptionWithUrl:(id)url videoView:(id)view;
-(void)onSuspenseWithUrl:(id)url videoView:(id)view;
-(void)onClickWithUrl:(id)url videoView:(id)view;
-(void)onProgressWithUrl:(id)url time:(double)time duration:(double)duration videoView:(id)view;
-(void)onErrorWithUrl:(id)url error:(id)error videoView:(id)view;
-(void)onCompleteWithUrl:(id)url videoView:(id)view;
-(void)onStartWithUrl:(id)url duration:(double)duration videoView:(id)view;
-(void)stopAdVideo;
-(void)resumeAdVideo;
-(void)pauseAdVideo;
-(void)playAdVideoWithUrl:(id)url;
-(void)hideIndicator;
-(void)showIndicator;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

