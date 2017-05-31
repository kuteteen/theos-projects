/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation;

__attribute__((visibility("hidden")))
@interface LocationStat : XXUnknownSuperclass {
	int _status;
	CLLocation* _location;
}
@property(readonly, assign, nonatomic) CLLocation* location;
@property(readonly, assign, nonatomic) int status;
+(id)statWithLocationNotDetermined;
+(id)statWithLocationDenied;
+(id)statWithLocation:(id)location;
-(id)initWithStatus:(int)status location:(id)location;
-(void)dealloc;
@end

