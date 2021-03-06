/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface VKProfilePersonal : VKDomain {
	NSArray* _langs;
	NSString* _religion;
	NSString* _inspired_by;
	int _political;
	int _people_main;
	int _life_main;
	int _smoking;
	int _alcohol;
}
@property(assign, nonatomic) int alcohol;
@property(assign, nonatomic) int smoking;
@property(assign, nonatomic) int life_main;
@property(assign, nonatomic) int people_main;
@property(assign, nonatomic) int political;
@property(copy, nonatomic) NSString* inspired_by;
@property(copy, nonatomic) NSString* religion;
@property(copy, nonatomic) NSArray* langs;
+(id)personalsMap;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

