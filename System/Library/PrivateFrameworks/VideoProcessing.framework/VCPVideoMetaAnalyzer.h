/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic,retain,readonly) NSDictionary * publicResults; 
@property (nonatomic,retain,readonly) NSDictionary * privateResults; 
+(id)analyzerForTrackType:(id)arg1 withTransform:(CGAffineTransform)arg2 ;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(NSDictionary *)publicResults;
-(NSDictionary *)privateResults;
@end

