/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNRequest.h>

@interface VNBurstAnalysisResultsRequest : VNRequest {

	BOOL _includeClusters;
	BOOL _includeAllImageIdentifiers;
	BOOL _includeAllImageStats;

}

@property (assign,nonatomic) BOOL includeClusters;                         //@synthesize includeClusters=_includeClusters - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageIdentifiers;              //@synthesize includeAllImageIdentifiers=_includeAllImageIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageStats;                    //@synthesize includeAllImageStats=_includeAllImageStats - In the implementation block
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)includeClusters;
-(BOOL)includeAllImageIdentifiers;
-(BOOL)includeAllImageStats;
-(void)setIncludeClusters:(BOOL)arg1 ;
-(void)setIncludeAllImageIdentifiers:(BOOL)arg1 ;
-(void)setIncludeAllImageStats:(BOOL)arg1 ;
@end

