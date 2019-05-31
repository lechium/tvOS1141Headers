/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCSignpostManager : NSObject
+(void)willPostEffectiveSettingsChangedNotification;
+(void)willSetFeature:(id)arg1 ;
+(unsigned)_codeForFeature:(id)arg1 ;
+(void)_signpostWithCode:(unsigned)arg1 arg:(unsigned long long)arg2 ;
+(BOOL)_generateCodesFileError:(id*)arg1 ;
+(void)_startTrace;
+(void)_endTraceAndOutputResults;
+(id)_parseResultsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
+(id)_fileLineWithCode:(unsigned long long)arg1 identifier:(id)arg2 ;
+(unsigned)_codeForFeatureIndex:(unsigned long long)arg1 ;
+(void)_execute:(id)arg1 ;
+(unsigned)_ariadneCodeForCode:(unsigned)arg1 ;
+(void)willGetFeature:(id)arg1 ;
+(id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id*)arg4 ;
@end

