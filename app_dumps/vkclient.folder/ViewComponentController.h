/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5Controller.h"

@class UIView, ViewComponent;

__attribute__((visibility("hidden")))
@interface ViewComponentController : Component5Controller {
}
@property(retain, nonatomic) ViewComponent* component;
@property(assign, nonatomic) __weak UIView* view;
+(id)createView;
-(void)component:(id)component didUpdateState:(id)state toState:(id)state3 animated:(BOOL)animated;
-(void)updateView:(id)view withState:(id)state;
@end

