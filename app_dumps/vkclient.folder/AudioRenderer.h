/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioRendererBase.h"
#import "vkclient-Structs.h"

@class UIView, AudioOverlayButton, VKDomain, VKCircleProgressView, UIButton;

__attribute__((visibility("hidden")))
@interface AudioRenderer : AudioRendererBase {
	AudioOverlayButton* _playPauseButton;
	UIView* _cellAccessoryView;
	UIButton* _moreButton;
	VKCircleProgressView* _progressView;
	id _observer;
}
@property(retain, nonatomic) VKDomain* domain;
@property(retain, nonatomic) id observer;
@property(retain, nonatomic) VKCircleProgressView* progressView;
@property(retain, nonatomic) UIButton* moreButton;
@property(retain, nonatomic) UIView* cellAccessoryView;
@property(retain, nonatomic) AudioOverlayButton* playPauseButton;
+(int)cellStyle;
+(id)pickAudioImageUrl:(id)url;
+(void)build:(id)build;
+(void)prepareLayout:(id)layout;
+(void)t;
+(id)rendererElements;
-(id)audio;
-(void)playerWillChangeItem:(id)player;
-(void)playerChangedItem:(id)item;
-(void)updatePlayPauseButton:(BOOL)button;
-(void)update;
-(void)updateProgressForProgressView:(float)progressView;
-(float)progressForTime:(XXStruct_pwHToB)time;
-(void)createTimeObserver;
-(void)togglePlayPause:(id)pause;
-(void)renderCell:(id)cell;
-(void)setupCell:(id)cell;
-(void)dealloc;
@end

