/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(long long)tlvid;
-(void)setTlvid:(long long)arg1 ;
@end

