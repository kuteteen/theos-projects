/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VK_ProfileInfoModel, VK_SubscriptionsManager, VK_FavoritesManager, NSString, VK_TariffsManager, VK_UserSettingsManager, VK_TempUserData, VK_MyAudioManager, VK_TracksSDKInfoManager, VK_UserVKFriendsManager, VK_UserSubscriptionsManager, VK_BookmarksManager, NSMutableDictionary, NSTimer, VK_ProfileModel;

__attribute__((visibility("hidden")))
@interface VK_DataModel : XXUnknownSuperclass {
	VK_ProfileInfoModel* _userInfo;
	NSString* _passKey;
	NSString* _userId;
	VK_TempUserData* _temp;
	VK_FavoritesManager* _favoritesManager;
	VK_TariffsManager* _tariffsManager;
	VK_SubscriptionsManager* _subscriptionsManager;
	VK_UserSettingsManager* _settings;
	VK_MyAudioManager* _myAudioManager;
	VK_TracksSDKInfoManager* _tracksSDKInfoManager;
	VK_UserVKFriendsManager* _userVKFriendsManager;
	VK_UserSubscriptionsManager* _userSubscriptionsManager;
	VK_BookmarksManager* _bookmarksManager;
	NSMutableDictionary* _profiles;
	NSMutableDictionary* _artists;
	NSMutableDictionary* _albums;
	NSTimer* _userTimer;
}
@property(readonly, assign, nonatomic) BOOL isNewUser;
@property(readonly, assign, nonatomic) VK_BookmarksManager* bookmarksManager;
@property(readonly, assign, nonatomic) VK_UserSubscriptionsManager* userSubscriptionsManager;
@property(readonly, assign, nonatomic) VK_UserVKFriendsManager* userVKFriendsManager;
@property(readonly, assign, nonatomic) VK_TracksSDKInfoManager* tracksSDKInfoManager;
@property(readonly, assign, nonatomic) VK_MyAudioManager* myAudioManager;
@property(readonly, assign, nonatomic) VK_UserSettingsManager* settings;
@property(readonly, assign, nonatomic) VK_SubscriptionsManager* subscriptionsManager;
@property(readonly, assign, nonatomic) VK_TariffsManager* tariffsManager;
@property(readonly, assign, nonatomic) VK_FavoritesManager* favoritesManager;
@property(readonly, assign, nonatomic) VK_TempUserData* temp;
@property(readonly, assign, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* passKey;
@property(retain, nonatomic) VK_ProfileInfoModel* userInfo;
@property(readonly, assign, nonatomic) VK_ProfileModel* myProfileModel;
@property(retain, nonatomic) NSTimer* userTimer;
@property(retain, nonatomic) NSMutableDictionary* albums;
@property(retain, nonatomic) NSMutableDictionary* artists;
@property(retain, nonatomic) NSMutableDictionary* profiles;
+(BOOL)isMyProfileOrNilUserId:(id)anId;
+(BOOL)isMyProfileUserId:(id)anId;
+(id)currentModel;
-(void).cxx_destruct;
-(void)onUserTimerFire;
-(void)setup;
-(id)createFeedDataProvider;
-(id)myProfile;
-(id)albumWithId:(id)anId;
-(id)artistWithId:(id)anId;
-(id)profileForUserId:(id)userId;
-(void)reset;
-(id)initWithUserId:(id)userId;
@end
