/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "VKMImageLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKMImageView, ExtrasBadgeView, ExtrasTabBarItem, NSString;

__attribute__((visibility("hidden")))
@interface ExtrasTabBarButton : XXUnknownSuperclass <VKMImageLoaderDelegate> {
	VKMImageView* _imageView;
	ExtrasTabBarItem* _extraTabItem;
	ExtrasBadgeView* _badge;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ExtrasTabBarItem* extraTabItem;
@property(retain, nonatomic) VKMImageView* imageView;
@property(retain, nonatomic) ExtrasBadgeView* badge;
+(void)initialize;
-(void)setSelected:(BOOL)selected;
-(id)accessibilityLabel;
-(void)loader:(id)loader complete:(id)complete;
-(void)setTabItem:(id)item;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)badgeValue;
-(void)performBadgeAnimation;
-(void)setBadgeValue:(id)value;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

