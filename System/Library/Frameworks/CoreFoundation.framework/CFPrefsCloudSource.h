/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsCloudSource : CFPrefsPlistSource {

	const char* _configPath;
	const char* _storeName;
	BOOL _enabled;

}
-(id)createSynchronizeMessage;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)alreadylocked_updateObservingRemoteChanges;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStoreName:(CFStringRef)arg1 ;
@end

