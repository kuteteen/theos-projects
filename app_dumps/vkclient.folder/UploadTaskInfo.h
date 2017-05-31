/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSMutableData, NSError, NSData, NSString;

__attribute__((visibility("hidden")))
@interface UploadTaskInfo : XXUnknownSuperclass <NSCoding> {
	NSString* _responseString;
	int _state;
	int _errorsCount;
	NSError* _lastError;
	NSMutableData* _responseData;
	NSData* _requestData;
	NSRange _bytesRange;
	long long _bytesSend;
}
@property(readonly, copy, nonatomic) NSString* responseString;
@property(retain, nonatomic) NSData* requestData;
@property(retain, nonatomic) NSMutableData* responseData;
@property(retain, nonatomic) NSError* lastError;
@property(readonly, copy, nonatomic) NSString* bytesRangeString;
@property(assign, nonatomic) int errorsCount;
@property(assign, nonatomic) long long bytesSend;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) NSRange bytesRange;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

