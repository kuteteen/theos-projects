/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIButton;

__attribute__((visibility("hidden")))
@interface MainMenuPlayer : XXUnknownSuperclass {
	UIButton* _playerButton;
	UIButton* _playerTouch;
	UILabel* _playerPerformer;
	UILabel* _playerTitle;
}
@property(retain, nonatomic) UILabel* playerTitle;
@property(retain, nonatomic) UILabel* playerPerformer;
@property(retain, nonatomic) UIButton* playerTouch;
@property(retain, nonatomic) UIButton* playerButton;
-(void)highlightUpdated;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)clear;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

