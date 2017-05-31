/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StatsManager.h"


__attribute__((visibility("hidden")))
@interface CommonStatsManager : StatsManager {
}
+(id)eventTypeForEvent:(id)event;
-(void)postInteraction:(id)interaction action:(int)action context:(id)context;
-(void)audioMessagePlay:(id)play;
-(void)video:(id)video autoplay:(BOOL)autoplay source:(int)source;
-(void)gif:(id)gif autoplay:(BOOL)autoplay source:(int)source;
-(void)pushNotificationWithCategory:(id)category;
-(void)showUserRecommendation:(id)recommendation;
-(void)menuClick:(id)click;
-(void)gamesAction:(id)action type:(id)type source:(id)source requestName:(id)name context:(int)context;
-(void)gamesVisit:(int)visit;
-(void)storePurchasePid:(id)pid mpid:(id)mpid result:(id)result storeError:(id)error apiError:(id)error5;
-(void)audioAd:(id)ad source:(int)source;
-(void)audio:(id)audio source:(int)source duration:(float)duration startTime:(double)time;
-(void)videoPlay:(id)play quality:(int)quality middle:(BOOL)middle ref:(id)ref;
-(void)openVideo:(id)video;
-(void)openOwner:(id)owner source:(int)source;
-(void)openOwner:(id)owner;
-(void)transitionFromPost:(id)post;
-(void)openPost:(id)post;
-(void)viewPost:(id)post context:(id)context;
-(void)viewFriendsRecommendationsBlock:(id)block context:(id)context;
@end

