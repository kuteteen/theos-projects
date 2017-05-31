/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMSubtitleCell.h"
#import "vkclient-Structs.h"

@class UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface LookupContactCell : VKMSubtitleCell {
	UIButton* _inviteButton;
	UIImageView* _checkmarkImageView;
	UIImageView* _verifiedIconView;
}
@property(readonly, retain, nonatomic) UIImageView* verifiedIconView;
@property(readonly, retain, nonatomic) UIImageView* checkmarkImageView;
@property(readonly, retain, nonatomic) UIButton* inviteButton;
-(void)showCheckmarkAnimated;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)makeFriends;
-(id)makeInviteButton;
@end

