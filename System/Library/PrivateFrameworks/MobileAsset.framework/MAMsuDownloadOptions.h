/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions {

	BOOL _supervised;
	NSString* _requestedProductVersion;
	long long _delayPeriod;

}

@property (nonatomic,retain) NSString * requestedProductVersion;              //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                           //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                 //@synthesize supervised=_supervised - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supervised;
-(NSString *)requestedProductVersion;
-(long long)delayPeriod;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)logOptions;
@end
