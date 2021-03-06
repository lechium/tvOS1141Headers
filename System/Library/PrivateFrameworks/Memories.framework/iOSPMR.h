/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface iOSPMR : NSObject {

	BOOL gPMR_ENABLED;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(unsigned long long)returnStartTime_Nanoseconds;
-(double)returnDelta_Milliseconds:(unsigned long long)arg1 ;
-(id)stopTimerAndReportPMR:(unsigned long long)arg1 logFilename:(id)arg2 pmrKey:(id)arg3 comment:(id)arg4 ;
-(unsigned long long)returnDelta_Nanoseconds:(unsigned long long)arg1 ;
-(double)convertNanoSecondsToSeconds:(unsigned long long)arg1 ;
-(void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2 ;
-(void)addDelta:(unsigned long long)arg1 toArray:(id)arg2 ;
@end

