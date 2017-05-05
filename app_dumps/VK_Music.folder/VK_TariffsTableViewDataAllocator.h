/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"
#import "VK_TableViewDataAllocator.h"

@class VK_SimpleSpaceCellProxy, NSString;

__attribute__((visibility("hidden")))
@interface VK_TariffsTableViewDataAllocator : XXUnknownSuperclass <VK_TableViewDataAllocator> {
	id _onTariffUnsubscribedBlock;
	id _onTariffSelectedBlock;
	id _onManageTariffsBlock;
	VK_SimpleSpaceCellProxy* _spaceCellProxy;
}
@property(readonly, assign, nonatomic) UIEdgeInsets tableInsets;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id onManageTariffsBlock;
@property(copy, nonatomic) id onTariffSelectedBlock;
@property(copy, nonatomic) id onTariffUnsubscribedBlock;
@property(retain, nonatomic) VK_SimpleSpaceCellProxy* spaceCellProxy;
-(void).cxx_destruct;
-(id)createAvailableTariffsSection;
-(id)cancelDefaultTariffProcessCellItem;
-(id)createTitleCellItemWithText:(id)text;
-(id)createManageTariffsCellItem;
-(id)createCurrentTariffUnsubscribeCellItemWith:(id)with;
-(id)createCurrentTariffSection;
-(void)setup;
-(id)allocateCellsWithData:(id)data;
-(id)init;
@end
