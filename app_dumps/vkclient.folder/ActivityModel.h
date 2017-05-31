/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Model.h"
#import "TimerTargetDelegate.h"

@class VKTimeout, VKUserProfile, VKAccountInfo, LocationTracker, TimerTarget, VKAccountInfoSubscriptions, AutoplayStats, NSString, NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface ActivityModel : Model <TimerTargetDelegate> {
	unsigned counters[5];
	VKUserProfile* _profile;
	NSArray* _bdaysTodayFriends;
	NSArray* _bdaysTomorrowFriends;
	VKAccountInfo* _accountInfo;
	VKAccountInfoSubscriptions* _subscriptions;
	TimerTarget* _timer;
	NSNumber* _bdaysUpdated;
	NSString* _useAPNSToken;
	LocationTracker* _locationTracker;
	VKTimeout* _stickersHasNewItemsTimeout;
	AutoplayStats* _autoplayStats;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAccountInfoSubscriptions* subscriptions;
@property(retain, nonatomic) VKAccountInfo* accountInfo;
@property(retain, nonatomic) NSArray* bdaysTomorrowFriends;
@property(retain, nonatomic) NSArray* bdaysTodayFriends;
@property(retain) VKUserProfile* profile;
@property(retain, nonatomic) AutoplayStats* autoplayStats;
@property(retain, nonatomic) VKTimeout* stickersHasNewItemsTimeout;
@property(retain, nonatomic) LocationTracker* locationTracker;
@property(retain, nonatomic) NSString* useAPNSToken;
@property(retain) NSNumber* bdaysUpdated;
@property(retain, nonatomic) TimerTarget* timer;
+(BOOL)activityUpdated:(id)updated counter:(int)counter;
+(int)activityUpdate:(id)update;
-(void)saveMusicIntroState:(BOOL)state;
-(void)saveIntroState:(int)state;
-(unsigned)total;
-(void)safeCounter:(int)counter set:(unsigned)set;
-(void)safeUpdateCounters:(id)counters;
-(void)syncUpdateCounters:(id)counters;
-(unsigned)counterValue:(int)value;
-(void)counter:(int)counter set:(unsigned)set;
-(void)counter:(int)counter offset:(unsigned)offset;
-(BOOL)change:(int)change value:(unsigned)value;
-(void)updateTotal;
-(void)notificationDBFriends:(id)friends;
-(void)note:(int)note;
-(void)processInternalNotification:(id)notification;
-(int)updateForCountersData:(id)countersData;
-(void)checkBDays:(BOOL)days;
-(void)checkBDaysNotification:(BOOL)notification;
-(void)reloadAccountInfoWithCompleteBlock:(id)completeBlock;
-(void)touchCounters;
-(void)touchActivity;
-(void)updateAPNSToken:(id)token;
-(void)timerTargetFired:(id)fired;
-(void)dealloc;
-(id)initWithSession:(id)session;
@end

