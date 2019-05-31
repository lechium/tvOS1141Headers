/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface IFCentroidScoringParameters : NSObject {

	NSDictionary* _scale;
	long long _divergence;

}

@property (copy) NSDictionary * scale;                //@synthesize scale=_scale - In the implementation block
@property (assign) long long divergence;              //@synthesize divergence=_divergence - In the implementation block
+(id)defaultParameters;
-(NSDictionary *)scale;
-(void)setScale:(NSDictionary *)arg1 ;
-(void)setDivergence:(long long)arg1 ;
-(long long)divergence;
@end

