/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class UILabel, VKMImageView, VKAPIAppLeaderboard, UIButton;

__attribute__((visibility("hidden")))
@interface AppLeaderboardCell : VKMCell {
	UIButton* _userNameButton;
	UILabel* _placeLabel;
	UILabel* _pointsCountLabel;
	VKMImageView* _avatarImageView;
}
@property(retain, nonatomic) VKAPIAppLeaderboard* domain;
@property(readonly, retain, nonatomic) VKMImageView* avatarImageView;
@property(readonly, retain, nonatomic) UILabel* pointsCountLabel;
@property(readonly, retain, nonatomic) UILabel* placeLabel;
@property(readonly, retain, nonatomic) UIButton* userNameButton;
+(id)plainNumberFormatter;
+(void)prerender:(id)prerender;
-(void)userNameTapped;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)layoutSubviews;
-(id)createSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

