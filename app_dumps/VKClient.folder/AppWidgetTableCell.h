/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VKRemoteImageAssetGroup, NSString;
@protocol VKRemoteAction;

__attribute__((visibility("hidden")))
@interface AppWidgetTableCell : VKRenderable {
	NSString* _text;
	VKRemoteImageAssetGroup* _icon;
	id<VKRemoteAction> _action;
}
@property(retain, nonatomic) id<VKRemoteAction> action;
@property(retain, nonatomic) VKRemoteImageAssetGroup* icon;
@property(retain, nonatomic) NSString* text;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end
