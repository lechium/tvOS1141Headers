/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationScanResults : RTNotification {

	NSArray* _scanResults;

}

@property (nonatomic,readonly) NSArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(NSArray *)scanResults;
-(id)initWithScanResults:(id)arg1 ;
@end

