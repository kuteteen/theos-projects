/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSArray;

@interface VKOpusRecord : XXUnknownSuperclass {
	NSData* _encodedData;
	NSArray* _samplesInt16AbsMaxOfEveryFrame;
	double _duration;
}
@property(readonly, assign, nonatomic) NSArray* samplesInt16AbsMaxOfEveryFrame;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) NSData* encodedData;
-(void).cxx_destruct;
-(id)initWithEncodedData:(id)encodedData duration:(double)duration samplesInt16AbsMaxOfEveryFrame:(id)everyFrame;
@end

