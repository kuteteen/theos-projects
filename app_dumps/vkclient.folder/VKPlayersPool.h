/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VKPlayersPool : XXUnknownSuperclass {
	NSDictionary* _playersPool;
	int _playersMade;
	int _playersReused;
}
+(id)dispatchQueueForState;
+(id)instance;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)reusePlayer:(id)player withType:(int)type;
-(id)playerWithType:(int)type;
-(id)init;
-(void)dealloc;
@end

