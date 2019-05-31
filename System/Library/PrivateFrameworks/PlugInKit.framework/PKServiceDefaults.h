/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {

	PKServicePersonality* _personality;

}

@property (__weak) PKServicePersonality * personality;              //@synthesize personality=_personality - In the implementation block
-(id)initWithPersonality:(id)arg1 ;
-(void)setPersonality:(PKServicePersonality *)arg1 ;
-(PKServicePersonality *)personality;
-(id)objectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
