/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDServiceNameComponents : HMFObject {

	NSString* _rawServiceName;
	NSString* _serviceName;
	NSString* _roomName;
	NSString* _format;

}

@property (nonatomic,retain) NSString * rawServiceName;              //@synthesize rawServiceName=_rawServiceName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * roomName;                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 ;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(NSString *)serviceName;
-(id)composedName;
-(id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
-(void)setRawServiceName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(NSString *)rawServiceName;
@end

