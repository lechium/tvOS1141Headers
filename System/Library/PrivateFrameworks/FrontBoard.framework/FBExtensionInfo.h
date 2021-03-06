/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBBundleInfo.h>

@class NSString;

@interface FBExtensionInfo : FBBundleInfo {

	NSString* _typeIdentifier;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
-(void)dealloc;
-(NSString *)typeIdentifier;
-(NSString *)extensionIdentifier;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(id)_initWithPlugInKitProxy:(id)arg1 ;
@end

