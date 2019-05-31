/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol PSYSyncStateObserverInterface;
@class NSString;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface> {

	id<PSYSyncStateObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncStateObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PSYSyncStateObserverInterface>)delegate;
-(void)setDelegate:(id<PSYSyncStateObserverInterface>)arg1 ;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
@end

