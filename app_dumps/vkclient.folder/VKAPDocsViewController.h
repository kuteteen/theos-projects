/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "DocsController.h"
#import "VKAPTabViewControllerProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKAPDocsViewController : DocsController <VKAPTabViewControllerProtocol> {
	id _docUpload;
	unsigned _selectionLimit;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned selectionLimit;
@property(copy, nonatomic) id docUpload;
-(void).cxx_destruct;
-(id)scrollView;
-(void)actionAdd:(id)add;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(BOOL)VKMScrollViewDisablePTR;
-(void)VKMNavigationBarUpdate;
-(void)viewWillAppear:(BOOL)view;
@end

