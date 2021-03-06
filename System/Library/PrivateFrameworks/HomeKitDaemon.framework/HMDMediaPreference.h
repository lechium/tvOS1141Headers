/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, HMDSystemPreference, HMDPreference;

@interface HMDMediaPreference : HMDPreference <HMFObject> {

	HMDSystemPreference* _homeKitPreference;

}

@property (copy,readonly) HMDPreference * appleMediaPreference; 
@property (copy,readonly) HMDPreference * airPlay2Preference; 
@property (readonly) HMDSystemPreference * homeKitPreference;                //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * propertyDescription; 
+(void)load;
-(BOOL)boolValue;
-(id)stringValue;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)numberValue;
-(HMDSystemPreference *)homeKitPreference;
-(HMDPreference *)appleMediaPreference;
-(HMDPreference *)airPlay2Preference;
-(NSString *)propertyDescription;
@end

