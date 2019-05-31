/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalLogEnvelope : NSObject {

	NSString* _logName;
	int _level;
	NSString* _message;
	int _processID;
	NSString* _processName;
	unsigned _machPort;
	double _timestamp;
	NSString* _function;

}

@property (nonatomic,retain) NSString * logName;                  //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) int level;                           //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int processID;                       //@synthesize processID=_processID - In the implementation block
@property (nonatomic,retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) unsigned machPort;                   //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * function;                 //@synthesize function=_function - In the implementation block
-(unsigned)machPort;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSString *)processName;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)logName;
-(id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3 ;
-(void)setProcessID:(int)arg1 ;
-(void)setLogName:(NSString *)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
-(int)processID;
-(NSString *)function;
@end

