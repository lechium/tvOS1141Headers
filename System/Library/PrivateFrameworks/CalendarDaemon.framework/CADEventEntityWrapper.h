/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper {

	double _occurrenceDate;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3 ;
-(id)occurrenceDate;
@end

