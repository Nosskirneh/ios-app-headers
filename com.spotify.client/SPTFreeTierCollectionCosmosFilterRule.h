//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionCosmosOptionsUpdate-Protocol.h"
#import "SPTSortingFilteringFilterRule-Protocol.h"

@class NSString;

@interface SPTFreeTierCollectionCosmosFilterRule : NSObject <SPTSortingFilteringFilterRule, SPTFreeTierCollectionCosmosOptionsUpdate>
{
    NSString *_identifier;
    NSString *_title;
    CDUnknownBlockType _applyRule;
}

+ (id)ruleWithIdentifier:(id)arg1 title:(id)arg2 applyRule:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType applyRule; // @synthesize applyRule=_applyRule;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)applyRuleToOptions:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 applyRule:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

