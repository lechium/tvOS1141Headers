/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceBatchSpatialLookupTicket;
@class NSArray, NSString;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	NSArray* _locationGeoParameters;
	id<GEOMapServiceBatchSpatialLookupTicket> _businessGenericTicket;
	NSArray* _regions;
	BOOL _isCancelled;
	double _precision;
	SCD_Struct_CL6 _statistics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isCancelled;                               //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL6 statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                       //@synthesize precision=_precision - In the implementation block
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
+(double)defaultRadiusForCategories:(id)arg1 ;
-(id)init;
-(void)cancel;
-(id)regions;
-(BOOL)isCancelled;
-(SCD_Struct_CL6)statistics;
-(void)setStatistics:(SCD_Struct_CL6)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)cacheItems:(id)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(id)regionFromMapItem:(id)arg1 ;
-(id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3 ;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
@end
