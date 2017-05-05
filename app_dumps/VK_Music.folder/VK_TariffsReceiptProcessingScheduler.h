/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, NSTimer;
@protocol VK_TariffsReceiptProcessingScheduler;

@protocol VK_TariffsReceiptProcessingScheduler <NSObject>
-(void)tariffsReceiptProcessingSchedulerDidReceiptProcessedInBackground;
@end

__attribute__((visibility("hidden")))
@interface VK_TariffsReceiptProcessingScheduler : XXUnknownSuperclass {
	id<VK_TariffsReceiptProcessingScheduler> _delegate;
	NSString* _userId;
	NSMutableDictionary* _processedReceipts;
	NSTimer* _schedulingTimer;
}
@property(assign, nonatomic) __weak id<VK_TariffsReceiptProcessingScheduler> delegate;
@property(retain, nonatomic) NSTimer* schedulingTimer;
@property(retain, nonatomic) NSMutableDictionary* processedReceipts;
@property(retain, nonatomic) NSString* userId;
-(void).cxx_destruct;
-(BOOL)isValidStatusForReceiptProcessing;
-(void)processReceiptString:(id)string withStoreId:(id)storeId withCompletion:(id)completion;
-(void)tryToProcessTariffsInBackground;
-(id)userSavedTariffsReceiptsKey;
-(void)loadProcessedReceipts;
-(void)saveProcessedReceipts;
-(void)addReceiptString:(id)string forStoreId:(id)storeId withCompletion:(id)completion;
-(void)addReceiptsByStoreIds:(id)ids withCompletion:(id)completion;
-(void)addNotificationForBackgroundTariffsProcessing:(id)backgroundTariffsProcessing;
-(void)setupTariffsReceiptProcessingSchedulerWithUserId:(id)userId;
-(void)dealloc;
-(void)reset;
-(id)initWithUserId:(id)userId;
@end
