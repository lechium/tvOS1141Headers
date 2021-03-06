/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject {

	BOOL _connecting;
	unsigned long long _timeOutInterval;
	AMSBTLEPeripheral* _peripheral;

}

@property (getter=isConnecting) BOOL connecting;                          //@synthesize connecting=_connecting - In the implementation block
@property (assign) unsigned long long timeOutInterval;                    //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (nonatomic,retain) AMSBTLEPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(AMSBTLEPeripheral *)peripheral;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(void)setTimeOutInterval:(unsigned long long)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(BOOL)arg2 ;
-(unsigned long long)timeOutInterval;
-(BOOL)isConnecting;
-(void)setConnecting:(BOOL)arg1 ;
@end

