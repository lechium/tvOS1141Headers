/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface KCPairingChannelContext : NSObject {

	NSString* _model;
	NSString* _modelVersion;
	NSString* _modelClass;
	NSString* _osVersion;

}

@property (retain) NSString * model;                     //@synthesize model=_model - In the implementation block
@property (retain) NSString * modelVersion;              //@synthesize modelVersion=_modelVersion - In the implementation block
@property (retain) NSString * modelClass;                //@synthesize modelClass=_modelClass - In the implementation block
@property (retain) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(void)setModelVersion:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)model;
-(void)setModelClass:(NSString *)arg1 ;
-(NSString *)modelClass;
@end

