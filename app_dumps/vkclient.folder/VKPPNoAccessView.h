/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIButton;

@interface VKPPNoAccessView : XXUnknownSuperclass {
	UIButton* _openSettingsButton;
	UILabel* _title;
	UILabel* _subtitle;
}
@property(retain, nonatomic) UILabel* subtitle;
@property(retain, nonatomic) UILabel* title;
@property(retain, nonatomic) UIButton* openSettingsButton;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)updateWithTitle:(id)title subtitle:(id)subtitle buttonTitle:(id)title3;
-(id)initWithFrame:(CGRect)frame;
@end

