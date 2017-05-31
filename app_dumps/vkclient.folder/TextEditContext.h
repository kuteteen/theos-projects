/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EditContext.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TextEditContext : EditContext {
	NSString* _text;
}
@property(retain, nonatomic) NSString* text;
-(id)placeholderText;
-(id)tooShortFormatKey;
-(unsigned)textLengthMax;
-(unsigned)textLengthMin;
-(id)title;
-(Class)editControllerClass;
-(void)dealloc;
@end

