/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_ApiResponse.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VK_DialogsTextResponse : VK_ApiResponse {
	NSDictionary* _dialogTextItems;
}
@property(retain, nonatomic) NSDictionary* dialogTextItems;
+(void)internalInitMapping:(id)mapping;
-(void).cxx_destruct;
@end
