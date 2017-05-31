/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKOpusPlayerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKSession, VKAudioMessage, VKOpusPlayer, AFHTTPRequestOperation;
@protocol VKAudioMessagePlayerDelegate;

__attribute__((visibility("hidden")))
@interface VKAudioMessagePlayer : XXUnknownSuperclass <VKOpusPlayerDelegate> {
	VKAudioMessage* _audioMessage;
	unsigned _state;
	id<VKAudioMessagePlayerDelegate> _delegate;
	VKSession* _session;
	AFHTTPRequestOperation* _downloadOp;
	VKOpusPlayer* _opusPlayer;
}
@property(assign, nonatomic) __weak id<VKAudioMessagePlayerDelegate> delegate;
@property(retain, nonatomic) VKOpusPlayer* opusPlayer;
@property(retain, nonatomic) AFHTTPRequestOperation* downloadOp;
@property(retain, nonatomic) VKSession* session;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) VKAudioMessage* audioMessage;
-(void).cxx_destruct;
-(void)opusPlayerChangingCurrentTime:(id)time;
-(void)opusPlayerDidFinishPlaying:(id)opusPlayer;
-(void)switchTo:(unsigned)to;
-(void)downloadAndPlay;
-(void)actualPlay;
-(double)duration;
-(double)currentTime;
-(BOOL)isPaused;
-(BOOL)isPlaying;
-(void)seekToTime:(double)time;
-(void)stop;
-(void)pause;
-(void)play;
-(id)initWithSession:(id)session audioMessage:(id)message;
-(void)dealloc;
@end

