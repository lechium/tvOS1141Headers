/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface _CPBundleIdentifierString : NSString {

	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	BOOL _isProcessName;

}
-(void)_loadBundleIdentifierOrProcessName;
-(id)_initWithExecutablePath:(id)arg1 ;
-(BOOL)_isProcessName;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

