/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseSettingsController.h"
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface BaseSectionedSettingsController : BaseSettingsController {
}
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(BOOL)customizeFooterForSection:(unsigned)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)section:(unsigned)section;
-(void)resetSections;
-(void)addSection:(id)section;
-(void)viewDidLoad;
@end

