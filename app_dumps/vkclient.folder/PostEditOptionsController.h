/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PostEditContext, UIDatePicker;

__attribute__((visibility("hidden")))
@interface PostEditOptionsController : XXUnknownSuperclass {
	PostEditContext* _context;
	UIDatePicker* _timerPicker;
}
@property(retain, nonatomic) PostEditContext* context;
@property(retain, nonatomic) UIDatePicker* timerPicker;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)roundUpDate:(id)date toIntervalMinutes:(int)intervalMinutes;
-(id)applyServerShift:(id)shift;
-(void)actionTimer:(id)timer;
-(void)actionOptionChanged:(id)changed;
-(void)actionDone:(id)done;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end

