/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface FreshNewsButton : XXUnknownSuperclass {
	BOOL _buttonHidden;
	BOOL _loading;
	UIButton* _button;
	UIActivityIndicatorView* _activity;
}
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(assign, nonatomic, getter=isButtonHidden) BOOL buttonHidden;
@property(retain, nonatomic) UIActivityIndicatorView* activity;
@property(retain, nonatomic) UIButton* button;
-(void)setButtonHidden:(BOOL)hidden animated:(BOOL)animated;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

