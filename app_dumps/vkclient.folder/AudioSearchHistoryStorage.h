/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface AudioSearchHistoryStorage : XXUnknownSuperclass {
	NSMutableArray* _mHistory;
}
@property(readonly, retain, nonatomic) NSArray* history;
-(void)clear;
-(void)addSearchQuery:(id)query;
-(id)initWithHistory:(id)history;
-(void)dealloc;
@end

