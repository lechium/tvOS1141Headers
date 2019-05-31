/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, CPLFeatureVersionHistory, NSData, CPLAccountFlags;

@interface CPLLibraryInfo : NSObject {

	NSDictionary* _assetCounts;
	CPLFeatureVersionHistory* _featureVersionHistory;
	NSData* _lastKnownSyncAnchor;
	NSData* _accountFlagsData;

}

@property (nonatomic,copy) NSDictionary * assetCounts;                                      //@synthesize assetCounts=_assetCounts - In the implementation block
@property (nonatomic,retain) CPLFeatureVersionHistory * featureVersionHistory;              //@synthesize featureVersionHistory=_featureVersionHistory - In the implementation block
@property (nonatomic,copy) NSData * lastKnownSyncAnchor;                                    //@synthesize lastKnownSyncAnchor=_lastKnownSyncAnchor - In the implementation block
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (nonatomic,copy) NSData * accountFlagsData;                                       //@synthesize accountFlagsData=_accountFlagsData - In the implementation block
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(NSDictionary *)assetCounts;
-(NSData *)lastKnownSyncAnchor;
-(id)prettyDescriptionWithAnchorDesciptionBlock:(/*^block*/id)arg1 ;
-(void)setAssetCounts:(NSDictionary *)arg1 ;
-(CPLFeatureVersionHistory *)featureVersionHistory;
-(void)setFeatureVersionHistory:(CPLFeatureVersionHistory *)arg1 ;
-(void)setLastKnownSyncAnchor:(NSData *)arg1 ;
-(CPLAccountFlags *)accountFlags;
@end

