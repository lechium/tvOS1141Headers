/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PVMomentProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)localIdentifier;
-(unsigned long long)estimatedAssetCount;
-(CLLocationCoordinate2D)approximateCoordinate;

@end
