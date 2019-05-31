/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSNumber, NSData;

@interface HMDPreference : HMFObject {

	NSString* _key;
	unsigned long long _options;
	id<NSObject> _value;

}

@property (readonly) NSString * key;                                     //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (copy) id<NSObject> value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
+(id)shortDescription;
-(id)init;
-(NSString *)key;
-(BOOL)boolValue;
-(void)setValue:(id<NSObject>)arg1 ;
-(id<NSObject>)value;
-(unsigned long long)options;
-(NSString *)stringValue;
-(id)shortDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(NSNumber *)numberValue;
-(NSData *)dataValue;
@end

