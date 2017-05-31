/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class StoryIdentity, StoryUploadOperation, KVOObserver, StoryUploadContext;

__attribute__((visibility("hidden")))
@interface UploadingStory : XXUnknownSuperclass {
	BOOL _uploadAnimationShown;
	StoryUploadContext* _context;
	float _progress;
	StoryIdentity* _storyIden;
	unsigned _state;
	StoryUploadOperation* _operation;
	KVOObserver* _operationObserver;
}
@property(assign, nonatomic) BOOL uploadAnimationShown;
@property(readonly, copy, nonatomic) StoryIdentity* storyIden;
@property(readonly, assign, nonatomic) StoryUploadContext* context;
@property(retain, nonatomic) KVOObserver* operationObserver;
@property(assign, nonatomic) float progress;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) StoryUploadOperation* operation;
+(id)uploadingStoryWithUploadContext:(id)uploadContext storyIden:(id)iden;
-(void).cxx_destruct;
-(void)cleanUpOperation;
-(void)createAndSetupOperation;
-(void)cancelUpload;
-(void)restartUpload;
-(void)startUpload;
-(void)dealloc;
-(id)initWithUploadContext:(id)uploadContext storyIden:(id)iden;
@end

