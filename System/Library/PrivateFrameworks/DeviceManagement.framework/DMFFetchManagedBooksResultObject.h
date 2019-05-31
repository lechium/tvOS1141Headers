/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject {

	NSArray* _books;

}

@property (nonatomic,copy,readonly) NSArray * books;              //@synthesize books=_books - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)books;
-(id)initWithBooks:(id)arg1 ;
@end
