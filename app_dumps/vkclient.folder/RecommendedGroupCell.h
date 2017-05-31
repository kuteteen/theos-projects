/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GroupCell.h"

@class UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface RecommendedGroupCell : GroupCell {
	UIImageView* _checkmarkImageView;
	UIButton* _inviteButton;
	UIImageView* _verifiedIconView;
}
@property(readonly, retain, nonatomic) UIImageView* verifiedIconView;
@property(retain, nonatomic) UIButton* inviteButton;
@property(retain, nonatomic) UIImageView* checkmarkImageView;
-(void)joinGroup:(id)group;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)showCheckmarkAnimated;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

