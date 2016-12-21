/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ProfileInfoController.h"

@class GroupModel;

__attribute__((visibility("hidden")))
@interface GroupInfoController : ProfileInfoController {
}
@property(retain, nonatomic) GroupModel* model;
-(id)safeProfileItemAtIndexPath:(id)indexPath;
-(void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)indexPath;
-(void)actionProfileViewProfilePhoto:(id)photo;
-(void)actionShowActions:(id)actions;
-(void)VKMTableUpdatedIndex;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)viewDidLoad;
-(void)updateProfile;
@end
