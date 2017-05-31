/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ActionDialogProvider <NSObject>
-(void)showInViewController:(id)viewController;
-(id)dialogTextFieldAtIndex:(int)index;
-(void)addTextFieldWithPlaceholder:(id)placeholder text:(id)text secured:(BOOL)secured;
-(void)addButtonWithTitle:(id)title block:(id)block preferred:(BOOL)preferred;
-(void)addButtonWithTitle:(id)title block:(id)block;
-(void)setDestructiveButtonWithTitle:(id)title block:(id)block;
-(void)setCancelButtonWithTitle:(id)title block:(id)block;
@end

