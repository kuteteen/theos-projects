/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "NSObject.h"


@protocol VKAVGifConverterDelegate <NSObject>
-(void)gifConverter:(id)converter didFailedForGifWithURL:(id)url withError:(id)error;
-(void)gifConverter:(id)converter didFinishConvertingGifWithURL:(id)url resultFileURL:(id)url3 size:(CGSize)size;
@optional
-(void)gifConverter:(id)converter reportedDownloadProgress:(float)progress;
@end

