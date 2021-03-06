/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPPlaybackReportingEvent : NSObject {

	NSString* _name;
	double _timestamp;
	id _value;
	long long _type;
	double _duration;
	long long _durationMS;
	TVPPlaybackReportingEvent* _startEvent;

}

@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) id value;                                                   //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long durationMS;                                       //@synthesize durationMS=_durationMS - In the implementation block
@property (assign,nonatomic,__weak) TVPPlaybackReportingEvent * startEvent;              //@synthesize startEvent=_startEvent - In the implementation block
-(id)description;
-(double)timestamp;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(long long)type;
-(void)setValue:(id)arg1 ;
-(id)value;
-(TVPPlaybackReportingEvent *)startEvent;
-(long long)durationMS;
-(void)setDurationMS:(long long)arg1 ;
-(void)setStartEvent:(TVPPlaybackReportingEvent *)arg1 ;
@end

