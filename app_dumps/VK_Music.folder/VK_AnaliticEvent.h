/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VK_AnaliticEvent : XXUnknownSuperclass {
	unsigned short _screen;
	unsigned short _block;
	unsigned short _action;
	double _eventTime;
}
@property(assign, nonatomic) double eventTime;
@property(assign, nonatomic) unsigned short action;
@property(assign, nonatomic) unsigned short block;
@property(assign, nonatomic) unsigned short screen;
+(id)eventWithAction:(unsigned short)action screen:(unsigned short)screen block:(unsigned short)block time:(double)time;
+(id)eventWithAction:(unsigned short)action screen:(unsigned short)screen block:(unsigned short)block;
+(id)eventWithAction:(unsigned short)action screen:(unsigned short)screen;
-(id)description;
@end
