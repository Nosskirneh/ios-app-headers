//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWACollectionViewCell-Protocol.h"
#import "GWAComponentGroupCardHeader-Protocol.h"
#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAResultingComponent-Protocol.h"
#import "GWATriggerComponent-Protocol.h"

@class GWADependencyGraph, GWALabel, NSMutableArray, NSString, OrchCardHeader;

@interface GWACardHeaderView : UIView <GWACollectionViewCell, GWAComponentGroupCardHeader, GWADependencyGraphComponent, GWAResultingComponent, GWATriggerComponent>
{
    OrchCardHeader *_cardHeaderProto;
    GWADependencyGraph *_dependencyGraph;
    GWALabel *_headerLabel;
    GWALabel *_headerSublabel;
    NSMutableArray *_triggers;
}

- (void).cxx_destruct;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)cardHeaderCollapsed:(_Bool)arg1;
- (double)heightWithConstrainedToWidth:(double)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) OrchCardHeader *proto;
- (id)initWithCardHeader:(id)arg1 colorGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

