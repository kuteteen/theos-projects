/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface FacebookContactsLoader : XXUnknownSuperclass {
	NSString* _token;
}
@property(readonly, copy, nonatomic) NSString* token;
+(id)loaderWithFacebookAuth:(id)facebookAuth;
+(id)loaderWithFacebookToken:(id)facebookToken;
-(void).cxx_destruct;
-(void)loadFriendsIdentifiersWithCompletion:(id)completion;
-(id)friendIdentifiersWithData:(id)data;
-(id)initWithFacebookAuth:(id)facebookAuth;
-(id)initWithFacebookToken:(id)facebookToken;
@end

