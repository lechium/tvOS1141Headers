/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKIDSDestination : NSObject {

	NSString* _deviceIdentifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
-(NSString *)deviceIdentifier;
-(id)description;
-(NSString *)name;
-(id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
@end
