/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {

	double _duration;
	unsigned long long _index;
	double _time;
	NSString* _title;
	NSURL* _url;
	int _markerType;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) double comparableTime; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkAtPlaybackTime; 
@property (assign,nonatomic) double time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double maxTime; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) int markerType;                             //@synthesize markerType=_markerType - In the implementation block
-(double)time;
-(void)setTime:(double)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(NSURL *)url;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithMarkerType:(int)arg1 ;
-(int)markerType;
-(id)urlTitleTrimmingCharacterSet;
-(double)comparableTime;
-(double)maxTime;
-(BOOL)hasArtworkAtPlaybackTime;
@end

