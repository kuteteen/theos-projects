/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorOptionsProviderSimple.h"

@protocol VKSelectorOption;

__attribute__((visibility("hidden")))
@interface ChatControllerMenuOptionsProvider : VKSelectorOptionsProviderSimple {
	id<VKSelectorOption> _attachmentsOption;
	id<VKSelectorOption> _toggleNotificationsOption;
	id<VKSelectorOption> _chatSettingsOption;
	id<VKSelectorOption> _clearHistoryOption;
}
@property(readonly, retain, nonatomic) id<VKSelectorOption> clearHistoryOption;
@property(readonly, retain, nonatomic) id<VKSelectorOption> chatSettingsOption;
@property(readonly, retain, nonatomic) id<VKSelectorOption> toggleNotificationsOption;
@property(readonly, retain, nonatomic) id<VKSelectorOption> attachmentsOption;
-(id)initWithAttachmentsOption:(id)attachmentsOption toggleNotificationsOption:(id)option chatSettingsOption:(id)option3 clearHistoryOption:(id)option4;
-(void)dealloc;
@end

