/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(NSUUID *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
@end

