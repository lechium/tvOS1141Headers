/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation> {

	NSArray* _memberAnnotations;
	NSString* _clusteringIdentifier;
	CLLocationCoordinate2D __coordinate;
	NSString* __title;
	NSString* __subtitle;
	struct {
		unsigned hasCoordinate : 1;
		unsigned hasMutableCoordinate : 1;
		unsigned hasTitle : 1;
		unsigned hasSubtitle : 1;
	}  _flags;

}

@property (nonatomic,copy) NSString * clusteringIdentifier;                    //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize _title=__title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize _subtitle=__subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * memberAnnotations;                    //@synthesize memberAnnotations=_memberAnnotations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize _coordinate=__coordinate - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)clusteringIdentifier;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(id)initWithMemberAnnotations:(id)arg1 ;
-(BOOL)_isMKClusterAnnotation;
-(CLLocationCoordinate2D)_averageCoordinate;
-(NSArray *)memberAnnotations;
@end

