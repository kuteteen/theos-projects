/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"

@class GiftsUserModel;

__attribute__((visibility("hidden")))
@interface GiftsUserController : VKMLiveController {
}
@property(retain, nonatomic) GiftsUserModel* model;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)actionTeaserButton:(id)button;
-(void)VKMScrollViewHasLoaded;
-(void)VKMTableUpdatedIndex;
-(int)VKMTableStyle;
-(void)viewDidLoad;
-(void)checkRightButton;
@end

