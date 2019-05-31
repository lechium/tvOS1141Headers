/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject {

	NSMutableDictionary* _keysForEmails;
	NSMutableDictionary* _emailsForKey;
	int _maxKey;
	NSString* _plistPath;

}
+(id)sharedManager;
-(void)dealloc;
-(void)_loadDictionariesIfNeeded;
-(id)emailAddressForKey:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg1 ;
@end

