/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDTapToRadarRequest : NSObject {

	NSString* _message;
	NSString* _uuid;
	NSString* _componentName;
	NSString* _componentVersion;
	NSString* _componentID;
	NSString* _relatedRadar;

}

@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,retain) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (nonatomic,retain) NSString * componentID;                   //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) NSString * relatedRadar;                  //@synthesize relatedRadar=_relatedRadar - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)componentName;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(void)setComponentID:(NSString *)arg1 ;
-(void)setRelatedRadar:(NSString *)arg1 ;
-(NSString *)componentVersion;
-(NSString *)componentID;
-(NSString *)relatedRadar;
@end

