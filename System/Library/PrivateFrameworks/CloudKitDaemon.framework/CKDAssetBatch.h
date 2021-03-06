/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CKDAssetZone, NSData, NSDictionary, CKDAssetTokenRequest, NSArray;

@interface CKDAssetBatch : NSObject {

	BOOL _isFailed;
	NSMutableArray* _assetRecords;
	CKDAssetZone* _assetZone;
	NSData* _authPutRequest;
	NSData* _authPutResponse;
	NSDictionary* _authPutResponseHeaders;
	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) NSMutableArray * assetRecords;                                //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) CKDAssetZone * assetZone;                                     //@synthesize assetZone=_assetZone - In the implementation block
@property (nonatomic,retain) NSData * authPutRequest;                                      //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,retain) NSData * authPutResponse;                                     //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * authPutResponseHeaders;                        //@synthesize authPutResponseHeaders=_authPutResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL isFailed;                                                //@synthesize isFailed=_isFailed - In the implementation block
@property (assign,nonatomic,__weak) CKDAssetTokenRequest * assetTokenRequest;              //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (readonly) unsigned sizeUpperBound; 
@property (readonly) unsigned size; 
@property (nonatomic,readonly) NSArray * allMMCSItems; 
@property (nonatomic,readonly) NSArray * allMMCSSectionItems; 
-(unsigned)size;
-(id)description;
-(BOOL)isEmpty;
-(NSMutableArray *)assetRecords;
-(unsigned)sizeUpperBound;
-(id)CKPropertiesDescription;
-(NSArray *)allMMCSItems;
-(NSArray *)allMMCSSectionItems;
-(id)allMMCSAndSectionItems;
-(id)firstMMCSItemError;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(id)initWithAssetZone:(id)arg1 ;
-(void)addAssetRecord:(id)arg1 ;
-(CKDAssetZone *)assetZone;
-(BOOL)isFailed;
-(void)setIsFailed:(BOOL)arg1 ;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(void)setAuthPutResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)authPutResponseHeaders;
-(void)setAssetRecords:(NSMutableArray *)arg1 ;
-(BOOL)isPackageSectionBatch;
-(void)setAssetZone:(CKDAssetZone *)arg1 ;
@end

