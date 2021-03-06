/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	unsigned long long _serialNumber;
	id _plugInHoldToken;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) id plugInHoldToken;                           //@synthesize plugInHoldToken=_plugInHoldToken - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(id)plugInHoldToken;
-(void)setPlugInHoldToken:(id)arg1 ;
-(unsigned long long)serialNumber;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

