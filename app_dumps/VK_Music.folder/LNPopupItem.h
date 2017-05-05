/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIViewController, NSArray;
@protocol _LNPopupItemDelegate;

__attribute__((visibility("hidden")))
@interface LNPopupItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _subtitle;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	id<_LNPopupItemDelegate> _itemDelegate;
	UIViewController* _containerController;
}
@property(copy, nonatomic) NSArray* rightBarButtonItems;
@property(copy, nonatomic) NSArray* leftBarButtonItems;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic, getter=_containerController, setter=_setContainerController:) __weak UIViewController* containerController;
@property(assign, nonatomic, getter=_itemDelegate, setter=_setItemDelegate:) __weak id<_LNPopupItemDelegate> itemDelegate;
-(void).cxx_destruct;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(id)init;
@end
