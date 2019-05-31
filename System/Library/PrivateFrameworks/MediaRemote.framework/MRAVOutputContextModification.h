/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSArray, MSVCallback, NSString;

@interface MRAVOutputContextModification : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _valid;
	unsigned long long _modificationType;
	NSArray* _outputDevices;
	MSVCallback* _callback;
	NSString* _password;

}

@property (nonatomic,readonly) unsigned long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) MSVCallback * callback;                           //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
+(id)replaceModificationWithDevices:(id)arg1 callback:(id)arg2 ;
+(id)addModificationWithDevices:(id)arg1 callback:(id)arg2 ;
+(id)removeModificationWithDevices:(id)arg1 callback:(id)arg2 ;
-(unsigned long long)modificationType;
-(MSVCallback *)callback;
-(void)invalidate;
-(void)dealloc;
-(BOOL)valid;
-(NSString *)password;
-(id)initWithType:(unsigned long long)arg1 devices:(id)arg2 callback:(id)arg3 ;
-(NSArray *)outputDevices;
-(void)setPassword:(NSString *)arg1 ;
@end

