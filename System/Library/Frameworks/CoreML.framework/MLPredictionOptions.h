/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLPredictionOptions : NSObject {

	BOOL _usesCPUOnly;
	unsigned long long _classifyTopK;

}

@property (assign) unsigned long long classifyTopK;              //@synthesize classifyTopK=_classifyTopK - In the implementation block
@property (assign) BOOL useCPUOnly; 
@property (assign,nonatomic) BOOL usesCPUOnly;                   //@synthesize usesCPUOnly=_usesCPUOnly - In the implementation block
+(id)defaultOptions;
-(id)init;
-(unsigned long long)classifyTopK;
-(id)initWithUsesCPUOnly:(BOOL)arg1 ;
-(BOOL)useCPUOnly;
-(void)setUseCPUOnly:(BOOL)arg1 ;
-(void)setClassifyTopK:(unsigned long long)arg1 ;
-(BOOL)usesCPUOnly;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithUseCPUOnly:(BOOL)arg1 ;
@end

