/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest {

	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
-(unsigned long long)badgeValue;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
-(int)operationType;
@end

