/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {

	NSDictionary* _attributionInfo;
	long long _attributionType;

}

@property (nonatomic,copy,readonly) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,readonly) long long attributionType;                        //@synthesize attributionType=_attributionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID; 
-(long long)attributionType;
-(NSString *)bundleID;
-(id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 ;
-(NSDictionary *)attributionInfo;
@end

