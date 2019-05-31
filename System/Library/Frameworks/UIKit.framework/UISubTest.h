/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray, NSString, NSMutableDictionary;

@interface UISubTest : NSObject {

	NSNumber* _startTime;
	NSNumber* _startFrame;
	NSMutableArray* _time;
	NSMutableArray* _fps;
	NSString* _testName;
	BOOL _showTime;
	BOOL _showFps;
	NSMutableDictionary* _data;

}

@property (readonly) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(NSNumber *)startTime;
-(void)stopWithFrameCount:(id)arg1 ;
-(id)getObjectForKey:(id)arg1 ;
-(id)outputData;
@end

