//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubDictionaryPathInitialization.h"
#import "SPTHubMutableDictionaryPath.h"

@class NSString, SPTHubDictionaryPathNode;

@interface SPTHubMutableDictionaryPathImplementation : NSObject <SPTHubMutableDictionaryPath, SPTHubDictionaryPathInitialization>
{
    _Bool _producesArrayOutput;
    SPTHubDictionaryPathNode *_rootNode;
    SPTHubDictionaryPathNode *_topNode;
}

+ (id)combinedDictionaryPathWithPaths:(id)arg1;
+ (id)combinedPathWithPaths:(id)arg1;
@property(nonatomic) _Bool producesArrayOutput; // @synthesize producesArrayOutput=_producesArrayOutput;
@property(retain, nonatomic) SPTHubDictionaryPathNode *topNode; // @synthesize topNode=_topNode;
@property(retain, nonatomic) SPTHubDictionaryPathNode *rootNode; // @synthesize rootNode=_rootNode;
- (void).cxx_destruct;
- (id)createPathWithFinalTransformation:(CDUnknownBlockType)arg1 returnType:(Class)arg2;
- (id)appendNode:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <SPTHubDictionaryActionButtonIconAlignmentPath> actionButtonIconAlignmentValue;
@property(readonly, nonatomic) id <SPTHubDictionaryActionButtonStylePath> actionButtonStyleValue;
@property(readonly, nonatomic) id <SPTHubDictionaryActionButtonSizePath> actionButtonSizeValue;
@property(readonly, nonatomic) id <SPTHubDictionaryItemTypePath> itemTypeValue;
@property(readonly, nonatomic) id <SPTHubDictionaryHeaderViewStylePath> headerViewStyleValue;
@property(readonly, nonatomic) id <SPTHubDictionaryTargetTypePath> targetTypeValue;
@property(readonly, nonatomic) id <SPTHubDictionaryImageDecorationPath> imageDecorationValue;
@property(readonly, nonatomic) id <SPTHubDictionaryImageStylePath> imageStyleValue;
@property(readonly, nonatomic) id <SPTHubDictionaryIconPath> iconValue;
@property(readonly, nonatomic) id <SPTHubDictionaryDictionaryPath> dictionaryValue;
@property(readonly, nonatomic) id <SPTHubDictionaryDatePath> dateValue;
@property(readonly, nonatomic) id <SPTHubDictionaryURLPath> URLValue;
@property(readonly, nonatomic) id <SPTHubDictionaryStringPath> stringValue;
@property(readonly, nonatomic) id <SPTHubDictionaryDoublePath> doubleValue;
@property(readonly, nonatomic) id <SPTHubDictionaryUnsignedIntegerPath> unsignedIntegerValue;
@property(readonly, nonatomic) id <SPTHubDictionaryBoolPath> boolValue;
- (id)runBlock:(CDUnknownBlockType)arg1;
- (id)mapTo:(id)arg1 missingValueHandler:(CDUnknownBlockType)arg2;
- (id)forEach;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)goTo:(id)arg1 missingValueHandler:(CDUnknownBlockType)arg2;
- (id)initWithRootNode:(id)arg1 topNode:(id)arg2 producesArrayOutput:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
