/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppUserDefaultsStoring.h>

@class NSString;

@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserDefaults;
-(void)removeDataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
@end
