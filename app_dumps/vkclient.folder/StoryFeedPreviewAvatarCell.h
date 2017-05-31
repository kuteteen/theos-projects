/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, VKMImageView, UIImageView;
@protocol StoryFeedPreviewAvatarCellViewModel;

__attribute__((visibility("hidden")))
@interface StoryFeedPreviewAvatarCell : XXUnknownSuperclass {
	VKMImageView* _imageView;
	id<StoryFeedPreviewAvatarCellViewModel> _viewModel;
	UILabel* _nameLabel;
	UIImageView* _unseenOverlayImageView;
	UIImageView* _uploadFailedOverlayImageView;
	UIImageView* _createStoryButtonImageView;
}
@property(retain, nonatomic) id<StoryFeedPreviewAvatarCellViewModel> viewModel;
@property(readonly, assign, nonatomic) VKMImageView* imageView;
@property(retain, nonatomic) UIImageView* createStoryButtonImageView;
@property(retain, nonatomic) UIImageView* uploadFailedOverlayImageView;
@property(retain, nonatomic) UIImageView* unseenOverlayImageView;
@property(retain, nonatomic) UILabel* nameLabel;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted;
-(void)showUploadStartedAnimation;
-(void)updateContentForViewModel:(id)viewModel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)frame;
@end

