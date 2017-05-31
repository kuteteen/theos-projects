/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class UILabel, VKMImageView, UIButton;

__attribute__((visibility("hidden")))
@interface BaseUserCell : VKMCell {
	UILabel* _first;
	UILabel* _last;
	VKMImageView* _avatarImage;
	UIButton* _online;
}
@property(readonly, retain, nonatomic) UIButton* online;
@property(readonly, retain, nonatomic) VKMImageView* avatarImage;
@property(readonly, retain, nonatomic) UILabel* last;
@property(readonly, retain, nonatomic) UILabel* first;
+(void)prerender:(id)prerender;
-(void)willTransitionToState:(unsigned)state;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
@end

