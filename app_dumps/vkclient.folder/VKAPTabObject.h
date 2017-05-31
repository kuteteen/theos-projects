/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, NSString;
@protocol VKAPTabViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface VKAPTabObject : XXUnknownSuperclass {
	BOOL _showPromo;
	NSString* _title;
	NSString* _tabButtonImagesTitle;
	int _tabType;
	UIViewController<VKAPTabViewControllerProtocol>* _controller;
}
@property(retain, nonatomic) UIViewController<VKAPTabViewControllerProtocol>* controller;
@property(assign, nonatomic) BOOL showPromo;
@property(assign, nonatomic) int tabType;
@property(copy, nonatomic) NSString* tabButtonImagesTitle;
@property(copy, nonatomic) NSString* title;
+(id)createVkApTabsWithOptions:(int)options model:(id)model stats:(id)stats;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithTitle:(id)title imageName:(id)name tabType:(int)type controller:(id)controller;
@end

