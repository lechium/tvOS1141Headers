/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMMotionAlarmDelegateProtocol;
@class NSString;

@interface CMMotionAlarmManager : NSObject {

	id<CMMotionAlarmDelegateProtocol> _delegate;
	NSString* _name;

}

@property (assign,nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)defaultManager;
-(BOOL)unregisterAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerAlarmWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)launchRemoteAppWithError:(id*)arg1 ;
-(BOOL)unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id<CMMotionAlarmDelegateProtocol>)delegate;
-(void)setDelegate:(id<CMMotionAlarmDelegateProtocol>)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

