/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableDictionary, NSString;

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableDictionary* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)_currentAppModuleName;
-(id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2 ;
-(id)_findValidClassName:(id)arg1 ;
@end

