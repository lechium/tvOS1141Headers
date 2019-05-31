/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest {

	unsigned long long _algorithm;
	NSString* _textRecognition;
	unsigned long long _minimumCharacterPixelHeight;
	BOOL _reportCharacterBoxes;
	BOOL _detectDiacritics;
	BOOL _minimizeFalseDetections;

}

@property (assign,nonatomic) unsigned long long algorithm;                                //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) unsigned long long minimumCharacterPixelHeight;              //@synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                                       //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalseDetections;                                //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
@property (nonatomic,copy) NSString * textRecognition;                                    //@synthesize textRecognition=_textRecognition - In the implementation block
@property (assign,nonatomic) BOOL reportCharacterBoxes;                                   //@synthesize reportCharacterBoxes=_reportCharacterBoxes - In the implementation block
+(void)initialize;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(BOOL)reportCharacterBoxes;
-(unsigned long long)minimumCharacterPixelHeight;
-(BOOL)detectDiacritics;
-(BOOL)minimizeFalseDetections;
-(NSString *)textRecognition;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 error:(id*)arg2 ;
-(void)setReportCharacterBoxes:(BOOL)arg1 ;
-(void)setTextRecognition:(NSString *)arg1 ;
-(void)setMinimumCharacterPixelHeight:(unsigned long long)arg1 ;
-(unsigned long long)algorithm;
@end
