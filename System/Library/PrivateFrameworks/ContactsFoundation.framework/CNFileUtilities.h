/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNFileServices;
@interface CNFileUtilities : NSObject {

	id<CNFileServices> _services;

}
+(id)sharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)sharedInstance;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

