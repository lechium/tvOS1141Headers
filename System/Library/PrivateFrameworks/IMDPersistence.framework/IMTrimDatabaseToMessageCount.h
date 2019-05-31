/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer {

	long long _messageCount;

}

@property (nonatomic,readonly) long long messageCount;              //@synthesize messageCount=_messageCount - In the implementation block
-(long long)messageCount;
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 messageCount:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
@end

