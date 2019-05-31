/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PBSMigration : NSObject {

	Class _handlingClass;
	NSString* _name;
	/*^block*/id _handler;
	unsigned long long _state;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)init;
-(unsigned long long)state;
-(NSString *)name;
-(id)initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHandlingClass:(Class)arg1 ;
-(unsigned long long)executeMigrationWithContext:(id)arg1 ;
@end
