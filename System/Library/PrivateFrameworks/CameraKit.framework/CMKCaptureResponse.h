/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMKInflightAsset, NSDictionary, CMKCaptureRequest, NSMutableDictionary;

@interface CMKCaptureResponse : NSObject {

	BOOL _completed;
	long long _type;
	CMKInflightAsset* _asset;
	NSDictionary* __parameterStorage;
	CMKCaptureRequest* _request;
	NSMutableDictionary* _metadata;
	NSDictionary* _additionalInformation;
	NSDictionary* _diagnostics;

}

@property (nonatomic,copy,readonly) NSDictionary * _parameterStorage;              //@synthesize _parameterStorage=__parameterStorage - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;                    //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) CMKInflightAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) CMKCaptureRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalInformation;                   //@synthesize additionalInformation=_additionalInformation - In the implementation block
@property (nonatomic,copy) NSDictionary * diagnostics;                             //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setRequest:(CMKCaptureRequest *)arg1 ;
-(id)init;
-(CMKCaptureRequest *)request;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(CMKInflightAsset *)asset;
-(void)setAsset:(CMKInflightAsset *)arg1 ;
-(NSDictionary *)_parameterStorage;
-(id)parameterForKey:(id)arg1 ;
-(void)releaseCachedImages;
-(NSDictionary *)additionalInformation;
-(void)setAdditionalInformation:(NSDictionary *)arg1 ;
-(NSDictionary *)diagnostics;
-(void)setDiagnostics:(NSDictionary *)arg1 ;
@end

