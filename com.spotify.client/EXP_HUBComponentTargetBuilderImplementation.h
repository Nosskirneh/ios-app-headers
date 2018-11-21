//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBComponentTargetBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class EXP_HUBComponentDefaults, EXP_HUBViewModelBuilderImplementation, NSMutableDictionary, NSMutableOrderedSet, NSURL;
@protocol EXP_HUBIconImageResolver, EXP_HUBViewModelBuilder;

@interface EXP_HUBComponentTargetBuilderImplementation : NSObject <EXP_HUBComponentTargetBuilder, NSCopying>
{
    NSURL *_URI;
    NSMutableOrderedSet *_actionIdentifiers;
    NSMutableDictionary *_customData;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    EXP_HUBViewModelBuilderImplementation *_initialViewModelBuilderImplementation;
}

@property(retain, nonatomic) EXP_HUBViewModelBuilderImplementation *initialViewModelBuilderImplementation; // @synthesize initialViewModelBuilderImplementation=_initialViewModelBuilderImplementation;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSMutableOrderedSet *actionIdentifiers; // @synthesize actionIdentifiers=_actionIdentifiers;
@property(copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)getOrCreateInitialViewModelBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (void)addActionWithNamespace:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) id <EXP_HUBViewModelBuilder> initialViewModelBuilder;
- (id)build;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2 actionIdentifiers:(id)arg3;

@end

