/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMImageView.h"
#import "UIGestureRecognizerDelegate.h"
#import "vkclient-Structs.h"
#import "VKThumbnailView.h"

@class VKDomain, UIImage, NSString, UITapGestureRecognizer;
@protocol ThumbnailViewDelegate, VKThumbnailable;

__attribute__((visibility("hidden")))
@interface ThumbnailView : VKMImageView <UIGestureRecognizerDelegate, VKThumbnailView> {
	VKDomain<VKThumbnailable>* _domain;
	int _renderedSize;
	UITapGestureRecognizer* _recognizer;
	id<ThumbnailViewDelegate> _delegate;
}
@property(readonly, assign, nonatomic) UIImage* image;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<ThumbnailViewDelegate> delegate;
@property(retain, nonatomic) UITapGestureRecognizer* recognizer;
@property(assign, nonatomic) int renderedSize;
@property(retain, nonatomic) VKDomain<VKThumbnailable>* domain;
-(id)navDelegate;
-(void)tapped:(id)tapped;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

