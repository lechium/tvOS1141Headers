/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDate, NSString;

@interface DSGeneralLogFile : NSObject {

	int _logVersion;
	NSURL* _url;
	NSDate* _restoreDate;
	NSDate* _updateDate;
	NSDate* _logStartDate;
	NSString* _hardwareModel;
	NSString* _currentOSVersion;
	NSString* _serialNumber;

}

@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * restoreDate;                     //@synthesize restoreDate=_restoreDate - In the implementation block
@property (nonatomic,readonly) NSDate * updateDate;                      //@synthesize updateDate=_updateDate - In the implementation block
@property (nonatomic,readonly) NSDate * logStartDate;                    //@synthesize logStartDate=_logStartDate - In the implementation block
@property (nonatomic,readonly) NSString * hardwareModel;                 //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) NSString * currentOSVersion;              //@synthesize currentOSVersion=_currentOSVersion - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) int logVersion;                           //@synthesize logVersion=_logVersion - In the implementation block
-(NSString *)hardwareModel;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(NSDate *)updateDate;
-(BOOL)parseDetailsWithURL:(id)arg1 ;
-(BOOL)parseHeadersWithLine:(id)arg1 ;
-(BOOL)enumerateLogLinesWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSDate *)restoreDate;
-(NSDate *)logStartDate;
-(NSString *)currentOSVersion;
-(int)logVersion;
-(NSString *)serialNumber;
@end

