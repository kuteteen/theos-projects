/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol VKGifAVReaderDelegate <NSObject>
-(void)gifAVReader:(id)reader didFailedWithError:(id)error;
-(void)gifAVReader:(id)reader didFetchData:(id)data withProgress:(float)progress;
-(void)gifAVReader:(id)reader didFoundTotalGifBytes:(long long)bytes;
@end
