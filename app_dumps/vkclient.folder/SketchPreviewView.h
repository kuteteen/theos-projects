/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKMImageView, VKDoc, UIImage, UIButton, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface SketchPreviewView : XXUnknownSuperclass {
	VKMImageView* _sketchImageView;
	UIButton* _sendButton;
	UIImage* _image;
	VKDoc* _graffitiDoc;
	UIActivityIndicatorView* _indicator;
}
@property(retain, nonatomic) UIActivityIndicatorView* indicator;
@property(retain, nonatomic) VKDoc* graffitiDoc;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) UIButton* sendButton;
@property(retain, nonatomic) VKMImageView* sketchImageView;
-(void).cxx_destruct;
-(void)updateStateAsReady;
-(id)initWithFrame:(CGRect)frame;
@end

