/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding> {

	BOOL _enablePropertyModificationLogging;
	BOOL _unitTesting;
	int _databaseInitOptions;
	int _management;
	NSString* _clientIDSuffix;
	NSString* _databasePath;

}

@property (assign,nonatomic) int databaseInitOptions;                             //@synthesize databaseInitOptions=_databaseInitOptions - In the implementation block
@property (nonatomic,retain) NSString * clientIDSuffix;                           //@synthesize clientIDSuffix=_clientIDSuffix - In the implementation block
@property (assign,nonatomic) BOOL enablePropertyModificationLogging;              //@synthesize enablePropertyModificationLogging=_enablePropertyModificationLogging - In the implementation block
@property (assign,nonatomic) int management;                                      //@synthesize management=_management - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                             //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                    //@synthesize unitTesting=_unitTesting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setUnitTesting:(BOOL)arg1 ;
-(NSString *)clientIDSuffix;
-(id)validOptionsForConnection:(id)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(BOOL)enablePropertyModificationLogging;
-(int)management;
-(void)setDatabaseInitOptions:(int)arg1 ;
-(void)setClientIDSuffix:(NSString *)arg1 ;
-(void)setEnablePropertyModificationLogging:(BOOL)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)unitTesting;
-(void)setManagement:(int)arg1 ;
-(int)databaseInitOptions;
-(NSString *)databasePath;
@end

