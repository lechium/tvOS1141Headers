/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _managedProperties;

}

@property (nonatomic,retain) NSMutableDictionary * managedProperties;              //@synthesize managedProperties=_managedProperties - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
+(void)initialize;
-(id)init;
-(NSMutableDictionary *)managedProperties;
-(void)setManagedProperties:(NSMutableDictionary *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(IKAppContext *)appContext;
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)setJSValue:(id)arg1 forProperty:(id)arg2 ;
-(id)jsValueForProperty:(id)arg1 ;
@end

