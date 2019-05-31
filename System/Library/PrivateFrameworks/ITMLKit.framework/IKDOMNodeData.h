/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {

	BOOL _updated;
	BOOL _childrenUpdated;
	BOOL _subtreeUpdated;
	BOOL _autoHighlightRead;
	BOOL _bindingUpdated;
	BOOL _dataUpdated;
	IKDOMNode* _ownerJSNode;
	NSMutableDictionary* _featuresMap;

}

@property (nonatomic,retain) NSMutableDictionary * featuresMap;                              //@synthesize featuresMap=_featuresMap - In the implementation block
@property (assign,nonatomic,__weak) IKDOMNode * ownerJSNode;                                 //@synthesize ownerJSNode=_ownerJSNode - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                  //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isChildrenUpdated,nonatomic) BOOL childrenUpdated;                  //@synthesize childrenUpdated=_childrenUpdated - In the implementation block
@property (assign,getter=isSubtreeUpdated,nonatomic) BOOL subtreeUpdated;                    //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (assign,getter=isAutoHighlightRead,nonatomic) BOOL autoHighlightRead;              //@synthesize autoHighlightRead=_autoHighlightRead - In the implementation block
@property (assign,getter=isBindingUpdated,nonatomic) BOOL bindingUpdated;                    //@synthesize bindingUpdated=_bindingUpdated - In the implementation block
@property (assign,getter=isDataUpdated,nonatomic) BOOL dataUpdated;                          //@synthesize dataUpdated=_dataUpdated - In the implementation block
+(void)load;
+(id)jsNodeDataForNode:(xmlNode*)arg1 create:(BOOL)arg2 ;
-(void)setUpdated:(BOOL)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(BOOL)isChildrenUpdated;
-(void)setChildrenUpdated:(BOOL)arg1 ;
-(IKDOMNode *)ownerJSNode;
-(void)setAutoHighlightRead:(BOOL)arg1 ;
-(void)setBindingUpdated:(BOOL)arg1 ;
-(BOOL)isDataUpdated;
-(void)setDataUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)featuresMap;
-(void)setFeaturesMap:(NSMutableDictionary *)arg1 ;
-(void)setFeature:(id)arg1 forName:(id)arg2 ;
-(id)featureForName:(id)arg1 ;
-(void)setOwnerJSNode:(IKDOMNode *)arg1 ;
-(BOOL)isAutoHighlightRead;
-(BOOL)isBindingUpdated;
-(BOOL)isUpdated;
-(BOOL)isSubtreeUpdated;
@end

