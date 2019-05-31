/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFApiResults.h>
@class NSArray, NSDictionary, NSData;


@protocol SFApiResults <NSObject>
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,copy) NSArray * flights; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setStatus:(int)arg1;
-(int)resultType;
-(void)setResultType:(int)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(NSData *)jsonData;
-(NSArray *)flights;
-(void)setFlights:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying> {

	SCD_Struct_SF7 _has;
	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                                        //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(void)setStatus:(int)arg1 ;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(BOOL)hasResultType;
-(BOOL)hasStatus;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)flights;
-(void)setFlights:(NSArray *)arg1 ;
@end
