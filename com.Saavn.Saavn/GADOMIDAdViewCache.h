//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdSessionRegistry, GADOMIDViewKey, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface GADOMIDAdViewCache : NSObject
{
    NSMutableDictionary *_adViews;
    NSMutableDictionary *_friendlyObstructions;
    GADOMIDViewKey *_key;
    _Bool _isAdViewProcessed;
    NSMutableSet *_rootViews;
    NSMutableSet *_visibleSessionIds;
    NSMutableSet *_hiddenSessionIds;
    GADOMIDAdSessionRegistry *_adSessionRegistry;
}

@property(readonly, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *hiddenSessionIds;
@property(readonly, nonatomic) NSSet *visibleSessionIds;
@property(readonly, nonatomic) NSSet *rootViews;
@property(readonly, nonatomic) NSDictionary *friendlyObstructions;
@property(readonly, nonatomic) NSDictionary *adViews;
- (unsigned long long)typeForView:(id)arg1;
- (id)friendlySessionIdsForView:(id)arg1;
- (id)sessionIdForView:(id)arg1;
- (void)onAdViewProcessed;
- (void)cleanup;
- (void)addFriendlyObstruction:(id)arg1 forAdSession:(id)arg2;
- (void)prepareFriendlyObstructionsForAdSession:(id)arg1;
- (_Bool)buildRootViewsFromAdView:(id)arg1;
- (void)prepare;
- (id)initWithAdSessionRegistry:(id)arg1;

@end

