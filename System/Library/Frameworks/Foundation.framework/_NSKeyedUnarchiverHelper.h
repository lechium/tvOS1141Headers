/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSError;

@interface _NSKeyedUnarchiverHelper : NSObject {

	NSArray* _white;
	unsigned _lastRef;
	NSMutableArray* _allowedClasses;
	NSError* _decodeError;

}

@property (copy) NSError * decodeError;              //@synthesize decodeError=_decodeError - In the implementation block
-(id)allowedClassNames;
-(void)setAllowedClassNames:(id)arg1 ;
-(BOOL)classNameAllowed:(Class)arg1 ;
-(NSError *)decodeError;
-(void)setDecodeError:(NSError *)arg1 ;
-(id)init;
-(void)dealloc;
@end
