/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIncident.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, GEOPBTransitIncident;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {

	GEOPBTransitIncident* _incident;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * messageForRoutePlanning; 
@property (nonatomic,readonly) NSString * messageForRouteStepping; 
@property (nonatomic,readonly) NSString * messageForNonRoutable; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (getter=isBlockingIncident,nonatomic,readonly) BOOL blockingIncident; 
@property (nonatomic,readonly) NSArray * affectedEntities; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)muid;
-(NSDate *)creationDate;
-(id)initWithIncident:(id)arg1 ;
-(NSDate *)lastUpdated;
-(long long)iconType;
-(NSString *)summary;
-(NSString *)fullDescription;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(NSString *)messageForNonRoutable;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
@end

