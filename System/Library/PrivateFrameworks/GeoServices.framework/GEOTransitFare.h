/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString, NSArray;


@protocol GEOTransitFare <NSObject>
@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@required
-(BOOL)cashOnly;
-(NSString *)currencyCode;
-(NSArray *)supportedICCardProviders;
-(long long)type;
-(NSDecimalNumber *)value;

@end

