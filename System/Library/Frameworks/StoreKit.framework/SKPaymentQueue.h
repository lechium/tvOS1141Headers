/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPaymentQueueClient, NSArray;

@interface SKPaymentQueue : NSObject {

	id _internal;

}

@property (nonatomic,readonly) SKPaymentQueueClient * paymentQueueClient; 
@property (nonatomic,readonly) NSArray * transactions; 
+(id)defaultQueue;
+(BOOL)canMakePayments;
-(id)init;
-(void)dealloc;
-(void)_establishConnection;
-(void)cancelDownloads:(id)arg1 ;
-(void)resumeDownloads:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(id)_initSKPaymentQueue;
-(void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(BOOL)arg2 ;
-(void)_establishConnectionIfNeeded;
-(void)_sendCommand:(long long)arg1 forDownloads:(id)arg2 ;
-(void)_removeLocalTransaction:(id)arg1 ;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1 ;
-(void)_sendAppEnteredForegroundMessage;
-(void)_refreshPaymentsWithPolicy:(long long)arg1 ;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1 ;
-(void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg1 ;
-(void)_handleConnectionDisconnect;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setTransactionsWithReply:(id)arg1 ;
-(void)_notifyObserversAboutRemovals:(id)arg1 ;
-(void)_updateDownloadsForMessage:(id)arg1 ;
-(void)_updatePaymentsForMessage:(id)arg1 ;
-(void)_removePaymentsForMessage:(id)arg1 ;
-(void)_completeRestoreWithMessage:(id)arg1 ;
-(void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg1 ;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)arg1 ;
-(void)_finishRefreshPayments;
-(id)_copyDownloadIDsForDownloads:(id)arg1 ;
-(void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2 sendUpdatedDownloads:(BOOL)arg3 ;
-(id)_copyTransactionsFromXPCArray:(id)arg1 ;
-(id)_applyDownloadChangeset:(id)arg1 ;
-(void)_notifyObserversAboutDownloadChanges:(id)arg1 ;
-(void)startDownloads:(id)arg1 ;
-(void)_daemonLaunchedNotification;
-(NSArray *)transactions;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)addTransactionObserver:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)addPayment:(id)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)restoreCompletedTransactions;
-(id)initWithPaymentQueueClient:(id)arg1 ;
@end

