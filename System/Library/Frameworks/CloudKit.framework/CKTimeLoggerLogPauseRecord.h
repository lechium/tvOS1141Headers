/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKTimeLoggerLogPauseRecord : NSObject {

	double _time;
	NSString* _message;

}

@property (assign,nonatomic) double time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

