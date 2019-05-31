/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateDepthData;
	BOOL _filteringEnabled;

}

@property (assign,nonatomic) BOOL discardsLateDepthData;              //@synthesize discardsLateDepthData=_discardsLateDepthData - In the implementation block
@property (assign,nonatomic) BOOL filteringEnabled;                   //@synthesize filteringEnabled=_filteringEnabled - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)discardsLateDepthData;
-(void)setDiscardsLateDepthData:(BOOL)arg1 ;
-(void)setFilteringEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)filteringEnabled;
@end

