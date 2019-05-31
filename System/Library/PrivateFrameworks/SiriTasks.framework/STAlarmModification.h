/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSURL, NSNumber, NSString;

@interface STAlarmModification : STSiriModelObject {

	long long _addedFrequency;
	NSURL* _alarmId;
	NSNumber* _enabled;
	NSNumber* _hour;
	NSString* _label;
	NSNumber* _minute;
	long long _removedFrequency;

}
+(BOOL)supportsSecureCoding;
-(id)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)label;
-(id)hour;
-(id)minute;
-(id)alarmId;
-(long long)addedFrequency;
-(long long)removedFrequency;
-(id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7 ;
@end
