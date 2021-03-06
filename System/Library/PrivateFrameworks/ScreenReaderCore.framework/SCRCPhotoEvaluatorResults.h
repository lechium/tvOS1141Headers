/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRCPhotoEvaluatorResult, SCRCPhotoEvaluatorResultPeople;

@interface SCRCPhotoEvaluatorResults : NSObject {

	SCRCPhotoEvaluatorResult* _blurResult;
	SCRCPhotoEvaluatorResult* _colorResult;
	SCRCPhotoEvaluatorResultPeople* _peopleResult;
	SCRCPhotoEvaluatorResult* _luminanceResult;

}

@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * blurResult;                      //@synthesize blurResult=_blurResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * colorResult;                     //@synthesize colorResult=_colorResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResultPeople * peopleResult;              //@synthesize peopleResult=_peopleResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * luminanceResult;                 //@synthesize luminanceResult=_luminanceResult - In the implementation block
-(id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 peopleResult:(id)arg3 luminanceResult:(id)arg4 ;
-(SCRCPhotoEvaluatorResult *)colorResult;
-(SCRCPhotoEvaluatorResultPeople *)peopleResult;
-(SCRCPhotoEvaluatorResult *)blurResult;
-(SCRCPhotoEvaluatorResult *)luminanceResult;
@end

