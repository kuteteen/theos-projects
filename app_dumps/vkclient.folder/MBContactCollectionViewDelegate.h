/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "NSObject.h"


@protocol MBContactCollectionViewDelegate <NSObject>
@optional
-(void)contactCollectionView:(id)view didEnterCustomText:(id)text;
-(void)contactCollectionView:(id)view didRemoveContacts:(id)contacts;
-(void)contactCollectionView:(id)view didRemoveContact:(id)contact;
-(void)contactCollectionView:(id)view didAddContact:(id)contact;
-(void)contactCollectionView:(id)view didSelectContact:(id)contact;
-(BOOL)contactCollectionView:(id)view shouldRemoveContact:(id)contact;
-(BOOL)contactCollectionView:(id)view shouldAddContact:(id)contact;
-(void)contactCollectionView:(id)view didEnterCustomContact:(id)contact;
-(void)contactCollectionView:(id)view entryTextDidChange:(id)entryText;
-(void)contactCollectionView:(id)view willChangeContentSizeTo:(CGSize)to;
@end

