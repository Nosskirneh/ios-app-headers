//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackView.h"

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWALinkViewDelegate-Protocol.h"

@class GWADependencyGraph, NSArray, NSString, OrchActionBar;
@protocol GWAActionBarViewDelegate;

@interface GWAActionBarView : OAStackView <GWADependencyGraphComponent, GWALinkViewDelegate>
{
    id <GWAActionBarViewDelegate> _delegate;
    OrchActionBar *_actionBarProto;
    GWADependencyGraph *_dependencyGraph;
    NSArray *_linkViews;
    NSArray *_components;
    struct CGSize _lastUpdatedSize;
}

@property struct CGSize lastUpdatedSize; // @synthesize lastUpdatedSize=_lastUpdatedSize;
- (void).cxx_destruct;
- (id)horizontalRightAlignedStackView;
- (void)tapLink;
- (void)linkView:(id)arg1 linkTapped:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)layoutSubviews;
- (void)addArrangedSubview:(id)arg1;
- (id)initWithActionBar:(id)arg1 context:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

