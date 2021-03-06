/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateIntervalFormatter, NSLocale;

@interface CLSDateIntervalFormatter : NSObject {

	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSLocale* _locale;

}

@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
+(id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(BOOL)arg2 displayLongMonth:(BOOL)arg3 ;
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
+(BOOL)_yearIsNeededForDisplayingDate:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
@end

