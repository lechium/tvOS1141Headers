/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTimeZone, NSString;


@protocol GEOServerFormatTokenTimeStampValue <NSObject,NSCoding>
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
@required
-(NSString *)formatPattern;
-(NSTimeZone *)timeZone;
-(double)timeStamp;

@end

