/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVCKDataClient, NSMutableArray;

@interface TVCKDataClientConnector : NSObject {

	TVCKDataClient* _dataClient;
	NSMutableArray* _blocks;

}

@property (nonatomic,retain) NSMutableArray * blocks;                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,readonly) TVCKDataClient * dataClient;              //@synthesize dataClient=_dataClient - In the implementation block
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(TVCKDataClient *)dataClient;
-(id)initWithDataClient:(id)arg1 ;
-(void)_dataClientStatusDidChange:(id)arg1 ;
-(NSMutableArray *)blocks;
-(void)_flushBlocks;
-(void)_stopObservingDataClientStatus;
-(void)_startObservingDataClientStatus;
-(void)_enqueueBlock:(/*^block*/id)arg1 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
@end

