/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPTimeRange, TVImageProxy, NSString, TVPDateRange;

@interface TVPChapter : NSObject {

	TVPTimeRange* _timeRange;
	TVImageProxy* _imageProxy;
	NSString* _localizedName;
	NSString* _chapterDescription;
	TVPDateRange* _dateRange;

}

@property (nonatomic,copy) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * chapterDescription;              //@synthesize chapterDescription=_chapterDescription - In the implementation block
@property (nonatomic,retain) TVPTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) TVPDateRange * dateRange;                 //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                //@synthesize imageProxy=_imageProxy - In the implementation block
-(TVPTimeRange *)timeRange;
-(void)setTimeRange:(TVPTimeRange *)arg1 ;
-(NSString *)localizedName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(NSString *)chapterDescription;
-(void)setChapterDescription:(NSString *)arg1 ;
-(TVPDateRange *)dateRange;
-(void)setDateRange:(TVPDateRange *)arg1 ;
@end
