/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADSegmentDataManager : ADSingleton {

	BOOL _segmentUpdateInProgress;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;              //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) BOOL segmentUpdateInProgress;                    //@synthesize segmentUpdateInProgress=_segmentUpdateInProgress - In the implementation block
@property (nonatomic,readonly) BOOL segmentRetrievalInProgress; 
+(id)sharedInstance;
-(void)retrieveSegmentData:(id)arg1 forceSegments:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
-(BOOL)segmentRetrievalInProgress;
-(void)retrieveSegmentData:(id)arg1 forceSegments:(BOOL)arg2 ignoreTimestamps:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(BOOL)arg2 ;
-(void)handleJingleSegmentResponse:(id)arg1 activeRecord:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)checkTokenAndDSID:(id)arg1 ;
-(void)handleSuccessfulJingleSegmentResponse:(id)arg1 dsidRecord:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldSendSegmentDataToAdPlatforms:(id)arg1 ;
-(void)populateAccountTypeFields:(id)arg1 ;
-(void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)segmentUpdateInProgress;
-(void)setSegmentUpdateInProgress:(BOOL)arg1 ;
@end
